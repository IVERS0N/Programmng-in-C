
#include <stdio.h>
#define MAX_SIZE 50

void main(){
    int arr[MAX_SIZE];
    int i, N, sum=0, max, min;
    float average;
    

    printf("Enter size of array: ");
    scanf("%d", &N);

    printf("Enter %d elements in the array : ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("\nElements in array are: ");
    for(i=0; i<N; i++)
    {
        printf("%d, ", arr[i]);
    }
    average = sum/N;
    printf("\nAverage = %.2f", average);
    
    max = arr[0];
    min = arr[0];
    for(i=1; i<N; i++){
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("\nMaximum element = %d\n", max);
    printf("Minimum element = %d", min);
}
