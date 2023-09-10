#include<stdio.h>
int main()
{
    char str[20];
    int i;
    printf("Enter your string:");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
        if(str[i]==10)
            break;
    printf("\n%d",i);
    return 0;
}