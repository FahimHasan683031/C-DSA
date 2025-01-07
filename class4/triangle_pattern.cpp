#include <iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << "*" << " " ;
        }
        cout << endl;
    }

    int num = 1;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << num << " " ;
            num++;
        }
        cout << endl;
    }

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << i << " " ;

        }
        cout << endl;
    }

    char ch = 'A';
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << ch << " " ;
        }
        ch++;
        cout << endl;
    }


    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << j << " " ;
        }
        cout << endl;
    }

    for(int i = 1; i<=n; i++){
        for(int j = i; j>0; j--){
            cout << j << " " ;
        }
        cout << endl;
    }

    return 0;
}