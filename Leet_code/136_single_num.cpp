#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {4, 1, 2, 1, 2};
    int n = sizeof(arr) / sizeof(int);
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ i;
    }

    cout << ans;
    return 0;
}