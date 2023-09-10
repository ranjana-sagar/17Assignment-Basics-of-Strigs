#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],v[10]="aeiouAEIOU";
    int i,j,cout=0;
    printf("Enter a string:");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
        for(j=0;j<=9;j++)
            if(str[i]==v[j])
            {
               cout++;
               break;
            }             
    printf("total no of vowels in string are %d",cout);
    return 0;
}