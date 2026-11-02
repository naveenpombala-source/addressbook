/*
--------------------------------------------------------------------------------
Author      : Pombala Naveen
Date        : 18-06-2026
Project     : Address Book
Language    : C
Compiler    : GCC/VS Code

Description :
The Address Book Management System is a console-based application developed
using the C programming language. It allows users to store and manage contact
information efficiently.

The project provides the following features:
1. Add a new contact.
2. Search a contact by Name, Mobile Number, or Email.
3. Edit existing contact details.
4. Delete a contact.
5. Display all saved contacts.
6. Save contacts to a CSV file.
7. Load contacts from a CSV file when the program starts.
8. Validate user input such as Name, Mobile Number, and Email.
9. Prevent duplicate Mobile Numbers and Email IDs.

Files Used :
1. main.c              - Main menu and program execution.
2. addcontact.c        - Add new contacts.
3. searchcontact.c     - Search contacts.
4. editcontact.c       - Edit contact details.
5. deletecontact.c     - Delete contacts.
6. displaycontact.c    - Display all contacts.
7. savecontact.c       - Save contacts to a CSV file.
8. loadcontact.c       - Load contacts from a CSV file.
9. validation.c        - Validation and duplicate checking functions.
10. contact.h          - Structure definitions and function declarations.

Data Storage :
All contact information is stored in a file named "contact.csv".
Each contact contains:
- Name
- Mobile Number
- Email Address

Objective :
To understand file handling, structures, arrays, functions, string handling,
input validation, modular programming, and menu-driven application development
using the C programming language.

--------------------------------------------------------------------------------
*/

#include<stdio.h>
#include"allfunction.h"
int main()
{
    struct Addressbook addressbook;
    addressbook.count=0;
   // loadContacts(&addressbook);//load contacts form file at program start
    int choice;
    do
    {
        //display meanu optionts
        printf("1.Create contact\n");
        printf("2.Search contact\n");
        printf("3.Edit contact\n");
        printf("4.Delete contact\n");
        printf("5.display all contacts\n");
        printf("6.save contacts\n");
        printf("7.load contacts\n");
        printf("8.Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);
        getchar();//remove newline character form input buffer

        switch(choice)
        {
            case 1: 
                    createContact(&addressbook);//to create new contact
                    break;
            case 2:
                    searchContact(&addressbook);//search for the existing contact
                    break;
            case 3:
                    editContact(&addressbook);//edit a contact
                    break;
            case 4:
                    deleteContact(&addressbook);//delete a contact
                    break;
            case 5:
                    displayallContacts(&addressbook);//display all contact
                    break;
            case 6:
                    saveContacts(&addressbook);//save contacts to file
                    break;
            case 7:
                    loadContacts(&addressbook);//load contacts form file
                    break;
            case 8:
                    printf("Exit\n");//exiting the file
                    printf("Thank you!!!\n");
                    break;
        
            default:
                    printf("Invalid choice !! chose between 1 to 8\n");

        }
    }while(choice!=8);

    return 0;
    
}