
#include<stdio.h>
void swap(float w[],int i,int j){

}
sort(float a[],float val[],float wt[],int n){
		for (int i=0;i<n-1;i++){
		for (int j=0;j<n-i-1;j++){
			if(a[j]<a[j+1])
			{
			    float temp1=a[j];
               	a[j]=a[j+1];
             	a[j+1]=temp1;
	        	float  temp2=val[j];
                val[j]=val[j+1];
            	val[j+1]=temp2;
		        float  temp3=wt[j];
	            wt[j]=wt[j+1];
            	wt[j+1]=temp3;
			}
		}
					
    }
}
void ks(float val[],float wt[],int w,int n){
	float r[n];
	for(int i=0;i<n;i++){
		r[i]=val[i]/wt[i];
	}
	 
	sort(r,wt,val,n);
	int sum=0;
	for(int i=0;i<n;i++){
		printf("%.2f  ",val[i]);
	}
	for(int i=0;i<n-1;i++){
		if(wt[i]<=w){
			sum=sum+val[i];
			w=w-wt[i];
		}
		else{
			sum=sum+val[i]*(w/wt[i]);
		}
	}
	printf("\n");
	printf("%d ",sum);
}
int main(){
	float val[]={4,16,12,15};
	float wt[]={2,5,4,3}; 
	int n=sizeof(val)/sizeof(val[0]);
	int w=11;
	ks(val,wt,w,n);
 
	
}

