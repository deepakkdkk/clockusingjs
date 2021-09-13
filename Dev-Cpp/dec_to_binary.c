#include<stdio.h>
int main(){
    int n,r,i=0;
    int j;
    scanf("%d",&n);
    int a[32];
    while(n){
        r=n%2;
        n=n/2;
        a[i]=r;
        i++;
    }
    for(j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }
    return 0;
}
