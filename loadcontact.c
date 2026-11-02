#include<stdio.h>
#include"allfunction.h"
void loadContacts(struct Addressbook *addressbook)
{


FILE *fp=fopen("contact.csv","r");//open the file in read mode

if(fp==NULL)
{
    printf("file not found\n");
    addressbook->count=0;
    return;
}

fscanf(fp,"#%d\n",&addressbook->count);//read the count
printf("#%d\n",addressbook->count);
for(int i=0;i<addressbook->count;i++)
{
 
    fscanf(fp," %[^,],%[^,],%[^,]\n",addressbook->contact[i].name,
                                     addressbook->contact[i].mobile,
                                     addressbook->contact[i].email);
}

fclose(fp);//close the file and notify user
printf("Contact loaded successfully\n");//succsess massage

}