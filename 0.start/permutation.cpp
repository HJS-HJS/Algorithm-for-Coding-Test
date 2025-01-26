#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printV(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << "";
    }
    cout << "\n";
}

int main(){
    int a[3] = {1,2,3};
    vector<int> v;
    
    for(int i = 0; i < 3; i++){
        v.push_back(a[i]);
    }

    // Use array
    // Array and size
    cout << "\n";
    do{
        printV(v);
    }while(next_permutation(a, a + 3));

    // Start and end adress
    cout << "\n";
    do{
        printV(v);
    }while(next_permutation(&a[0], &a[3]));

    // Use vector
    // Start and end iterator
    cout << "\n";
    do{
        printV(v);
    }while(next_permutation(v.begin(), v.end()));

    cout << "\n";
    do{
        printV(v);
    }while(next_permutation(v.begin(), v.begin() + 3));

    // Start and end adress
    cout << "\n";
    do{
        printV(v);
    }while(next_permutation(&v[0], &v[3]));

    cout << "\n";
    do{
        printV(v);
    }while(next_permutation(&v[0], &v[0] + 3));

}