#include <stdio.h>
int max(int a,int b){
	return a>b?a:b;
}
int lcs(char s1[],char s2[],int n1,int n2){
	
	if(n1==0|| n2==1){
		return 0;
	}
	if(s1[n1-1]==s2[n2-1]){
		return 1+lcs(s1,s2,n1-1,n2-1);
	}
	else{
		return max(lcs(s1,s2,n1-1,n2),lcs(s1,s2,n1,n2-1));
	}
}
int main(){
	int n1;
	scanf("%d",&n1);
	printf("\n");
	char s1[10];
	scanf("%s",s1);
	int n2;
	char s2[10];
	scanf("%d",&n2);
	printf("entrt string 2");
	scanf("%s",s2);
	int x=lcs(s1,s2,n1,n2);
	printf("%d " ,x);
}

