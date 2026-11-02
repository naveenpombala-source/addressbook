#include<ctype.h>
#include<string.h>
#include"allfunction.h"

int isValid_mobile(char *mobile)
    {
        if(strlen(mobile)!=10)
        {
            return 0;
        }
        for(int i=0;i<10;i++)
        {
            if(!isdigit(mobile[i]))
            {
                return 0;
            }
        }

        return 1;
    }

    int isValid_name(char* name)
    {
        if(strlen(name)==0)
        return 0;
        for(int i=0;i<strlen(name);i++)
        {
            if(!isalpha (name[i]) && !isspace(name[i]))
            return 0;

            if(name[i]==' ' && name[i+1]==' ')
            return 0;
        }

        return 1;

    }

    int isValid_mail(char* email)
    {
        if(strlen(email)==0)
        return 0;

        for(int i=0;i<strlen(email);i++)
        {
            if(email[i]==' ' && email[i+1]==' ')
            return 0;

        }

        char* at=strchr(email,'@');
        if(at==NULL)
        return 0;
        char* dot=strchr(at,'.');
        if(dot==NULL)
        return 0;

        return 1;
    }
    int isMobile_unique(struct Addressbook *addressbook,char* mobile)
    {
        for(int i=0;i<addressbook->count;i++)
        {
            if(strcmp(addressbook->contact[i].mobile,mobile)==0)
            return 0;
        }
        return 1;
    }
    int is_emailUnique(struct Addressbook *addressbook,char* email)
    {
        for(int i=0;i<addressbook->count;i++)
        {
            if(strcmp(addressbook->contact[i].email,email)==0)
            return 0;
        }
        return 1;
    }