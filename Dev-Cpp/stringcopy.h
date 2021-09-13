#include<stdio.h>
void copy_string(char*, char*);
 int copystring()
{
    char source[100], target[100];    
    printf("Enter the string\n");    
    gets(source);    
    copy_string(target, source);    
    printf("Copied string is \"%s\"\n", target);    
    return 0;
}
void copy_string(char *target, char *source)
{
    while(*source)
    {
        *target = *source;        
        source++;        
        target++;
    }    
    *target = '\0';
}

