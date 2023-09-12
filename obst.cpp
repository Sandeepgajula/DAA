#include<stdio.h>
#include<stdlib.h> 
int sum(int freq[], int i, int j)
{
	int s = 0;
	for (int k = i; k <=j; k++)
	    s += freq[k];
	return s;
}
int obst(int freq[],int i,int j){
	if(i>j)
		return 0;
	if(i==j)
	    return freq[i];
   	int min =INT_MAX ,l,cost=0;
   	for(l=i;l<=j;l++){ 
   		cost=obst(freq,i,l-1)+obst(freq,l+1,j) ;
   		if(min>cost){
   			min=cost;
	}		
	}
	return min+sum(freq,i,j);
}
int main(){
	int key[]={10,20,30,40,50};
	int freq[]={10,20,15,25,15};
	int i=0;
	int j=sizeof(key)/sizeof(key[0]);
	obst(freq,i,j-1);
	printf("%d",obst(freq,i,j-1));
}
