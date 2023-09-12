#include<stdio.h>
void quick(int a[],int f,int l){
	if(f<l){
	int p=f;
	int i=f;
	int j=l;
	while(i<j){
		while(a[p]>=a[i] && i<l){
			i++;
		}
		while(a[p]<a[j]){
			j--;
		}
		if(i<j){
			int t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	int t1=a[p];
	a[p]=a[j];
	a[j]=t1;
	quick(a,f,j-1);
	quick(a,j+1,l);
}
}
int main(){
	int a[]={12,1,4,9,0};
	int n=sizeof(a)/sizeof(a[0]);
	quick(a,0,n-1);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
