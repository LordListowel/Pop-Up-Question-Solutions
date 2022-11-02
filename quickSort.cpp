#include <bits/stdc++.h>
using namespace std;

//implementing quick sort algorithm

int partition(int array[],int start, int end){
    int pivot=array[start];
    int count=0;
    for(int i =start+1;i<=end;i++){
        if (array[i]<=pivot){
            count++;
        }
    }
    int pivotindex=start+count;
    swap(array[pivotindex],array[start]);
    int i= start; int j=end;
    while(i<pivotindex && j>pivotindex){
        while(array[i]<=pivot){
            i++;
        }
        while(array[j]>pivot){
            i--;
        }
         if(i<pivotindex && j>pivotindex){
        swap(array[i++],array[j--]);
    }
    }
   
    return pivotindex;
}

void quicksort(int array[],int start, int end){
    if(start>=end){
        return;
    }
    int p=partition(array,start, end);
    quicksort(array, start,p-1);
    quicksort(array,p+1,end);
}

int main(){
    int arr[]={3,5,1,9,2};
    int start=0;
    int end=4;
    quicksort(arr,start,end);
    for(int i=0;i<=end;i++){
        cout<<arr[i]<<" ";
    }
}
