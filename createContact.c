#include"allfunction.h"
#include<stdio.h>
#include<ctype.h>
#include<string.h>

void createContact(struct Addressbook *addressbook)
{
    if(addressbook->count>=100)
    {
        printf("Addressbook is Full\n"); //contacts are full
        return;
    }
   int nflag=1;
   do 
   {
        printf("Enter your Name: ");
        scanf(" %[^\n]",addressbook->contact[addressbook->count].name);//read full name including spaces

        if(isValid_name(addressbook->contact[addressbook->count].name))//valid name
        nflag=0;
        else
        printf("Your name should not contain special characters or any digits\n");//read mobile number

   }while(nflag);

    int flag=1;
    do
    {
        printf("Enter your Mobile No: ");
        scanf(" %[^\n]",addressbook->contact[addressbook->count].mobile); //it can validate until newline
    
    if(isValid_mobile(addressbook->contact[addressbook->count].mobile)&&isMobile_unique(addressbook,addressbook->contact[addressbook->count].mobile))
    {
        flag=0;
    }
    else
    printf("Your number should contain 10 digits and it should be unique\n"); //valid and unique mobile number

    }while(flag);

    int mflag=1;
    do 
    {
        printf("Enter your Email: ");
        scanf(" %[^\n]",addressbook->contact[addressbook->count].email);
        if(isValid_mail(addressbook->contact[addressbook->count].email)&&is_emailUnique(addressbook,addressbook->contact[addressbook->count].email))
        mflag=0;
        else
        printf("Your mail should contain atleast one @ and one . and it should be unique\n"); //valid and uniqe email

    }while(mflag);
    addressbook->count++;
    printf("Contact created successfully\n"); //file created successfully completed massage
}