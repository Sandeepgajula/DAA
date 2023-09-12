#include<stdio.h>
void swap(int a[],int i, int j)
{
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
void heapify(int a[],int n,int i){
	int s=i;
	int l=2*i+1;
	int r=2*i+2;
	if(a[s]<a[l] && l<n){
		s=l;
	}
	if(a[s]<a[r] && r<n){
		s=r;
	}
	if(s!=i){
		swap(a,s,i);
		heapify(a,n,s);
	}
}
void heapsort(int a[],int n){
	int i,j;
	for(i=n/2-1;i>=0;i--){
		heapify(a,n,i);
	}
	for(j=n-1;j>=0;j--){
		swap(a,j,0);
		heapify(a,j,0);
	}
}
int main(){
	int a[]={5,7,9,10,21,2,13};
	int n=sizeof(a)/sizeof(a[0]);
	heapsort(a,n);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
