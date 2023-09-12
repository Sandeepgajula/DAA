#include<stdio.h>
#include<stdlib.h>
#include<math.h>
# define n 4
int b[n];
int feasable(int r,int c){
	for(int k=1;k<r;k++){
		if(b[k]==c){
			return 0;
		}
		if(abs(r-k)==abs(c-b[k])){
			return 0;
		}
	}
	return 1;
}
void print(int b[]){
	for(int i=1;i<=n;i++){
		printf("%d\t ",b[i]);
	}
	printf("\n");
}
int nqueen(int r){
	int col;
	for(col=1;col<=n;col++){
		if (feasable(r,col)){
			b[r]=col;
		if(r==n){
			print(b);	 
			}
		nqueen(r+1);
		}
	}
}
int main(){
 	int r=1;
	nqueen(r);
}
