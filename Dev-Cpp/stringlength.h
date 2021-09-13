#include<stdio.h>
int lengthstring(){
     char s[100];
    int i;
    printf("\nEnter the string\n");
     gets(s);
    for (i = 0; s[i] != '\0'; ++i);
       printf("Length of the string: %d", i);
    return 0;
}
