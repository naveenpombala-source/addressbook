#include<stdio.h>
#include"allfunction.h"

void displayallContacts(struct Addressbook *addressbook)
{
    if(addressbook->count==0)// check if address is empty
    {
        printf("Addressbook is Empty\n"); 
        return;
    }

    printf("----------------------------------------------------------------\n"); //print heading line

    for(int i=0;i<addressbook->count;i++)
    {
        printf("Name: %s\n",addressbook->contact[i].name); // display by name
        printf("Mobile: %s\n",addressbook->contact[i].mobile); //display by  mobile
        printf("Email: %s\n",addressbook->contact[i].email); //display by email
        printf("----------------------------------------------------------------\n"); // separate line 
    }
    
}