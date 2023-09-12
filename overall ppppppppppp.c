#include<stdio.h>
#include<stdlib.h>
int r,n;
int b[10];
int isfesable(int col,int r){
	int k;
	for(k=1;k<r;k++){
		if(b[k]==col){
			return 0;
		}
		if(abs(r-k)==abs(col-b[k])){
			return 0;
		}
	}
	return 1;
}
void print(int b[],int n){
	int i;
	for( i=1;i<=n;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
}

int nqueen(r){
	int col;
	for(col=1;col<=n;col++){
		if (isfesable(col,r)){
			b[r]=col;
			if(r==n){
				print(b,n);
			}
			nqueen(r+1);
		}
	}
}
 


int main(){
  scanf("%d",&n);
   nqueen(1);
}
     
 
