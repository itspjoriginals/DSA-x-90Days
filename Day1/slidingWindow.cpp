#include<bits/stdc++.h>
using namespace std;
// Function to find the maximum sum of a subarray of size k using sliding window technique
int slidingWindow(vector<int> arr, int size, int k) {
    int maxSum = 0;
    int windowSum = 0;

    // Calculate the sum of the first window of size k
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }
    maxSum = windowSum;

    // Slide the window from start to end of the array
    for (int i = k; i < size; i++) {
        windowSum += arr[i] - arr[i - k]; // Add the next element and remove the first element of the previous window
        maxSum = max(maxSum, windowSum); // Update maxSum if needed
    }

    return maxSum;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = arr.size();
    int k = 3; // Size of the subarray

    int maxSum = slidingWindow(arr, size, k);
    cout << "The maximum sum of a subarray of size " << k << " is: " << maxSum << endl;

    return 0;
}
// Sliding Window Technique
// Time Complexity: O(n)
// Space Complexity: O(1)