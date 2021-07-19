#include "functions.h"

int main(void)
{
    int key = 0;
    struct phone_book book[PHONEBOOK_SIZE] = {0};

    while (key != 5)
    {
        printf("MENU\n");
        printf("1 - Add\n");
        printf("2 - Print\n");
        printf("3 - Delete\n");
        printf("4 - Search\n");
        printf("5 - Exit\n");
        fscanf(stdin, "%d", &key);

        switch(key)
        {
            case 1:
                add(book);
                break;
            case 2:
                print(book);
                break;            
            case 3:
                del(book);
                break;            
            case 4:
                search(book);
                break;            
            default:
                break;              
        }
    }
    return 0;
}