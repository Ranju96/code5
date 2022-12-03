#include <iostream>

using namespace std;
void reverseElemenInArray(int arr[], int start, int end )
{
    int temp;
    while (start < end)
    {
        temp = arr[start];  
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    } 
}
void printArray(int arr[], int size)
{
     int i;
    for (i=0; i < size; i++)
    cout<<arr[i]<<" ";
    //cout<<"\n";

}

int main()
   
{
    int sum=0, pos=6;
    int element = 100;
    int array[] = {1,2,3,4,5,6,7,8,9,10,12,45,81,2};
    int n = sizeof(array)/sizeof(array[0]);
    reverseElemenInArray(array, 0 , n-1);
    printArray(array, n);
    return 0;
}
