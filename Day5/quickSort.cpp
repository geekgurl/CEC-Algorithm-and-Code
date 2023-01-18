#include<iostream>
using namespace std;

void quickSort(int arr[], int l, int h)
{
    if(l >= h) return;
    int pivot = arr[l];
    int i = l, j = h;
    while(i<j)
    {
        while(pivot >= arr[i]  && i<j) i++;
        while(pivot < arr[j]) j--;
        if(i<j)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    }
    arr[l] = arr[j];
    arr[j] = pivot;
    quickSort(arr, l, j-1);
    quickSort(arr, j+1, h);
}

int main()
{
    int t, n;
    cin>>t;
    while(t != 0)
    {
        cin>>n;
        int arr[n], temp, j, k, swaps = 0, comp = 0;
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];
        quickSort(arr, 0, n-1);

        for(int i=0 ; i<n ; i++)
            cout<<arr[i]<<" ";
        t--;
    }
    return 0;
}