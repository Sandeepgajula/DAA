#include<stdio.h>
#include<stdlib.h>
int min(int a,int b){
	return a<b?a:b;
}
 void floyds(int a[][n],int n){
 	for(k=0;k<n;k++){
 		for(i=0;i<n;i++){
 			for(j=0;j<n;j++){
 				if(k!=j && k!=i){
 					min(a[i][j],a[i][k]+a[k][j]);
				 }
			 }
		 }
	 }
 	
 }
int main(){
	int n=3;
	int a[3][3]={ 0,1,3,1,0,999,999,4,0};
	floyds(a,n);
}
     
 
