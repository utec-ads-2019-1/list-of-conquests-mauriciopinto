#include <iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

void changeSize(int num, vector<string>& text){
    text.resize(num * 3);
}

void textInput(int num, vector<string>& text){
    for(int i = 0; i < text.size(); i = i +3){
        cin >> text.at(i) >> text.at(i+1) >> text.at(i+2);
    }
}
void count(int num, vector<string>& text){
    changeSize(num, text);
    textInput(num, text);
    map<string , int> counter;
    map<string , int> :: iterator it;
    for(int i = 0; i < text.size(); i = i + 3){
        if (counter.find(text.at(i)) != counter.end()) {
            counter[text.at(i)] += 1;
        }
        else {
            counter.insert(pair<string, int>(text.at(i), 1));
        }
    }
    for(it = counter.begin(); it != counter.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
}
int main() {
    int num;
    vector<string> text;
    cin >> num;
    count(num, text);
    return 0;
}