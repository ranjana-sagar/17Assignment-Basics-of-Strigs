#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int i,freq[150]={0};
    printf("Enter a string:");
    fgets(str,30,stdin);
    ///////////////////// 
    for(i=0;str[i];i++)
        freq[str[i]]++;
    for(i=0;i<150;i++)
        if(freq[i]!='\0')
           printf("%c==>%d\n",i,freq[i]);           
    return 0;            
}