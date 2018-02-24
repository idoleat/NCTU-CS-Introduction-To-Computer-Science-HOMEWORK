#include <iostream>
using namespace std;

//This is a bubble sort function.
void BubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;//I just don't want to use swap.
            }
}

int main(void)
{
    int n;//The size of array.

    cout << "How many numbers do you want to input?" <<endl;
    cin >> n;//The size of array.
    int *arr=new int[n];//I generate the array dynamicaly.
    cout << "Enter the numbers: " <<endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    BubbleSort(arr, n);
    //print them out.
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete [] arr;//Free the memory.
    return 0;
}
