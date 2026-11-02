#include<stdio.h>
#include"allfunction.h"
#include<string.h>

void saveContacts(struct Addressbook *addressbook)
{
    FILE *fp=fopen("contact.csv","w");//open the file in write mode
    if(fp==NULL)
    {
        printf("File Not Found\n");//contact not found
        return;
    }
    fprintf(fp, "#%d\n", addressbook->count);//read the count

    for(int i=0;i<addressbook->count;i++)
    {
        fprintf(fp," %s,%s,%s\n",addressbook->contact[i].name,
                                          addressbook->contact[i].mobile,
                                          addressbook->contact[i].email);

    }
    //printf("\n");//print newline
    fclose(fp);//close the file and notify user
    printf("Contact save successfully\n");//success message
}