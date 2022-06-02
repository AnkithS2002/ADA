
#include <stdio.h>
#include <time.h>

void delay1(){
    for(int i = 0; i<100000; i++){
    }
}

int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
	    delay1();
		int mid = l + (r - l) / 2;
        
		if (arr[mid] == x)
			return mid;

		
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
        
		return binarySearch(arr, mid + 1, r, x);
	}

	return -1;
}

int main()
{
    int n, arr[10000], key, i;
    clock_t start, end;
    
    printf("Enter the value for n: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
        arr[i] = i;
    key = arr[n-1];
    i=0;
    start = clock();
	int result = binarySearch(arr, 0, n - 1, key);
	end = clock();
	printf("Execution time:  %f\n", (double)(end - start)/CLOCKS_PER_SEC);
	(result == -1) ? printf("Element is not present in array") : printf("Element is present at index %d", result);
	return 0;
}
