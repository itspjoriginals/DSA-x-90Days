#include<iostream>
using namespace std;

int arrSum(int arr[], int size){
     int sum =0;
     for(int i = 0; i < size; i++){
        sum += arr[i];
        }
        return sum;
}

int arrProd(int arr[], int size){
     int prod =1;
     for(int i = 0; i < size; i++){
        prod *= arr[i];
        }
        return prod;
}

int main(){
    int arr [] = {1,2,3,4,5};
    int size = 5;

    cout<<"The Sum of array is : "<<arrSum(arr,size)<<endl;
    cout<<"The Product of array is : "<<arrProd(arr,size)<<endl;

    return 0;
}