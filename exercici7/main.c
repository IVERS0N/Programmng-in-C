
#include <stdio.h> 
void main() 
{ 
    int size=0; 
    int arr[size]; 
    printf("input size of array: "); 
    scanf("%d",&size); 
    printf("\ninput elements of array:  "); 
    for(int i=0;i<size;i++){ 
        scanf("%d",&arr[i]); 
    } 
    printf("\nThe array  is "); 
    for(int i=0;i<size;i++){ 
        printf("%d",arr[i]); 
    }
} 
