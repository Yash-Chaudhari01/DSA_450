class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
  long long int mergeAndCount(long long arr[], long long temp[], int left, int mid, int right) {
    int i = left;
    int j = mid;
    int k = left;
    long long int count = 0;

    while (i <= mid - 1 && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            count += mid - i;
        }
    }

    while (i <= mid - 1) {
        temp[k++] = arr[i++];
    }

    while (j <= right) {
        temp[k++] = arr[j++];
    }

    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }

    return count;
}

long long int mergeSortAndCount(long long arr[], long long temp[], int left, int right) {
    long long int count = 0;
    if (right > left) {
        int mid = (left + right) / 2;
        count += mergeSortAndCount(arr, temp, left, mid);
        count += mergeSortAndCount(arr, temp, mid + 1, right);
        count += mergeAndCount(arr, temp, left, mid + 1, right);
    }
    return count;
}

long long int inversionCount(long long arr[], long long N) {
    long long temp[N];
    return mergeSortAndCount(arr, temp, 0, N - 1);
}


};