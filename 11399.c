#include <stdio.h>

int sum_time(int *arr, int n) {
    int total_time = 0;
    for (int i = 0; i < n; ++i) {
        total_time += arr[i] * (n - i);
        
    }
    return total_time;
}

void sort(int *arr, int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int time_arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &time_arr[i]);
    }

    sort(time_arr, n);

    int result = sum_time(time_arr, n);
    printf("%d\n", result);

    return 0;
}
