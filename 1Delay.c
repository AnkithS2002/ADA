#include <stdio.h>
#include <time.h>

void delay(){
    for(int i = 0; i<40000; i++){
    }
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
    while(i<n){
        delay();
        if(arr[i] == key)
            break;
        i++;
    }
    end = clock();
    printf("Execution time:  %f", (double)(end - start)/CLOCKS_PER_SEC);
    if(i<n)
        printf("Found at: %d", i+1);
    else
        printf("Not found");

    return 0;
}
