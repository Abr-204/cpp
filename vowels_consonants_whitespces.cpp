#include<bits/stdc++.h>
using namespace std;
int cnt(string str){
    int vowels = 0, consonants = 0, whitespaces = 0;
    int n=str.length();
    for (int i = 0; i <n; i++) {
    str[i] = tolower(str[i]);
    }
    for (int i = 0; i <n; i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') vowels++;
        else if (str[i] >= 'a' && str[i] <= 'z') consonants++;
        else if (str[i] == ' ') whitespaces++;
    }
    cout<<vowels<<" "<<consonants<<" "<<whitespaces;
}
int main(){
    string str="Abhay Rana";
    cnt(str);
}