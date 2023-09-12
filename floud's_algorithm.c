#include<stdio.h>
#define MIN(a,b) ((a<b)?a:b)
int a[100][100],adjmatrix[100][100],val[100][100];
void addedge(int start,int end)
{
	adjmatrix[start][end]=1;
	adjmatrix[end][start]=1;
	printf("enter value of %d to %d",start,end);
	scanf("%d",&val[start][end]);
	val[end][start]=val[start][end];
}
void floud(int n)
{
	int i,j,k;
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				a[i][j]=MIN(a[i][j],a[i][k]+a[k][j]);
			}
		}
	}
}
int main()
{
	int i,j,n1,n2,s,d;
	printf("enter no of vertices:");
	scanf("%d",&n1);
	printf("enter no of edges:");
	scanf("%d",&n2);
		for(i=0;i<n1;i++)
	{
		for(j=0;j<n1;j++)
		{
			adjmatrix[i][j]=0;
		}
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n1;j++)
		{
			val[i][j]=0;
		}
	}
	for(i=0;i<n2;i++)
	{
		printf("enter source:");
		scanf("%d",&s);
		printf("enter destination:");
		scanf("%d",&d);
		addedge(s,d);
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n1;j++)
		{
			if(i==j)
				a[i][j]=0;
			else if(adjmatrix[i][j]!=1||adjmatrix[j][i]!=1)
				a[i][j]=200;
			else
				a[i][j]=val[i][j];
				
		}
	}
	floud(n1);
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

