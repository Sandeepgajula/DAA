 #include <stdio.h>
int gcd(int m,int n){
    while(n!=0){
        int r=m%n;
        m=n;
        n=r;
    }
    return m;
}

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    int min=1000,sum=0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            if(i!=j){
	                int r;
	                if(i>j){
	                     r=gcd(a[i],a[j]);
	                     a[i]=a[j]=r;
	                }
	                     
	            }
	        }
	        sum+=a[i];
	        if(sum<min){
	            min=sum;
	        }
	    }
	    printf("%d\n",min);
	}
	return 0;
}


