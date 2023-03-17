// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int left = 0, right = size - 1, count = 0;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (value < arr[mid]) {
            right = mid - 1;
        } else if (value > arr[mid]) {
            left = mid + 1;
        } else {
            count++;
            int i = 1;
            while (arr[mid] == arr[mid - i]) {
                count++;
                i++;
            }
            i = 1;
            while (arr[mid] == arr[mid + i]) {
                count++;
                i++;
            }
            return count;
        }
    }
    return 0;
}
