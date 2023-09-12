#include<stdio.h>
#include<stdlib.h>
int  cc(int wt[],int s,int n){
	if(n==0){
		return INT_MAX;
	}
	if(s==0)
	   return 0;
	if(n==1){
	   	if(s%wt[n-1]==0){
	   		return s/wt[n-1];
		   }
	    else{
	    	return INT_MAX;
		}  
	   }
	if(wt[n-1]<=s){
		if((1+cc(wt,s-wt[n-1],n))>(cc(wt,s,n-1))){
			return  cc(wt,s,n-1);
		}
		else{
		    return	1+cc(wt,s-wt[n-1],n);
		}
	}   
	else{
		return cc(wt,s,n-1);
	}
}
int main(){
	int wt[]={1,2,3,4};
	int n=sizeof(wt)/sizeof(wt[0]);
	printf("%d  ",n);
	int s=8;
	cc(wt,s,n);
	printf("%d",cc(wt,s,n));
	}
