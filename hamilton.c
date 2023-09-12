#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
void printArray(int n,int a[][n]){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		
		}
		printf("\n");
	}
}

bool isok(int n,int b[],int val){
	int j;
	for(j=0;j<n;j++){
		if(b[j]==val){
			return false;
		}
	}
	return true;
}
void print(int b[],int n){
	int k;
	for(k=0;k<n;k++){
		printf("%d ",b[k]);
	}
	printf("\n");
}
void hamiltonion(int index,int n,int a[][n],int b[]){
	if(index==n){
		if(a[b[index-1]][b[0]]==1){
			print(b,n);
		}
		return;
	}
	int i;
	for(i=0;i<n;i++){
		if(a[b[index-1]][i]==1 && isok(index-1,b,i)){
			b[index]=i;
			hamiltonion(index+1,n,a,b);
		}
		
	}
}
int main(){
	int n=5,i,j;
	int a[5][5]={{0,1,1,1,1},
				{1,0,1,1,1},
				{1,1,0,1,0},
				{1,1,1,0,0},
				{1,1,0,0,0}};
	int b[n];
	for(i=0;i<n;i++){
		printf("root: %d\n",i);
		b[0]=i;
		hamiltonion(1,n,a,b);
		printf("\n");
	}
	return 0;
}
