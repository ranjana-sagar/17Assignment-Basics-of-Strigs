#include<stdio.h>
int main()
{
    char str[30];
    int i,a=0,d=0,s=0;
    printf("Enter a string:");
    fgets(str,30,stdin);
    for(i=0;str[i];i++)
        if(str[i]>='a' && str[i]<='z')
            a++;
        else if(str[i]>='A' && str[i]<='Z')
            a++;
        else if(str[i]>='0' && str[i]<='9') 
            d++;
        else
            s++;
    printf("\nTotal No of Alphabets is_%d.\nTotal No of digits is_%d.\nTotal No of special characters in string is_%d.",a,d,s);
    return 0;            
}