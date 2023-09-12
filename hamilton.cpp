#include<stdio.h>
int b[10];
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
int  hamiltonion(int index,int n,int a[][n],int b[]){
	if(index==n){
		if(a[b[0]][index-1]==1){
			print(b,n);
		}
		return;
	}
	int i;
	for(i=0;i<n;i++){
		if(a[index-1][i]==1 && isok(n,b,i)){
			b[index]=i;
			
		}
		hamiltonion(index+1,n,a,b);
	}
}
int main(){
	int n=5,i,j;
	int a[5][5]={0,1,1,1,1,1,0,1,1,1,1,1,0,1,0,1,1,1,0,1,0,1,0,1,0};
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	hamilton(1,n,a);
}
