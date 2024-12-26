#include <stdio.h>
int timkiemtuyentinh(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
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

    int result = timkiemtuyentinh(arr, n, value);

    if (result != -1) {
        printf("tim thay %d tai vi tri %d.\n", value, result);
    } else {
        printf("ko tim thay %d trong mang.\n", value);
    }

    return 0;
}
