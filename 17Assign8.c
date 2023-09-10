#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]="welcomehome",str1[30];
    int i,j;
    printf("Enter a string:");
    fgets(str1,20,stdin);
    for(i=0;str1[i];i++)
        str[i]=str1[i];
    str[i]=0;      
    printf("%s",str);
    return 0;
}