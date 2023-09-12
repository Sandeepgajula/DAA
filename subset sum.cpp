#include<stdio.h>
int n;
static int b[100]={0}; 
void print(int b[],int wt[]){
	for(int i=0;i<n;i++){
		if(b[i]==1)
			printf("%d ",wt[i]);
	}
	printf("\n");
}
void ss(int wt[],int w,int n){
	if(w==0){
		print(b,wt);
		return;
	}
	if(n==0){
		return;
	}
	if(wt[n-1]<=w){
		b[n-1]=1;
		ss(wt,w-wt[n-1],n-1);
	}
	b[n-1]=0;
	ss(wt,w,n-1);
}

int main(){
	n=4;
	int w=6;
	int wt[n]={1,2,3,4};
	ss(wt,w,n);
}
