#include<stdio.h>
#include<stdbool.h>
int ok(int n,int b[],int val){
	int j=0;
	for(j=0;j<n;j++){
		if(b[j]==val){
			return 0;
		}
	}
	return 1;
}
void print(int b[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
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
		if(a[b[index-1]][i]==1 && ok(index-1,b,i)){
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
