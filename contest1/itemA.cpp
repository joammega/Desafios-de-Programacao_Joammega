#include <iostream>

using namespace std;

int main(){
    int cont = 0;
    cin >> cont;
    int a = 0;
    int b = 0;
    int calc = 0;
    for (size_t i = 0; i < cont; i++)
    {
        cin >> a >> b;

        if (a < 6 || a > 10000 || b < 6 || b > 10000){
            return 0;
        }
        
        calc = (a/3) * (b/3);

        cout << calc << endl;
    }
    return 0;
    
}