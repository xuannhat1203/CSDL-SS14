#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void sapxepchon(int arr[],int n){
	for(int i=0;i<n;i++){
		int min = i;
		for(int j=i+1;j<n;j++){
			if(arr[j] < arr[i]){
				min = j;
			}
		}
		swap(&arr[min],&arr[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
}
int main(){
	int n;
	printf("Nhap so luong phan tu trong mang: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	sapxepchon(arr,n);
}

