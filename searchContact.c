#include<stdio.h>
#include"allfunction.h"
#include<string.h>

void searchContact(struct Addressbook *addressbook)
{
    int choice; // store users search choice
    printf("1.Name\n2.Mobile No\n3.Email\n");//display menu
    printf("Enter your choice: ");
    scanf("%d",&choice);//read user choie
    getchar();

    switch(choice)
    {
        case 1: 
                search_name(addressbook);// search contact by name
                break;
        case 2:
                search_mobile(addressbook);//search contact by mobile
                break;
        case 3:
                search_email(addressbook);//search contacts by email
                break;
        default:
                printf("Invalid option!!\n");//invalid menu options 

    }

}
void search_name(struct Addressbook *addressbook)
{
    if(addressbook->count==0)
    {
        printf("Addressbook is Empty\n");//no contct available
        return;
    }

    char search_name[50];
    printf("Enter the name to search\n");
    scanf("%[^,]",search_name);//read name input untile comma

    for(int i=0;i<addressbook->count;i++)
    {
        if(strcmp(addressbook->contact[i].name,search_name)==0)
        {
            printf("Found\n"); // contact found
            printf("Name: %s\n",addressbook->contact[i].name); //display name
            printf("Mobile: %s\n",addressbook->contact[i].mobile);//display mobile
            printf("Email: %s\n",addressbook->contact[i].email);//display email
            return;
        }
        
    }
    printf("Not Found!\n");//no matching name found
}
void search_mobile(struct Addressbook *addressbook)
{
    if(addressbook->count==0)
    {
        printf("Addressbook is Empty\n");//no cantact available
        return;
    }
    char search_mobile[20];
    printf("Enter the mobile no to search:\n");
    scanf("%[^,]",search_mobile);//read the mobile input until comma

    for(int i=0;i<addressbook->count;i++)
    {
        if(strcmp(addressbook->contact[i].mobile,search_mobile)==0)//compare mobile number
        {
            printf("Found\n");//contact found
            printf("Name: %s\n",addressbook->contact[i].name);//display name
            printf("Mobile: %s\n",addressbook->contact[i].mobile);//dispaly mobile 
            printf("Email: %s\n",addressbook->contact[i].email);//display email
            return;
        }
    }
    printf("Not Found\n");//no matching mobile number is found

}

void search_email(struct Addressbook *addressbook)
{
    if(addressbook->count==0)
    {
        printf("Addressbook is Empty\n");//no contacts available
        return;
    }
    char search_email[50];
    printf("Enter the email: ");
    scanf("%[^\n]",search_email);//read email input until newline
    for(int i=0;i<addressbook->count;i++)
    {
        if(strcmp(addressbook->contact[i].email,search_email)==0)//comapre emails
        {
            printf("Found\n");//contact found
            printf("Name: %s\n",addressbook->contact[i].name);//display name 
            printf("Mobile: %s\n",addressbook->contact[i].mobile);//display mobile
            printf("Email: %s\n",addressbook->contact[i].email);//display email
            return;
        }
    }
    printf("Not Found\n");
}
