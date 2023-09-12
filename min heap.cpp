#include<stdio.h>
#include<stdlib.h>
 
void heapify(int a[],int n, int i){
	int s,l,r;
	s=i;
	l=2*i+1;
	r=2*i+2;
	if(l<n && a[s]>a[l])
	     s=l;
	if(r<n&&a[s]>a[r]){
		 s=r;
	} 
	if(s!=i){ 
		int temp;
     	temp=a[i];
	    a[i]=a[s];
	    a[s]=temp; 
		heapify(a,n,s);
	}    
}
void minheap(int a[],int n){
	int i,j;
	for(i=(n/2)-1;i>=0;i--){
		heapify(a,n,i);
	}
	for(j=n-1;j>0;j--){ 
		int temp;
     	temp=a[0];
	    a[0]=a[j];
	    a[j]=temp; 
		heapify(a,j,0);
	}
}
int main(){
	int a[]={6,3,4,8,9,1,0,2};
	int n=sizeof(a)/sizeof(a[0]);
	minheap(a,n);
	for(int i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
}
