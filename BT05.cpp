#include<stdio.h>
#include<stdlib.h>
void insertSort(int arr[],int n){
	for(int i=1;i<n;i++){
		int temp = arr[i];
		int j = i -1;
		while(j>=0 && arr[j] > temp){
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j+1] = temp;
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
	insertSort(arr,n);
}

