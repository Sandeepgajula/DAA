#include<stdio.h>
int bin(int n,int r){
	int a[n+1][r+1];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=r;j++){
			a[i][j]=-1;
		}
	}
	if(n==r || r==0){
		 a[n][r]=1;
	}
	if(a[n][r]!=-1){
		a[n][r]=a[n][r];
	}
    else{
    	a[n][r]=bin(n-1,r-1)+bin(n-1,r);
	}
	return a[n][r];
}
int main(){
	int n,r;
	printf("enter the n value");
	scanf("%d",&n);
	printf("enter the r value");
	scanf("%d",&r);
	if(n==0){
		printf("entered n is incorrect or ans is 1");
	}
	else
    	bin(n,r);
	    printf("%d",bin(n,r));
}
