#include <iostream>
#include <cstring>
using namespace std;
const int MAX = 20;

int main(){
    char str[MAX];
    cin.getline(str, MAX);
    int len = strlen(str);
    int idx = 1;
    int tmp;
    for (int i=0; i<len-1; ++i){
        if (str[i] >= '0' && str[i] <= '9'){
            tmp += (str[i] - '0') * idx;
            idx++;
        }
    }
    tmp %= 11;
    char c;
    if (tmp == 10){
        c = 'X';
    }else{
        c = tmp + '0';
    }
    if (str[len-1] == c){
        cout << "Right";
    }else{
        str[len-1] = c;
        cout << str;
    }
    return 0;
}