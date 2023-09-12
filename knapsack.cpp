#include<stdio.h>
int ks(int val[],int wt[],int w,int n){
	int i,j,dp[n+1][w+1];
	for(i=0;i<=n;i++){
		for(j=0;j<=w;j++){
			if(i==0 || j==0){
				dp[i][j]=0;
			}
			else{
				dp[i][j]=-1;
			}
		}
	}
	for(i=0;i<=n;i++){
		for(j=0;j<=w;j++){
			printf("%d ",dp[i][j]);
		}
		printf("\n");
	}
    	for(i=1;i<=n;i++){
		for(j=1;j<=w;j++){
			if(wt[i-1]<=j){ 
			    if((val[i-1]+dp[i-1][j-wt[i-1]])>=dp[i-1][j]){
			    	dp[i][j]=val[i-1]+dp[i-1][j-wt[i-1]];
				}
				else{
					dp[i][j]=dp[i-1][j];
				}
			}
			else{
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	for(i=0;i<=n;i++){
		for(j=0;j<=w;j++){
			printf("%d ",dp[i][j]);
		}
		printf("\n");
	}
		 
	return dp[n][w];
	
}


int main(){
	int val[]={8,9,6,5};
	int wt[]={3,4,2,1}; 
	int n=sizeof(val)/sizeof(val[0]);
	int w=6;
	printf("%d",n);
	printf("\n");
	ks(val,wt,w,n);
	printf("%d",ks(val,wt,w,n));
	
}
