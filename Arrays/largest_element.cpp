#include <bits/stdc++.h>
using namespace std;

int findlargestElement(int arr[], int n)
{
    int largest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
int main()
{
    int arr1[] = {2, 5, 1, 3, 0};
    int n = 5;
    int largest = findlargestElement(arr1, n);
    cout << "The largest element in the array is: " << largest << endl;

    int arr2[] = {8, 10, 5, 7, 9};
    n = 5;
    largest = findlargestElement(arr2, n);
    cout << "The largest element in the array is: " << largest << endl;
    return 0;
}