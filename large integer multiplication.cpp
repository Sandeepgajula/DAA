#include<stdio.h>
#include<math.h>
#include<stdlib.h>
 
void lintmul(int a,int b,int n1,int n2){
	int a1,a2,b1,b2,c=pow(10,n1/2),d=pow(10,n2/2);
    a1=a/c;
    a2=a%c;
    b1=b/d,b2=b%c;
    int c1,c2,c3,n;
    c1=a1*b1,c2=(a1*b2)+(b1*a2),c3=a2*b2;
    if(n1>n2){
    	n=n2;
	}
	else{
		n=n1;
	}
    int re ;
    re=(c1*pow(10,n))+c2*pow(10,n/2)+c3;
    printf("%d",re);
    	 
}
 

int main(){
	int a=12345,b=3423;
	int n1,n2;
    n1=(int)log10(a)+1;
    n2= (int)log10(b)+1;
  
   lintmul(a,b,n1,n2);
}
