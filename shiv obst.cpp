#include<stdio.h>
int dp[20][20];
int sum(int f[],int i,int j){
    int sum=0;
    for(int l=i+1;l<=j;l++){
        sum=sum+f[l];
    }
    return sum;
}
int obst(int f[],int m,int n){
    for(int dif=0;dif<=n;dif++){
        for(int i=0;i<=n-dif;i++){
            int j=i+dif;
            if(i==j)
                dp[i][j]=0;
            else{
                int min,cost;
                min=9999999;
                for(int k=i+1;k<=j;k++){
                    cost=dp[i][k-1] + dp[k][j];
                    if(min>cost)
                        min=cost;
                }
                dp[i][j]= min+sum(f,i,j);
            }
        }
    }
    return dp[m][n];
}
int main(){
    int n;
    printf("enter size :");
    scanf("%d",&n);
    int k[n+1],f[n+1];
    printf("enter keys :");
    for(int i=1;i<=n;i++){
        scanf("%d",&k[i]);
    }
    printf("enter frequencies :");
    for(int i=1;i<=n;i++){
        scanf("%d",&f[i]);
    }
    int m=0;
    for(int p=0;p<=n;p++){
        for(int q=0;q<=n;q++){
            dp[p][q]=(p>q)?0:-1;
        }
    }
    printf("optimal BST with frequency is %d\n",obst(f,m,n));
    for(int p=0;p<=n;p++){
        for(int q=0;q<=n;q++){
            printf("%d    ",dp[p][q]);
        }
        printf("\n");
    }
}
