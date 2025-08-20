#include<bits/stdc++.h>
using namespace std;

// Function to find the two elements with the maximum sum in an array

vector<int> maxSum(vector<int> arr, int size){
    vector<int> result;
    int maxSum = INT_MIN;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            int currentSum = arr[i] + arr[j];
            if(currentSum > maxSum){
                maxSum = currentSum;
                result.clear();
                result.push_back(arr[i]);
                result.push_back(arr[j]);
            }
        }
    }
    return result;
}

int main(){
    vector<int> arr = {2,4,5,7,9};
    int size = arr.size();

    vector<int> result = maxSum(arr, size);
    cout << "The two elements with the maximum sum are: " << result[0]
         << " and " << result[1] << endl;
    return 0;
    

}