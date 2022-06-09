#include <stdio.h>
#include <time.h>

int recpointer = 0;
int size = 10000;

void delay(){
    for(int i = 0; i<40000; i++){
    }
}

int linsearch(int arr[], int elem){

    int rec;
    delay();
    
    if(arr[recpointer] == elem)
        return recpointer;
    
    else{
        recpointer++;
        rec = linsearch(arr, elem);
    }
    
    return rec;
    
}

int main(){
    int n, arr[size], key, i, result;
    clock_t start, end;

    for(i=0; i<n; i++)
        arr[i] = i;
    

    printf("Enter the value for n: ");
    scanf("%d", &n);

    start = clock();
    result = linsearch(arr, n);
    end = clock();

    printf("Execution time:  %f\n", (double)(end - start)/CLOCKS_PER_SEC);

    if(result <= size)
        printf("Found at: %d\n", result);
    else
        printf("Not found\n");

    return 0;
}