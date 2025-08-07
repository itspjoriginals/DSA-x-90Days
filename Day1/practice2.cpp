#include<iostream>
using namespace std;

int findMin(int arr[], int size){
    int min = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int findMax(int arr[], int size){
    int max = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int swapMinMax(int arr[], int size, int &min, int &max){


}


int main(){
    int arr [] = {1,2,3,4,5};
    int size = 5;

    

    return 0;
}