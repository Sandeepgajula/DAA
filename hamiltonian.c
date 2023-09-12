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

void initialize(int n,int a[][n]){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j]=0;
		}
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



int  main(){
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	int a[n][n],b[n];
	int i,j;
	int m;
	initialize(n,a);
	while(m){
		int x,y;
		printf("Enter pair: ");
		scanf("%d%d",&x,&y);
		a[x][y]=a[y][x]=1;
		printf("Another: ");
		scanf("%d",&m);
	}
//	printArray(n,a);
	int root;
	printf("Enter root: ");
	scanf("%d",&root);
	b[0]=root;
	hamiltonion(1,n,a,b);
}
