#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}


int main(){
    int arr[] = {12, 34, 56, 11, 13};
    int size =5;
    int target = 11;

    linearSearch(arr, size, target);
    cout<<linearSearch(arr, size, target)<<endl;

    return 0;
}