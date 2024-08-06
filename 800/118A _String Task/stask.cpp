#include <iostream>
#include <cctype>

using namespace std;

void proc();

int main ()
{


    proc();
   

    return 0;
}

void proc()
{
    string s, k;
    cin >> s;

    char vog[] = {'a', 'e', 'i', 'o', 'u', 'y'};


    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
        bool flag = false;
        for(int j=0; j<6; j++) {
            if(s[i] == vog[j]){
                flag = true;
                break;
            };  
        }
        if(flag)
            continue;
        
        else
            k = k + '.';
            k = k + s[i];
    }
    cout << k << endl;

}