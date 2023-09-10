#include<stdio.h>
int main()
{
    char str[30],t;
    int i,j;
    printf("Enter a string:");
    fgets(str,30,stdin);
    for(j=0;str[j];j++);
    j-=1;
    for(i=0;i<=j;i++,j--)
    {
        t=str[i];
        str[i]=str[j];
        str[j]=t;
    }
    printf("Reverse string is____%s",str);
    return 0;
}