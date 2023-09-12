#include<stdio.h>
void merge(int a[],int f,int mid,int l){
	int i=f;
	int j=mid+1;
	int b[l+1],k=f;
	while(i<=mid && j<=l){
		if(a[i]>=a[j]){
			b[k]=a[j];
		    j++;
		    k++;
		}
		else{
			b[k]=a[i];
			i++;
		    k++;
		}
	}
	
	
	while(i<=mid){
		b[k]=a[i];
		i++;
		k++;
	}

	
	while(j<=l){
		b[k]=a[j];
		j++;
		k++;
	}

	for(int i=f;i<=l;i++){
		a[i]=b[i];
	}
}
void mergesort(int a[],int f,int l ){
	if(f<l){
	int mid=(f+l)/2;
	mergesort(a,f,mid);
	mergesort(a,mid+1,l);
	merge(a,f,mid,l);}
}
int main(){
	int a[]={12,1,4,9,0};
	int n=sizeof(a)/sizeof(a[0]);
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
