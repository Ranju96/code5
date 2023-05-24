#include <stdio.h>

void binary_Search(int arr[], int num,int key) {
    
    
    int low=0;
    int high=num-1;
    
    while (low <= high) {
        int mid = (high + low) / 2;

        if (arr[mid] == key) 
		{
           printf("%d ", mid);
			int left = mid - 1;
            while (left >= low && arr[left] == key) 
			{
                printf("%d ", left);
                left--;
            }
            int right = mid + 1;
            while (right <= high && arr[right] == key) 
			{
                printf("%d ", right);
                right++;
            }

            return;
        } 
        else if (arr[mid] < key) 
        {
             low = mid + 1;
        } 
		else 
		{
             high = mid - 1;
        }
    }
    printf("Key not found\n");
}

int main() {
    int arr[] = {1, 2, 3, 3, 3, 4, 5};
    int array_size = sizeof(arr) / sizeof(arr[0]);
    int key = 3;
    binary_Search(arr,array_size, key);

    return 0;
}

