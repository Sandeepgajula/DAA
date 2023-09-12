#include<stdio.h>
#include<stdlib.h>
int ks(int wt[],int val[],int s,int n){
	if(n==0 || s==0){
		return 0;
	}
	if(wt[n-1]<=s){
		if((val[n-1]+ks(wt,val,s-wt[n-1],n-1))>ks(wt,val,s,n-1)){
			return (val[n-1]+ks(wt,val,s-wt[n-1],n));
		}
		else{
			return ks(wt,val,s,n-1);
		}
	}
	else{
		return ks(wt,val,s,n-1);
	}
}

int main(){
	int val[]={10,20,30,40};
	int wt[]={1,2,3,4};
	int n=sizeof(wt)/sizeof(wt[0]);
	printf("%d  ",n);
	int s=12;
	ks(wt,val,s,n);
	printf("%d",ks(wt,val,s,n));
	}
