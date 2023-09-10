#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    int i,count=0;
    char x;
    printf("Enter a string:");
    fgets(str,10,stdin);
    fflush(stdin);
    printf("Enter a character:");
    scanf("%c",&x);
    for(i=0;str[i];i++)
        if(x==str[i])
           count+=1;
    printf("Occurrence of %c is %d times in a given string:",x,count);       
    return 0;
}