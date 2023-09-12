#include <stdio.h>
#include<math.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b;
	    scanf("%d",&a);
	    int flag=0;
	    for(int i=1;i<a;i++){
	    	for(int j=1;j<a;j++){
	    		if((2*i+2*j+i*j)==a){
	    			flag=1;	 
				}
			 
			}
	       
	    }
	    if(flag==0){
	        printf("NO\n");
	    }
	    else{
	        printf("YES\n");
	    }
	   
	}
	return 0;
}


