#include "functions.h"

void add(struct phone_book *book)
{
    for (int i = 0; i < PHONEBOOK_SIZE; i++)
    {
        if (strncmp(book[i].name, "", PHONEBOOK_FIELDS_SIZE) == 0)
        {
            printf("Enter name - ");
            //fgets(book[i].name, PHONEBOOK_FIELDS_SIZE, stdin);
            fscanf(stdin, "%s", book[i].name);
            printf("Enter number - ");
            //fgets(book[i].phone_number, PHONEBOOK_FIELDS_SIZE, stdin);
            fscanf(stdin, "%s", book[i].phone_number); 
            break;        
        }
    }
}

void print(struct phone_book *book)
{
    for (int i = 0; i < PHONEBOOK_SIZE; i++)
    {
        if (strncmp(book[i].name, "", PHONEBOOK_FIELDS_SIZE) != 0 
            && strncmp(book[i].phone_number, "", PHONEBOOK_FIELDS_SIZE) != 0)
        {
            printf("NAME - %s\n", book[i].name);
            printf("NUMBER - %s\n\n", book[i].phone_number);           
        }
    }
}

void del(struct phone_book *book)
{
    char buf_name[PHONEBOOK_FIELDS_SIZE];

    printf("Enter name - ");
    fscanf(stdin, "%s", buf_name);

    for (int i = 0; i < PHONEBOOK_SIZE; i++)
    {
        if (strncmp(book[i].name, buf_name, PHONEBOOK_FIELDS_SIZE) == 0)
        {
            strncpy(book[i].name, "", PHONEBOOK_FIELDS_SIZE);
            strncpy(book[i].phone_number, "", PHONEBOOK_FIELDS_SIZE);  
            break;        
        }
    }
}

void search(struct phone_book *book)
{
    char buf_name[PHONEBOOK_FIELDS_SIZE];
    
    printf("Enter name - ");
    fscanf(stdin, "%s", buf_name);

    for (int i = 0; i < PHONEBOOK_SIZE; i++)
    {
        if (strncmp(book[i].name, buf_name, PHONEBOOK_FIELDS_SIZE) == 0)
        {
            printf("\n%s\n", book[i].name);
            printf("%s\n\n", book[i].phone_number); 
            break;        
        }
    }
}