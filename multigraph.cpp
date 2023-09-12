#include<stdio.h>
#include<stdlib.h>
int n;
int mg(int a[][n],int c[],int n){
	for(int i=n-2;i>=0;i++){
		int min=INT_MAX,cost;
		for(int j=i+1;j<n;j++){
			if(a[i][j]!=-1){
				cost=a[i][j]+c[j];
				if(min>cost){
					min=cost;
				}				
			}
		}
		c[j]=cost;	
	}
	return c[0];
}
int main(){
	scanf("%d",&n);
	int a[n][n],i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}		
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",a[i][j]);
		}		
	}
	int c[n];
	for(i=0;i<n;i++){
		if(i==n-1){
			c[i]=0;
		}
		c[i]=-1;
	}
	printf("%d",mg(a,c,n)); 	
}
