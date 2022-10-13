#include <bits/stdc++.h>
using namespace std;
//a function that creates a list of the first n numbers in a fibonacci sequence. n=size in this case.
int fibo_number(int size){
    vector<int>fibo={0,1};
    if (size>2){
    for(int i=1;i<size-1;i++){
        fibo.push_back(fibo[i]+fibo[i-1]);
        
    }
        return fibo;
    }
    else{
        return fibo;
    }
    return 0;
}
