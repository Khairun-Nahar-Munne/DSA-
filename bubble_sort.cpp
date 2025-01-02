#include <iostream>
#include <string>
using namespace std;

int main(){
    int i, j, n, temp;
    n=3;
    int arr[n]={3,2,1};
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "Sorted array: ";
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}