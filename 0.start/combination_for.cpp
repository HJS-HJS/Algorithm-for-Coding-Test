#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    int select = 3;
    for(int i = 0; i < size - select + 1; i++){
        for(int j = i + 1; j < size - select + 2; j++){
            for(int k = j + 1; k < size - select + 3; k++){
                cout << a[i] << "" << a[j] << "" << a[k] << "\n";
            }
        }
    }
    cout << "\n";

}