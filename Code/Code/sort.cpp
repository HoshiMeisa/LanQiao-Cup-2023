#include <iostream>
using namespace std;


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i ++) {
        for (int j = 0; j < n - i - 1; j ++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    } 
}


//原理是在未排序序列中找到最小（或最大）元素，并将其放到已排序序列的末尾
void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    for (int i = 0; i < n - 1; i ++) {
        min_idx = i;
        for (int j = i + 1; j < n; j ++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}


void insertionSort(int arr[], int n) {
    int i, j;

    for (i = 1; i < n; i++) {
        j = i - 1;      //扫描从i前面一个元素开始

        while (j >= 0 && arr[j] > arr[i]) {
            arr[j + 1] = arr[j];    //如果已经是正确的顺序，就将各元素右移一位
            j = j - 1;
        }

        //循环结束。比如是在i处结束的循环，那么，i+1位置上的元素已经被移到i+2的位置上去了
        //是空位，而i又比key小，i+2比key大，所以可以把key插入到i+1的位置上
        arr[j + 1] = arr[i];
    } 
}

//Quick Sort
int partition(int arr[], int low, int high) {
    int pivot = arr[low];   //选取最左边为基准元素
    int i = low, j = high;

    while(1){
        while (arr[i] < pivot) {
            i++;
        } //i指针会一直向右边移动，直至找到大于基准值的位置

        while (arr[j] > pivot) {
            j--;
        } //j指针会一直向左移动，直至找到小于基准值的位置

        if (i >= j) {
            return j;
        } //i大于等于j的时候说明i和j已经完成了分区，结束循环

        swap(arr[i], arr[j]); //交换i和j位置的值
    }
}


int main(){
    int a[] = {3, 2, 4, 5, 1, 8, 7, 6};
    int n = sizeof(a) / sizeof(a[0]);
    selectionSort(a, n);

    for (int i = 0; i < n; i ++){
        cout << a[i] << endl;
    }

    return 0;
}

