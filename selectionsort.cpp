#include <iostream>

using namespace std;

void selsort(int a[],int n){
	int i,temp,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[j]<a[i]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

int main(){
	int a[5]={56,34,78,23,1};
	int n=sizeof(a)/sizeof(a[0]);
	selsort(a,n);
	return 0;
}
