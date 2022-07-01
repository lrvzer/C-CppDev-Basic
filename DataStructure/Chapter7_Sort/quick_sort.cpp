#include <iostream>

using namespace std;
/* 快速排序 - 分治

(1)确定分界点：q[l] / q[(l+r)/2] / q[r]随机
(2)调整区间：
		<=x	   x	>=x
	|----------|----------|
(3)递归处理左右两段
*/

#if 0
void quick_sort(int *arr, int left, int right) {
    if (left < right) {
        int pivot = arr[left], low = left, high = right;
        while (low < high) {
            while (arr[high] >= pivot && low < high) high--;
            arr[low] = arr[high];

            while (arr[low] <= pivot && low < high) low++;
            arr[high] = arr[low];
        }
        arr[low] = pivot;

        quick_sort(arr, left, low - 1);
        quick_sort(arr, low + 1, right);
    }
}
#endif

void quick_sort(int *arr, int left, int right) {
    if (left < right) {
        int low = left - 1, high = right + 1, pivot = arr[left];
        while (low < high) {
            do {
                low++;
            } while (arr[low] < pivot);

            do {
                high--;
            } while (arr[high] > pivot);

            if (low < high) swap(arr[low], arr[high]);
        }

        quick_sort(arr, left, high);
        quick_sort(arr, high + 1, right);
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    quick_sort(arr, 0, 9);
    for (auto &i: arr) {
        cout << i << '\t';
    }
    cout << endl;
    return 0;
}

// n n/2 n/4 ...
// n/(2 ^ x) = 1