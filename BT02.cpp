#include <stdio.h>

int timkiemnhiphan(int arr[], int left, int right, int target) {
    if(left > right) {
        return -1;
    }
    int mid = left + (right - left) / 2;
    if (arr[mid] == target)
    {
        return mid;
    } else if (arr[mid] > target)
    {
        return timkiemnhiphan(arr, left, mid - 1, target);
    } else
    {
        return timkiemnhiphan(arr, mid + 1, right, target);
    }    
}

int main() {
    int n, value;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("gia tri can tim: ");
    scanf("%d", &value);
    if (timkiemnhiphan(arr, 0, n - 1, value) != -1) {
        printf("tim thay %d tai vi tri %d.\n", value, timkiemnhiphan(arr, 0, n - 1, value));
    } else {
        printf("ko tim thay %d trong mang.\n", value);
    }

    return 0;
}
