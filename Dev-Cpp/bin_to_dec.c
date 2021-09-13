#include<stdio.h>
#include<math.h>
int main(){
    int res=0;
    int n,i=0;
    int a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    
    a[0]=-1*a[0]*pow(2,n-1);
    res=a[0];
    
     for(i=1;i<n;i++){
         res=res +  a[i]*pow(2,n-1-i);
         
         
     }
     printf("%d",res);
    return 0;
}
