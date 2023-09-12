#include<stdio.h>
#include<stdlib.h>
int main(){
	int n=5;
	int b[n],a[n][n];
	a[n][n]={0,1,1,1,1,1,0,1,1,1,1,1,0,1,0,1,1,1,0,1,1,1,0,1,0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	
}
