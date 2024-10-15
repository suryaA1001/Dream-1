#include<iostream>
using namespace std;
int findMax(int *arr, int n)
{
    int max = *arr; 
    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }
    }
    return max; 
}
int main()
{
    int a[] = {10, 42, 5, 23, 1};
    int n = sizeof(a) / sizeof(a[0]);  
    cout << "Maximum element: " << findMax(a, n) << endl; 
}
