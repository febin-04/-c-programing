#include <stdio.h>

void sumofarr(int arr[], int n); 

int main() {
    int i, n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n); 

    int arr[n];

    printf("Enter the elements in the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    sumofarr(arr, n);  
    return 0;
}
void sumofarr(int arr[], int n) {
    int sum = 0;  
    for (int i = 0; i < n; i++) {
        sum += arr[i]; 
        }
    printf("The sum of the array is %d\n", sum);  
}

