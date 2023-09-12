#include<stdio.h>
#include<stdlib.h>
int n;
int mg(int n,int a[][n],int c[]){
	int i,j,p;
	for(i=n-2;i>=0;i--){
		int min=INT_MAX,cost;
		for(j=i+1;j<n;j++){
			if(a[i][j]!=0){
				cost=a[i][j]+c[j];
				if(min>cost){
					min=cost;
				}				
			}
		}
		c[i]=cost;	
	}
	for(p=0;p<n;p++)
		printf("%d  ",c[p]);
	return c[0];
}

int main(){
	printf("enter the size");
	scanf("%d",&n);
	int a[n][n],i,j;
	printf("enter the values in array");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}		
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d  ",a[i][j]);
		}
		printf("\n");		
	}
	int c[n];
	for(i=0;i<n;i++){
		if(i==n-1){
			c[i]=0;
		}
		else{
		c[i]=-1;}
	}
	printf("%d",mg(n,a,c)); 	
}
