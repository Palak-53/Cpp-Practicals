#include<iostream>
using namespace std;

int recursivesum(int arr[], int n)
{
    if(n == 0)
        return 0;
    
    return arr[n-1] + recursivesum(arr, n-1);
}

int iterativesum(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int rsum = recursivesum(arr, n);
    int isum = iterativesum(arr, n);

    cout<<"Recursive Sum: "<<rsum<<endl;
    cout<<"Iterative Sum: "<<isum<<endl;

    return 0;
}