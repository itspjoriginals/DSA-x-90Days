// Kadane Algorihtm

#include<bits/stdc++.h>
using namespace std;

// Function to find the maximum subarray sum using Kadane's algorithm
int kadane(vector<int> arr, int size) {
    int maxSum = arr[0];
    int currentSum = arr[0];

    for (int i = 1; i < size; i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}
int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = arr.size();

    int maxSum = kadane(arr, size);
    cout << "The maximum subarray sum is: " << maxSum << endl;

    return 0;
}