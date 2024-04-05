#include<iostream>

using namespace std;

int selectionSort(int arr[], int n){
	
	// One by one move boundary of 
    // unsorted subarray 
    
	for(int i=0; i<n-1; i++){
		
		int minIndex = i;
		
		// Find the minimum element in 
        // unsorted array 
        
		for(int j = i+1; j<n; j++){
			
			if(arr[j]<arr[minIndex]){
				
				minIndex = j;
			}
			
			if(minIndex != i){
				swap(arr[minIndex], arr[i]);
			}
		}
	}
}

// Finction to print array
void printArray(int arr[], int size){
	
	int i;
	for(i = 0; i<size; i++){
		cout<<arr[i]<<" ";
		cout<<endl;
	}
}

int main(){
	
	int arr[] = {64, 25, 12, 22, 11};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	
	//Function call
	selectionSort(arr, n);
	cout<<" Sorted array:\n ";
	printArray(arr, n);
	
	return 0;
	
}