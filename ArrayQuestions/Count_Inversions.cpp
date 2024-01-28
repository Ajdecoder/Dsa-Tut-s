#include <iostream>
#include <vector>

using namespace std;

long long mergeAndCountInversions(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> leftArr(n1);
    vector<int> rightArr(n2);

    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        rightArr[j] = arr[mid + 1 + j];

    long long inversions = 0;
    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            inversions += (mid - left + 1) - i;
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }

    return inversions;
}

long long mergeSortAndCountInversions(vector<int>& arr, int left, int right) {
    long long inversions = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;

        inversions += mergeSortAndCountInversions(arr, left, mid);
        inversions += mergeSortAndCountInversions(arr, mid + 1, right);

        inversions += mergeAndCountInversions(arr, left, mid, right);
    }

    return inversions;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long inversions = mergeSortAndCountInversions(arr, 0, n - 1);

    cout << "Number of inversions: " << inversions << endl;

    return 0;
}
