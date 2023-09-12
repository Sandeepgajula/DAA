#include<stdio.h>
int bin(int n, int r){
	int i,j,dp[n+1][r+1];
	for(i=0;i<=n;i++){
		for(j=0;j<=r;j++){
			if(i==j || j==0){
				dp[i][j]=1;
			}
			else{
				dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
			}
	    }
	}
	for(i=0;i<=n;i++){
		for(j=0;j<=r;j++){
			printf("%d  ",dp[i][j]);
		}
		printf("\n");
	}
	return dp[n][r];
 
	 
}
int main(){
	int n,r;
	printf("enter the n value");
	scanf("%d",&n);
	printf("enter the r value");
	scanf("%d",&r);
	if(n==0){
		printf("entered n is incorrect or ans is 1");
	}
	else
    	bin(n,r);
	    printf("%d",bin(n,r));
}
