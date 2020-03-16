#include <iostream>

using namespace std;

int main(){
    int cont1 = 0;
    int cont2 = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    cin >> cont1;
    if(cont1 > 20 || cont1 < 0){
        return 0;
    }
    for (size_t i = 0; i < cont1; i++)
    {
        long int sum = 0;
        cin >> cont2;
        if(cont2 > 20 || cont2 < 0){
            return 0;
        }
        for (size_t j = 0; j < cont2; j++)
        {
            cin >> a >> b >> c;
            if(!a || !b || !c || a > 100000 || b > 100000 || c > 100000){
                return 0;
            }
            sum += a * c ;
        }
        cout << sum << endl;
    }
    return 0;
}