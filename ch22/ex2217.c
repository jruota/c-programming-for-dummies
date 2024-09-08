/* An interactive linked-list program */
/* Dan Gookin, C Programming For Dummies */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct lili {
	int value;
	struct lili *next;
};
struct lili *first;
struct lili *current;

int menu(void);
void add(void);
void show(void);
void delrec(void);
struct lili *create(void);
void load(char *file);
void save(char *file);

/* the main function works with input only
	  everything else is handled by a function */
int main()
{
	/* initialize variables */
	char filename[] = "linked.list";
	int choice='\0';
	first=NULL;

	/* load in the file if it exists */
	load(filename);

	while(choice!='Q')
	{
		choice=menu();
		switch (choice)
		{
			case 'S':
				show();
				break;
			case 'A':
				add();
				break;
			case 'R':
				delrec();
				break;
			case 'Q':
				break;
		}
	}

	/* save the file before exiting */
	save(filename);

	return(0);
}

/* output the main menu and collect input */
int menu(void)
{
	int ch;

	printf("S)how, A)dd, R)emove, Q)uit: ");
	ch=getchar();
	/* delete excess input */
	while(getchar()!='\n')
		;
	return(toupper(ch));
}

/* add an item to the end of the linked list */
void add(void)
{
	/* special case for the first item */
	if(first==NULL)
	{
		first=create();
		current=first;
	}
	/* otherwise, find the last item */
	else
	{
		current=first;
		/* find the NULL */
		while(current->next)
			current=current->next;
		current->next=create();
		current=current->next;
	}
	printf("Type a value: ");
	scanf("%d",&current->value);
	current->next=NULL;
	/* delete excess input */
	while(getchar()!='\n') 
		;
}

/* output all structures in the linked list */
void show(void)
{
	int count=1;

	/* is the list empty? */
	if(first==NULL)
	{
		puts("Nothing to show");
		return;
	}
	puts("Showing all records:");
	current=first;
	/* loop until current==NULL */
	while(current)
	{
		printf("Record %d: %d\n",
				count,current->value);
		current=current->next;
		count++;
	}
}

/* delete a record from the list */
void delrec(void)
{
	/* the previous record must be saved */
	struct lili *previous;
	int r,c;

	/* is the list empty? */
	if(first==NULL)
	{
		puts("No records to remove");
		return;
	}

	puts("Choose a record to remove:");
	/* output the list */
	show();
	printf("Record: ");
	scanf("%d",&r);
	/* delete excess input */
	while(getchar()!='\n') 
		;
	c=1;
	/* reset the list */
	current=first;
	/* initialize the previous pointer */
	previous=NULL;
	while(c!=r)
	{
		previous=current;
		current=current->next;
		c++;
		/* bail on the end of the list */
		if(current==NULL)
		{
			puts("Record not found");
			return;
		}
	}
	/* 'current' holds the record to delete */
	/* is it the first record? */
	if(previous==NULL)
		first=current->next;
	/* otherwise, reset the next reference */
	else
		previous->next=current->next;
	printf("Record %d removed.\n",r);
	/* release memory of the current record */
	free(current);
}

/* build an empty structure & return its address */
struct lili *create(void)
{
	struct lili *a;

	a=(struct lili *)malloc(sizeof(struct lili)*1);
	if(a==NULL)
	{
		puts("Some kind of malloc() error");
		exit(1);
	}

	return(a);
}

void load(char *file)
{
	FILE *fp;
	struct lili loaded;
	int r,records;

	fp = fopen(file,"r");
	/* if an error, assume that the file
	   doesn't exist */
	if( fp==NULL )
		return;

	/* read in the records */
	records = 0;
	while( !feof(fp) )
	{
		r = fread(&loaded,sizeof(struct lili),1,fp);
		if( r==0 )
			break;
		/* this code lifted from the create() function */
		if(first==NULL)
		{
			first=create();
			current=first;
		}
		else
		{
			current=first;
			/* find the NULL */
			while(current->next)
				current=current->next;
			current->next=create();
			current=current->next;
		}
		/* update the new structure with the
		   data pulled in from the file */
		current->value = loaded.value;
		/* ignore the pointer value retrieved */
		current->next = NULL;
		records++;
	}
	fclose(fp);
	printf("%d records read from '%s'\n",records,file);
}

void save(char *file)
{
	int records;
	FILE *fp;

	/* open the file */
	fp = fopen(file,"w");
	if( fp==NULL )
	{
		printf("Unable to create '%s'\n",file);
		return;
	}

	/* write the records */
	records = 0;
	current = first;
	/* if the list is empty, first==NULL
	   and nothing is written */
	while(current)
	{
		fwrite(current,sizeof(struct lili),1,fp);
		current = current->next;
		records++;
	}

	fclose(fp);
	printf("%d records written\n",records);
}
