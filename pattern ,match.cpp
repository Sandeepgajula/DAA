#include<stdio.h>
void lcs(char s1[],char s2[],int n1,int n2){
	int j;
	for(int i=0;i<n1;i++){
		if(s1[i]==s2[0]){
			for(j=0;j<n2;j++){
				if(s1[i+j]!=s2[j]){
					break;
				}
			}
			if(j==n2){
				printf("%d",i);
			}
		}
	}
}
int main(){
	int n1;
	scanf("%d",&n1);
	printf("enter str1");
	char s1[10];
	scanf("%s",s1);
	int n2;
	char s2[10];
	scanf("%d",&n2);
	printf("entrt string 2");
	scanf("%s",s2);
	lcs(s1,s2,n1,n2);

}
