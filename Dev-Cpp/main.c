#include"stringlength.h"
#include"stringcompare.h"
#include"stringconcatenate.h"
#include"stringcopy.h"
#include"variabledeclaration.h"
#include"functiondeclaration.h"
#include<stdio.h>
#include<stdlib.h>
int main(){
	int ch;
	printf("\nTo calculate length of string");
	printf("\nTo compare the string");
	printf("\nTo concatenate the string");
	printf("\nTo copy the string\n");
	printf("\nEnter the choice\n");
	scanf("%d",&ch);
	fflush(stdin);
	switch(ch){
	case 1: lengthstring();
	        break;   
	case 2: comparisonstring();
	         break;
	case 3: concatenatestring();
	         break;
	case 4: copystring();
	         break;   
    }
}
