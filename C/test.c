#include<stdio.h> 

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    
    int i = (low - 1);  
    int j;
    for (j = low; j <= high- 1; j++){
        if (arr[j] < pivot){
           i++;  
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
}
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
}
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("n"); 
}
int main() 
{ 
    int n;
    scanf("%d", &n);
    int arr[n],i;
    for(i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("enter pivot to be used\n");
    int p;
    scanf("%d", &p);
    int low=0, high=n-1, mid;
	while(low<=high){
		mid=(high+low)/2;
		if(p==arr[mid]){
			int temp=arr[mid];
            arr[mid]=arr[n-1];
            arr[n-1]=temp;
			break;
		}
		else if(p>arr[mid]) low=mid+1;
		else if(p<arr[mid]) high=mid-1;
	}
    quickSort(arr, 0, n-1); 
    printf("Sorted array: n"); 
    printArray(arr, n); 
    return 0; 
} 