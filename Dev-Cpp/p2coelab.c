#include<stdio.h>
int main(){
	int max,a[10];
	int i;
	printf("enter the number 1 \n");
    scanf("%d",&a[0]);
	max=a[0];
	for(i=1;i<10;i++){
		printf("enter the number %d \n",i+1);
        scanf("%d",&a[i]);
		if(a[i]>max){
			max = a[i];
		}
		
		}
		printf("\ngreatest number is %d ",max);
		printf("\nThis output belongs to your 2K20/B10/14 and Deepak");
		return 0;
}
