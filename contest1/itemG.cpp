#include <iostream>
#include <set>
#include <map>
#include <string>

using namespace std;

int anagrama(map<char, int> letras, set<string> dict, string phrase, set<string> anagram)
{
    map<char, int> letaux;
    set<string> dictaux, anaaux;

    map<char, int>::iterator it, itaux;
    set<string>::iterator it2, itana, itdict, last;

    string word;
    string anag;
    
    letaux = letras;
    dictaux = dict;
    anaaux = anagram;
    
    if (letras.size() == 0)
    {
        
        last = prev(anagram.end());
        for (itana = anagram.begin(); itana != anagram.end(); itana++)
        {
            anag += *itana;
            if(*itana != *last){
                
                anag += " ";
            }
            
        }
        cout << phrase << " = " << anag << endl;
        return 0;
    }
    else
    {
        
        for (it2 = dict.begin(); it2 != dict.end(); it2++)
        {
            int cont = 0;
            word = *it2;
            for (int i = 0; i < word.length(); i++)
            {
                if (letaux.find(word[i]) != letaux.end() )
                {
                    
                    cont++;
                    itaux = letaux.find(word[i]);
                    int &x = itaux->second;
                    x--;
                    if (x == 0)
                    {
                        letaux.erase(word[i]);
                    }
                }
                else
                {
                   
                    break;
                }
            }
            dictaux.erase(word);
            if (cont == word.length())
            {   
                
                anaaux.insert(word);
                anagrama(letaux, dictaux, phrase, anaaux);
                anaaux =  anagram;
                letaux = letras;
            }
            else
            {
                letaux = letras;
                
            }
        }
    }
    dictaux = dict;
    return 0;
}
int main()
{
    set<string> dict, aux, anagram;
    map<char, int> letras;
    map<char, int>::iterator it;

    string sp = " ";
    char space = sp[0];
    string word = "";
    string phrase = "";

    while (word != "#")
    {
        cin >> word;
        if (word == "#")
        {
            break;
        }
        dict.insert(word);
    }
    if (dict.size() != 0)
    {
        while (phrase != "#")
        {
            letras.clear();
            aux = dict;
            word = "";
            getline(cin, phrase);

            if (phrase == "#")
            {
                break;
            }
            for (int i = 0; i < phrase.length(); i++)
            {
                if (phrase[i] == space)
                {
                    aux.erase(word);
                    word = "";
                }
                else
                {
                    word += phrase[i];
                    if (letras.find(phrase[i]) != letras.end())
                    {
                        it = letras.find(phrase[i]);
                        int &x = it->second;
                        x++;
                    }
                    else if (letras.find(phrase[i]) == letras.end())
                    {
                        letras.insert(pair<char, int>(phrase[i], 1));
                    }
                }
            }
            aux.erase(word);
            word = "";
            
            if (phrase.length() != 0)
            {
                
                anagrama(letras, aux, phrase, anagram);
            }
        }
       
    }
    return 0;
}