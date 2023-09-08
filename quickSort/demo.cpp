#include <iostream>
using namespace std;

int partition(int arr[], int left, int right){
    int pivot = arr[left];        	// 选取第一个为基准元素
    while(left!=right){  //这里left != right 也行，也就是不会出现left>right的情况
        /* 先从右往移动，直到遇见小于 pivot 的元素 */
        while (left<right && arr[right]>=pivot){
            right--;
        }
        arr[left] = arr[right];         // 记录小于 pivot 的值
        
        /* 再从左往右移动，直到遇见大于 pivot 的元素 */
        while(left<right && arr[left]<=pivot){
            left++;
        }
        arr[right] = arr[left];         // 记录大于 pivot 的值
    }
    arr[left] = pivot;            		// 记录基准元素到当前指针指向的区域，赋值给arr[left]或arr[right]都一样
    return left;						// 返回基准元素的索引
}


void quickSort(int arr[], int left, int right){  //left:数组最小下标，right:数组最大下标
    if (left < right){
        // 把数组分块
        int pivot = partition(arr, left, right);
        //System.out.println(Arrays.toString(arr));
        // 基准元素左边递归
        quickSort(arr, left, pivot-1);
        // 基准元素右边递归
        quickSort(arr, pivot+1, right);
    }
}


int main(){
    int arr[] = {8,9,1,7,2,3,5,4,6,0};
    quickSort(arr,0,9);

    for(int i=0; i<10;i++){
        cout<<i+1<<":"<<arr[i]<<endl;
    }
    return 0;
}