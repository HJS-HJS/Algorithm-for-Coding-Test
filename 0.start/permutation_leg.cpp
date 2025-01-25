#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int a[3] = {1,2,3};
int n = 3;
int r = 3;
int depth = 0;

void print_ans(){
    for(int i = 0; i < r; i++){
        cout << a[i] << "";
    }
    cout << "\n";
}

void permutation(int n, int r, int depth){
    if(r == depth) {
        print_ans();
        return; 
        }
    for(int i = depth; i < r; i ++){
        swap(a[i], a[depth]);
        permutation(n, r, depth + 1);
        swap(a[i], a[depth]);
    }
}

int main(){
    permutation(n, r, 0);
    return 0;
}