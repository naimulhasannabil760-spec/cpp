#include <iostream>
using namespace std;

// Function to find maximum value
int findMax(int arr[], int size)
{
    int maxVal = arr[0]; // assume first element is max
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main()
{
    int arr[] = {12, 45, 7, 89, 34};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum value = " << findMax(arr, size) << endl;

    return 0;
}
