#ifndef _FUNCTIONS_
#define _FUNCTIONS_

#define PHONEBOOK_SIZE 100
#define PHONEBOOK_FIELDS_SIZE 12

#include <stdio.h>
#include <string.h>

struct phone_book
{
    char name[PHONEBOOK_FIELDS_SIZE];
    char phone_number[PHONEBOOK_FIELDS_SIZE];
};

void add(struct phone_book *);
void print(struct phone_book *);
void del(struct phone_book *);
void search(struct phone_book *);

#endif
