#include<stdio.h>
#include<stdlib.h>
int sum(int freq[], int i, int j)
{
	int s = 0;
	for (int k = i; k <=j; k++)
	s += freq[k];
	return s;
}
int obst(int freq[], int m,int n){
	int a[n][n]; 
    for(int f=0;f<=n;f++){
	    for(int i=0;i<=n-f;i++){
		  int j=i+f;
		  if(i==j){
		 	a[i][j]=freq[i];
		 }
		 else{
		    int min=INT_MAX,c;
		    for(int l=i;l<=j;l++){
		 	    c=a[i][l-1]+a[l+1][j];
		 	    if(min>c){
		 		   min=c;
			    }
		    }
		 a[i][j]=min+sum(freq,i,j);
		}
	    }
    } 
     for(int i=0;i<=n;i++){
	    for(int j=0;j<=n;j++){
		    printf("%d   ",a[i][j]);
	}
	printf("\n");}
	
    return a[m][n];
   
}

int main(){
	int key[]={10,20,30,40,50};
	int freq[]={10,20,15,25,15};
	int i=0;
	int j=sizeof(key)/sizeof(key[0]);
	printf("%d",obst(freq,i,j-1));
}
