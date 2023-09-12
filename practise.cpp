#include<Stdio.h>
int ks(int val[],int wt[],int w,int n){
	int dp[n+1][w+1];
	if(w==0 || n==0){
		return dp[n][w]=0;
	}
	if(wt[n-1]<=w){
		if(val[n-1]+ks(val,wt,w-wt[n-1],n) > ks(val,wt,w,n-1)){
			return dp[n][w]=val[n-1]+ks(val,wt,w-wt[n-1],n-1);
		}
		else{
			return dp[n][w]=ks(val,wt,w,n-1);
		}
	}
	else{
	    return 	dp[n][w]=ks(val,wt,w,n-1);
	} 
}
int main(){
	int val[]={10,14,12,16,8,5};
	int wt[]={3,5,7,4,6,2};
	int n=sizeof(val)/sizeof(val[0]);
	int w=10;
	ks(val,wt,w,n);
	printf("%d",ks(val,wt,w,n));
}
