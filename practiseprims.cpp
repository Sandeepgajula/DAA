#include<stdio.h>
#include<stdlib.h>
int findmin(int dis[],int vis[],int n){
	int min=INT_MAX,node;
	for(int i=0;i<n;i++){
		if(vis[i]==0 && min>dis[i]){
			min=dis[i];
			node=i;
		}
	}
	return node;
}
int prims(int x,int a[][x],int dis[],int vis[],int parent[]){
	int k;
	for(int i=0;i<n;i++){
		k=findmin(dis,vis,n);
		vis[k]=1;
	}
	for(int j=0;j<n;j++){
		if(a[k][j]!=0 && vis[j]!=0){
			if(dis[j]>a[k][j]){
				dis[j]=a[k][j];
				parent[j]=k;
			}
		}
	}
		int p,q,r;
	printf("\n");
	for(p=0;p<n;p++){
		printf("%d   ",parent[p]);
	}
	printf("\n");
	for(q=0;q<n;q++){
		printf("%d   ",dis[q]);
	}
	printf("\n");
	int cost=0;
	for(r=0;r<n;r++){
		cost=cost+dis[r];
	}
	return cost;
}
int main(){
	int i,j,x;
	printf("enter the size");
	scanf("%d",&x);
	int a[x][x],dis[x],parent[x],vis[x];
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			printf("%d %d",i,j);
			scanf("%d",&a[i][j]);
		}		
	}
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			printf("%d   ",a[i][j]);
		}	
		printf("\n");	
	} 
	for(i=0;i<x;i++){
		if(i==0){
			dis[i]=0;
		}
		else
		    dis[i]=INT_MAX;
		vis[i]=0;
		parent[i]=-1;
    }
	
	printf("%d",prims(x,a,dis,vis,parent)); 	
}
