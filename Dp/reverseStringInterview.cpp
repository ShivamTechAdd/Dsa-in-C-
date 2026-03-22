#include <iostream>
#include <vector>
#include<algorithm>
#include <sstream>
using namespace std;

int main() {
    string input = "zoop smart is hiring";
    vector<string> words;
    string word;

    // Using stringstream to split words
    stringstream ss(input);
    while (ss >> word) {   
        words.push_back(word);
    }

    // Print the words of vector in its reverse order
    vector<string>res;
    for(int i=0;i<words.size();i++){
        string str=words[i];
        int n=words[i].length();
        string str1="";
        for(int i=n-1;i>=0;i--){
            str1+=str[i];
        }
        res.push_back(str1);
    }

    for(auto ele:res){
        cout<<ele<<" ";
    }
    return 0;
}
