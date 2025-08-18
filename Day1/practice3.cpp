#include<bits/stdc++.h>
using namespace std;

// vector<int> findUnique(vector<int> arr, int size){
//     vector<int> tempArr;
//     for(int i=0; i<size-1; i++){
//         for(int j=i+1; j<size; j++){
//             if(arr[j] != arr[i]){
//                 tempArr.push_back(arr[i]);
//             }
//         }
//     }
//     return tempArr;
// }


// int main(){
//     vector<int> arr = {1,2,3,1,2,3,4};
//     int size = arr.size();

//     // cout<<"size of arr is : "<<size<<endl;
//     cout<<"unique values in the arrays are : "<<findUnique(arr,size)<<endl;
//     return 0;
// }

void findUnique(int arr[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(arr[j] != arr[i]){
                cout<<arr[i]<<" ";
            }
        }
    }
}


int main(){
    int arr[] = {1,2,3,1,2,3,4};
    int size = 7;

   findUnique(arr, size);
    return 0;
}