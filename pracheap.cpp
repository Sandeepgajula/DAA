#include<stdio.h>
void heapify(int a[],int n,int i){
	int s=i;
	int l=2*i+1;
	int r=2*i+2;
	if(a[l]<a[s] && l<n)
	   s=l;
	if(a[r]<a[s] && r<n)
	   s=r;   
	if(s!=i){
		int temp=a[s];
		a[s]=a[i];
		a[i]=temp;
		heapify(a,n,s);
	}   
}
void heapsort(int a[],int n){
	for(int i=n/2-1;i>=0;i--){
		heapify(a,n,i);
	}
 
	int c,s,sum;
	c=s=sum=0;
	for(int j=n-1;j>=0;j--){
		int t1=a[j];
		a[j]=a[0];
		a[0]=t1;
		
		s=s+a[j];
		c++;
		if(c==2){
			sum+=s;
			c=0;
			a[j]=s;
			s=0;
			j++;
		}
		heapify(a,j,0);
		
	}
	printf("sum is %d ",sum);
    printf("\n");
	

	
}
int main(){
	int a[]={10,5,15,20,12,6};
	int n=sizeof(a)/sizeof(a[0]);
	heapsort(a,n);
    for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
 
 
}
