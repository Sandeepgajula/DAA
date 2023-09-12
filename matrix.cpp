#include<stdio.h>
#include<stdlib.h>
int main(){
int c=0;
int a[5][5];
for(int f=0;f<5;f++ ){
	for(int i=0;i<5-f;i++){
		a[i][i+f]=c++;
	}
}
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		printf("%d",a[i][j]);
	}
	printf("\n");
}

}
