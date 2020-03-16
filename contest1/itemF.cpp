

#include <iostream>
#include <sstream>
#include <vector>
#include <string>


using namespace std;

int main()
{
    string bin = "0";
    int cont = 1;
    int a, b, c;
    string teste;
    string vazio, trans;
    while (bin != "\0" || bin != "\n")
    {
        int lines = 0;
        
        getline(cin, bin);
        
        vector<int> sum(bin.length() + 1);
        
        for(int i =  0; i < bin.length(); i++){
            trans = "";
            trans += bin[i];
            stringstream convert(trans);
            convert >> c;
            
            if(i == 0){
                sum[i] = c;
            }
            else{
                sum[i] = sum[i - 1] + c;
            }
        }
        vazio = bin;
        if (vazio == "\0" || vazio == "\n")
        {
            break;
        }
        cout << "Case " << cont  << ":" << endl;
        cin >> lines;
        for(int i = 0; i < lines; i++){
            cin >> a >> b;
            if (a > b){
                int aux = a;
                a = b;
                b = aux;
            }
            
            if(b + 1 > bin.length()){
                cout << "No" << endl;
            }
            else if((sum[b] - sum[a-1]) == 0 || (sum[b] - sum[a-1]) == (b - a + 1) ){
                    cout << "Yes" << endl;
                    
                }else{
                    cout << "No" << endl;
                }   
            
        }
        
        
        
        cont++;
        cin.clear();
        cin.ignore();
    }
    return 0;
}
