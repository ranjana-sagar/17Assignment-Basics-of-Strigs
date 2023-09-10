#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l=0,a;
    char x,str[20];
    printf("Enter a string:");
    fgets(str,20,stdin);
    l=strlen(str);
    a=l;
    for(i=0;i<a-1;i++,l--)
        for(j=0;j<l-1;j++)
            if(str[j]>str[j+1])
            {
                x=str[j];
                str[j]=str[j+1];
                str[j+1]=x;
            }
    printf("%s",str);
    return 0;
}