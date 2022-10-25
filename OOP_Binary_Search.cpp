//Implementing binary search algorithm with object oriented programming
#include <bits/stdc++.h>
using namespace std;
class Numbers{

private:
vector<int>number_list;
int target;

public:
Numbers(vector<int>numbers,int target_number){
    number_list=numbers;
    target=target_number;
}

int binary_search(){
    int high=number_list.size()-1;
    int low=0;
    while(low<=high){
        int medium=(high+low)/2;
        if(number_list[medium]==target){
            return medium;
        }
        else if(number_list[medium]<target){
        low=medium+1;
        }
        else{
            high=medium-1;
        }
    }
    return 0;
}
    
    
};

int main(){
    Numbers number({1,2,3,4,5,6,7},1);
    cout<<number.binary_search();
}
