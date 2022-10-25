//Implementing bubble sort algorithm with oop
#include <bits/stdc++.h>
using namespace std;

class Unsorted{
private:
vector<int>unsorted_numbers;

public:
Unsorted(vector<int>unsorted){
    unsorted_numbers=unsorted;
}

int bubble_sort(){
    for(int i=0;i<unsorted_numbers.size();i++){
        for(int i=0;i<unsorted_numbers.size()-1;i++){
            if (unsorted_numbers[i]>unsorted_numbers[i+1]){
                int num=unsorted_numbers[i];
                unsorted_numbers[i]=unsorted_numbers[i+1];
                unsorted_numbers[i+1]=num;
            }
        }
    }
    return unsorted_numbers[0];
}
};

int main(){
    Unsorted number_list({5,4,3,2,1});
    cout<<number_list.bubble_sort();
}
