#include<stdio.h>
#include<string.h>
int main()
{
    char num[30];
    int flag=0,floatingpoint=0,i=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num[i++]!='\0')
    {
        if(!flag && num[i]=='.')
        {
            flag=1;
        }
        else if(flag && (num[i]<'0' && num[i]>'9'))
        {
            floatingpoint=0;
        }
        else if(flag && (num[i]>='0' && num[i]<='9'))
        {
            floatingpoint=1;
        }
    }
    if(floatingpoint)
    {
        printf("Number %s is a valid floating point \n",num);
    }
    else
    {
        printf("Number %s isn't a valid floating point \n",num);
    }
    return 0;
}