#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int a[] = {1, 2, 3, 4, 5, 6};
int n = 5;
int r = 3;

void print_ans(vector<int> v){
    for(int i: v){
        cout << i << "";
    }
    cout << "\n";
}

void combination(int idx, vector<int> v){
    if(v.size() == r) {
        print_ans(v);
        return; 
        }
    for(int i = idx; i < n; i ++){
        v.push_back(a[i]);
        combination(i + 1, v);
        v.pop_back();
    }
}

int main(){
    vector<int> v;
    combination(0, v);
    return 0;
}