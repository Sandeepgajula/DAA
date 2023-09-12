#include<stdio.h>
#include<stdlib.h>
int sum(int freq[],int i,int j){
	int s=0;
	for(int k=i;k<=j;k++){
		s+=freq[k];
	}
	return s;
}
int obst(int freq[],int i,int j){
	int a[j][j];
	if(i>j)
	    return a[i][j]=0;
	if(i==j)
	     return a[i][j]=freq[i];
	int min=INT_MAX,cost=0;
	for(int l=i;l<=j;l++){
		cost=obst(freq,i,l-1)+obst(freq,l+1,j);
		if(min>cost){
			min=cost;
		}
	}
	return a[i][j]=min+sum(freq,i,j);
  
}
int main(){
	int key[]={10,20,30,40,50};
	int freq[]={10,20,15,25,15};
	int i=0;
	int j=sizeof(key)/sizeof(key[0]);
	obst(freq,i,j-1);
	printf("%d",obst(freq,i,j-1));
}
