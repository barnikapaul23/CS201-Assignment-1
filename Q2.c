#include<stdio.h>
int main()
{
    char email_id[500];
    printf("Enter email id to check whether it is valid or not: ");
    scanf("%s",email_id);
    int flag=0,atcounter=0,indexof_attherate=-1,indexof_dot=-1,i=0;
    while(email_id[i]!='\0')
    {
        if((email_id[i]>='A' && email_id[i]<='Z') || (email_id[i]>='a' && email_id[i]<='z') || (email_id[i]>='0' && email_id[i]<='9') || (email_id[i]=='.' || email_id[i]=='-' || email_id[i]=='_' || email_id[i]=='@') && (i!=0 && email_id[i+1]!='\0'))
        {
            flag=1;
        }
        else 
        {
            flag=0;
            break;
        }
        if(email_id[i]=='@')
        {
            atcounter++;
            indexof_attherate=i;
        }
        if(email_id[i]=='.')
        {
            indexof_dot=i;
        }
        i++;
    }
    if(flag && (indexof_dot - indexof_attherate)>3 && atcounter==1)
    {
        printf("Email id is valid\n");
    }
    else
    {
        printf("Email id is invalid\n");
    }
    return 0;
}