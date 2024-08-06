
#include <iostream>
using namespace std;
void proc();
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){ proc(); }
    return 0;
}
void proc(){

    string alphabet,entry;
    cin >> alphabet >> entry;
    int last_typed;
    last_typed = entry[0];
    int total = 0;
    int last_indice = 0;

    for(int i = 0; i < alphabet.length(); i++) {
        if(alphabet[i] == entry[0]) {
            last_indice = i;
            break;
        }
    }
    // cout << entry.length() << " " << alphabet.length() << endl;
    for (int i=1; i< entry.length(); i++) {
        for(int j = 0; j < alphabet.length(); j++) {
        
            if(alphabet[j] == entry[i]) {
                total += abs(last_indice - j);
                last_indice = j;
                break;
            }
        }

    }
    cout << total << endl;
}