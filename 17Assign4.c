#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i;
    printf("Enter a string:");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
       if(str[i]>=97 && str[i]<=122)
          str[i]-=32;
    printf("%s\n",str);     
    return 0;
}