  #include<stdio.h>
#include<math.h>
int fun(int n){
    int r=0,s=0;
    while(n!=0){
        r=n%10;
        s=s+(r*r);
        n=n/10;
 
    }
    return s;
    
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d",&n);
        int  p=fun(n);
        while(k<100){
	       p=fun(p);
           printf("%d \n",p);
           k++;
       }
       if(p==1){
       	printf("YES\n");
	   }
	   else{
	   	printf("NO\n");
	   }
    }
    
}
