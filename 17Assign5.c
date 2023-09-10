#include<stdio.h>
int main()
{
    char str[20];
    int i;
    printf("Enter a string:");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
       if(str[i]>=65 && str[i]<=90)
          str[i]+=32;
    printf("%s\n",str);     
    return 0;
}