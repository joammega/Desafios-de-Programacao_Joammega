#include <iostream>
#include <string>
using namespace std;


int* sum;
sum = new int;
int main(){

    int cont, val, 
    string ord;
    cin >> cont;
    for(int i = 0; i < cont; i++){
        cin.clear();
        cin.ignore(1);
        cin >> ord;
        if(ord == "donate"){
            cin.clear();
            cin.ignore(1);
            cin >> val;
            sum += val;
        }else if(ord == "report"){
            cout << sum;
        }
    }



    return 0;
}