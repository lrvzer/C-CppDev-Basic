#include <iostream>

using namespace std;
/* 归并排序 - 分治

 		left	   	right
	|----------|----------|
(1)确定分界点：mid = (l+r) / 2
(2)递归排序left, right
(3)归并-合二为一
*/

void merge_sort(int *arr, int left, int right) {
    if (left < right) {
        int mid = (left + right) >> 1;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);

        int tmp[1000];
        int i = left, j = mid + 1, idx = 0;

        while(i <= mid && j <= right) {
            if (arr[i] <= arr[j])
                tmp[idx++] = arr[i++];
            else
                tmp[idx++] = arr[j++];
        }

        while (i <= mid)
            tmp[idx++] = arr[i++];
        while (j <= right)
            tmp[idx++] = arr[j++];

        for (int k = left, n = 0; k < right;) {
            arr[k++] = tmp[n++];
        }
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    merge_sort(arr, 0, 9);
    for (auto &i: arr) {
        cout << i << '\t';
    }
    cout << endl;
    return 0;
}


// 1 3 5 7 9 2 4 6 8 10
//