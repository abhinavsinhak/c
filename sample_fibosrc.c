#include<stdio.h>
int min(int a,int b);
int fab(int a[],int x,int n);

void main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int x;
	int n = sizeof(arr)/sizeof(arr[0]);
    
	printf("enter the searching element\n");
	scanf("%d",&x);
	int ind = fab(arr,x,n-1);
	if(ind >=0){
		printf("item is at index %d\n",ind);

	}
	else printf("item not found\n");
}
int fab(int arr[],int x, int n){
	int a2,a1,a;

	a2 = 0;
	a1 = 1;
	a = a2 +a1;

	while(a<n){
		a2 = a1;
		a1 = a ;
		a = a2 +a1 ;
	}
	int offset = -1;
	while(a>1){
        int i = min(offset + a1,n-1);

		if(x > arr[i]){
			a = a1 ;
			a1 = a2;
			a2 = a - a1;
			offset = i;
		}
		else if(x<arr[i]){
			a = a2;
			a1 = a1 - a2;
			a2 = a - a1;
		}
		else {
			return i;
		}
	}
	if(a1 && arr[offset+1]==x){
		return offset +1;
	}
	else return -1;
}
int min(int a,int b){
	if(a>b){
		return b;
	}
	else return a;
}