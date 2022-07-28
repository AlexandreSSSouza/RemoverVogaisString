#include <iostream>
#include <cstring>

using namespace std;

const int SMAX = 250;

void removervogais(char s[]){
    for(int i = 0; i < SMAX; i++){
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            s[i] = '&';
        }
    }
    for(int q = 0; q < 10; q++){
        for(int j = 0; j < SMAX; j++){
            if(s[j] == '&'){
                for(int k = j; k < SMAX; k++){
                    s[k] = s[k+1];
                }
            }
        }
    }
}

int main()
{
    char s[SMAX];
    int p;

    cin.getline(s, SMAX);

    removervogais(s);

    cout << s;

    return 0;
}