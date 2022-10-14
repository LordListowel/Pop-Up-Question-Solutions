#include <bits/stdc++.h>
using namespace std;
//a function that uses binary search to iterate through a list of numbers until
//the index of a  particular target number is found
int binary_search(vector<int>numbers,int target){
  int high=numbers.size()-1;
  int low=0;
  
  while(low<=high){
      int mid=(high+low)/2;
  if (numbers[mid]==target){
      cout<<"The index of the target in the list is ";
      return mid;
  }
  else if(target>numbers[mid]){
      low=mid+1;
     
      
  }
  else{
      high=mid-1;
      
     
  }
  

}
    return -1;
}

int main(){
    cout<<binary_search({1,2,3,4,5,6,7},6);
}
