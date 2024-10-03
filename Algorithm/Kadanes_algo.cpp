// By Brute Force Approach
// Maximum SubArray Sum..

#include <iostream>
#include <vector>
using namespace std;

int subArraySum(int arr[], int n){
    int maxSum = INT16_MIN;
    for (int st = 0; st < n; st++)
    {
        int currSum=0;
        for (int end = st; end < n; end++)
        {
            currSum = currSum+arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    return maxSum;
}

int main()
{
    int arr[] = {3,-4,5,4,-1,7,-8};
    int n = sizeof(arr)/sizeof(int);

    int sum = subArraySum(arr,n);
    cout<<"currsum = "<<sum;
    return 0;
}