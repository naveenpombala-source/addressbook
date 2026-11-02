#include<stdio.h>
#include"allfunction.h"
#include<string.h>
void editContact(struct Addressbook *addressbook)
{
    if(addressbook->count==0)//check if address book is empty
    {
        printf("Addressbook is empty\n");
        return;
    }

    char edit_name[50];
    printf("Enter the name to edit: ");//read the name to edit
    scanf(" %[^\n]",edit_name);

    //search for the contacts
    for(int i=0;i<addressbook->count;i++)
    {
        if(strcmp(addressbook->contact[i].name,edit_name)==0)
        {
            int nflag=1;
            // Read and validate the new name
            do 
            {
                    printf("Enter new your Name: ");
                    scanf(" %[^\n]",addressbook->contact[addressbook->count].name);

                    if(isValid_name(addressbook->contact[addressbook->count].name))
                    nflag=0;
                    else
                    printf("Your name should not contain special characters or any digits\n");

            }while(nflag);


           int flag=1;
           // Read and validate the new mobile number
            do 
            {
                printf("Enter your new Mobile No: ");
                scanf(" %[^\n]",addressbook->contact[addressbook->count].mobile);
            
            if(isValid_mobile(addressbook->contact[addressbook->count].mobile))
            {
                flag=0;
            }
            else
            printf("Your mobile number should contain 10 digits\n");

            }while(flag);
            getchar();
            
            int mflag=1;
            // Read and validate the new email
            do 
            {
                printf("Enter your Email: ");
                scanf(" %[^\n]",addressbook->contact[addressbook->count].email);
                if(isValid_mail(addressbook->contact[addressbook->count].email))
                mflag=0;
                else
                printf("Your mail should contain atleast one @ and one .\n");

            }while(mflag);
        }
    }
    printf("Not Found!\n");//display contact not found
}