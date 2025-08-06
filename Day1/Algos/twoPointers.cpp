#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0, end = size - 1;
    while(start<end){
        swap(arr[start++], arr[end--]);
    }
}

void printReveredArr(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[] = {4,2,7,8,1,2,5};
    int size = 7;

    reverseArray(arr, size);
    printReveredArr(arr, size);


    return 0;
}