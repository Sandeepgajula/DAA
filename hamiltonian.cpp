#include<stdio.h>
int n=5;
int b[100];
int isok(int n,int b[],int val){
	for(int i=0;i<n;i++){
		if(b[i]==val){
			return 0;
		}
	}
	return 1;
}
void hamiltonion(int index,int n,int a[][n]){
	if(index==n){
		if((a[b[0]][index-1])==1){
			print(b);
			return
		}
	}
	for(int i=0;i<n;i++){
		if(a[index-1][i]==1 && is(n,b,i)){
			b[index]=i;
			
		}
		hamilton(index+1,n,a);
	}
}



int  main(){
	int a[][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d %d    :",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	hamiltonion(1,n,a);
}
