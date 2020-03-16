#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    int t;
    int n;
    int h;
    int aux = -9999;
    int cont = 1;
    cin >> t;
    if (t < 0 || t > 30)
    {
        return 0;
    }
    for (size_t i = 0; i < t; i++)
    {
        int conth = 0;
        int contl = 0;
        cin >> n;
        if (n < 0 || n > 50)
        {
            return 0;
        }
        cin >> h;
        if (h < 0 || h > 10)
        {
            return 0;
        }
        aux = h;
        for (size_t j = 0; j < n - 1; j++)
        {
            cin >> h;
            if (h < 0 || h > 10)
            {
                return 0;
            }
            if(h > aux){
                conth += 1;
            }else if(h < aux){
                contl += 1;
            }
            aux = h;
        }
        stringstream ss;
        ss << "Case " << cont << ": " << conth << " " << contl;
        cout << ss.str() << endl;
        cont ++;
    }
}