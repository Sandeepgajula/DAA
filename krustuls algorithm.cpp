#include<stdio.h>
int findparent(int i,int a[]){
	while(a[i]!=-1){
		i=a[i];
	}
	return i;
}
void  krushkuls(int s[],int d[],int wt[],int n){
	int k,l,sum=0,dis[n];
	for(int i=0;i<n;i++){
    	dis[i]=-1;
 	}
	for(int i=0;i<n;i++){
		k=findparent(s[i],dis);
		l=findparent(d[i],dis);
		if(k!=l){
			sum=sum+wt[i];
			dis[l]=k;
		}
	
}
  printf("%d",sum);
  
}
 
 
int main(){
 
	int s[]={1,2,2,0,1,3,0,4};
	int d[]={3,4,3,1,4,5,2,5};
	int wt[]={2,2,3,3,4,4,5,5};
	int n=sizeof(s)/sizeof(s[0]);
    int dis[n];
  
 	krushkuls(s,d,wt,n);
 
	
}
