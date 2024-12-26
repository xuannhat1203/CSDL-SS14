#include<stdio.h>
int main(){
    int arr[10] = {1,10,8,6,9,7,5,3,2,4};
    int select;
    int number;
    do{
        printf("----------MENU----------\n");
        printf("1. Sap xep chen\n");
        printf("2. Tim kiem tuyen tinh\n");
        printf("3. Tim kiem nhi phan\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d",&select);
        switch(select){
            case 1: 
                for(int i=1;i<10;i++){
                    int key = arr[i];
                    int j = i -1;
                    while(j>0 && arr[i]>key){
                        arr[j+1] = arr[j];
                        j = j-1;
                    }
                    arr[j+1] = key;
                }
                printf("Mang sau khi sap xep: ");
                for(int i=0;i<10;i++){
                    printf("%d ",arr[i]);
                }
                break;
            case 2: 
                printf("\nNhap so can tim: ");
                scanf("%d",&number);
                for(int i=0;i<10;i++){
                    if(arr[i] == number){
                        printf("Phan tu duoc tim thay");
                    }else if(arr[i] != number && i == 9){
                        printf("Khong tim thay phan tu");
                    }
                }
                break;
            case 3: 
                int low = 0;
                int high = 9;
                while(low > high){
                    int mid = (low + high)/2;
                    if(arr[mid] == number){
                        printf("Phan tu duoc tim thay");
                    }else if(arr[mid] > number){
                        high = mid - 1;
                    }else if(arr[mid] < number){
                        low = mid + 1;
                    }
                }
                break;
            default:
                printf("Lua chon khong hop le");
                break;
        }
    }while(1==1);
}