#include <iostream>

using namespace std;

int _GetG_(int a){
    int sum;
    
    if(a<10){
        return a;
    }
    
    sum = 0;
    while(a != 0 ){
        sum += a % 10;
        a = a/10;

    }

    return _GetG_(sum);
}

int main(){
    int number;
    while(1){
        cin >> number;
        if(number == 0) break;
        cout << _GetG_(number) << endl;
    }
    return 0;

}


