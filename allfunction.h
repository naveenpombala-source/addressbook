#ifndef ALL_FUNCTION_H
#define ALL_FUNCTION_H


struct contact
{
    char name[50]; // contact name
    char mobile[20]; //contact mobile
    char email[50]; //contact email
};

struct Addressbook 
{
    struct contact contact[100];  //array of contacts
    int count;
  
};
//function to create a new contact
void createContact(struct Addressbook *addressbook); 
//function to search a contact
void searchContact(struct Addressbook *addressbook);
//function to edit a contact
void editContact(struct Addressbook *addressbook);
//function to delete a contact
void deleteContact(struct Addressbook *addressbook);
//function to display all contact
void displayallContacts(struct Addressbook *addressbook);
//function to save contact to file
void saveContacts(struct Addressbook *addressbook);
//function to load contact from file
void loadContacts(struct Addressbook *addressbook);

//function to search by name
void search_name(struct Addressbook *addressbook);
//function to search by mobile number
void search_mobile(struct Addressbook *addressbook);
//function to search by email
void search_email(struct Addressbook *addressbook);


//function to validate name
int isValid_mobile(char*);
//function to validate mobile number
int isValid_name(char*);
//function to validate email
int isValid_mail(char*);
int isMobile_unique(struct Addressbook *addressbook,char* mobile); //Function to check unique mobile number
int is_emailUnique(struct Addressbook *addressbook,char* email); // Function to check unique email

#endif
