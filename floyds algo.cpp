#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("enter size");
	scanf("%d",&n);
	int a[n][n]={{0,3, INT_MAX,5},{2,0,INT_MAX,4},{ INT_MAX,1,0,INT_MAX},{INT_MAX,INT_MAX,2,0}};
				  
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(k!=i && i!=j && k!=j){
				if(a[i][j]<(a[i][k]+a[k][j])){
					a[i][j]=a[i][j];
				}
				else{
					a[i][j]=a[i][k]+a[k][j];
				}
			}}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
