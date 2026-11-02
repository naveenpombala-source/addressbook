#include<stdio.h>
#include"allfunction.h"
#include<string.h>

void deleteContact(struct Addressbook *addressbook)
{
    if(addressbook->count==0)
    {
        printf("Addressbook is empty\n");
        return;
    }
     char delete_name[50];
     printf("Enter the name to delete: ");
     scanf("%[^\n]",delete_name);

     for(int i=0;i<addressbook->count;i++)
     {
        if(strcmp(addressbook->contact[i].name,delete_name)==0)
        {
            for(int j=i;j<addressbook->count-1;j++)
            {
                addressbook->contact[j]=addressbook->contact[j+1];
            }
            addressbook->count--;
            printf("Contact deleted successfully\n");
            return;
        }
     }
     printf("Contact Not Found!!\n\n");
}