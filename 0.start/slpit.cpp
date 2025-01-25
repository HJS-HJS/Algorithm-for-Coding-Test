#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


string sentence = "a,b,c,d,e,f,g";

vector<string> split(string sentence, string delimiter){
    vector<string> word_set;
    auto start = 0;
    auto end = sentence.find(delimiter);
    while(end != string::npos){
        word_set.push_back(sentence.substr(start, end - start));
        start = end + delimiter.size();
        end = sentence.find(delimiter, start);
    }
    word_set.push_back(sentence.substr(start, end - start));

    return word_set;
}

int main(){

    vector<string> word_set = split(sentence, ",");

    for(string world : word_set){
        cout << world << "\n";
    }

    return 0;
}