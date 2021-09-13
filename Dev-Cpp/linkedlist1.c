#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct node{
	int info;
	struct node* link;
};
struct node*start=NULL;
struct node* createnode(){
	struct node*n;
	n=(struct node*)malloc(sizeof(struct node));
	return n;
}
void insertnode(){
	struct node *temp,*t;
	temp=createnode();
	printf("Enter the number");
	scanf("%d",&temp->info);
	temp->link=NULL;
	if(start==NULL)
	start=temp;
	else{
		t=start;
		while(t->link!=NULL)
			t=t->link;
		   t->link=temp;
	}
}
   void deletenode(){
   	struct node *r;
   	if(start==NULL)
   	printf("list is empty");
   	else{
   		r=start;
   		start=start->link;
   		free(r);
	   }
   	}
   	void viewlist(){
   		struct node*t;
   		if(start==NULL)
   		printf("list is empty");
   		else{
   			t=start;
   			while(t!=NULL){
   				printf("%d",t->info);
   				t=t->link;
			   }
		   }
	   }
	   int menu(){
	   	int ch;
	   	printf("\n1. Add value to the list");
	   	printf("\n2. Delete the first value of the list");
	   	printf("\n3. To view the list");
	   	printf("\n4. Exit the program");
	   	printf("\n\n Enter the choice");
	   	scanf("%d",&ch);
	   	return ch;
	   }
   void main(){
       while(1){
       	
    switch(menu()){
    case 1: insertnode();
            break;
    case 2: deletenode();
            break;
    case 3: viewlist();
            break;
    case 4: exit(0);
    default: printf("wrong choice entered");
      }
      getch();
     }
    }
