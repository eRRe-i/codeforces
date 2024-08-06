
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
    int n;
    cin >> n;
    int v[n];
    int minx, max, minx_i, max_i;
    int indice = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(i == 0) {
            minx_i = i+1;
            max_i = i+1;
            minx = v[0];
            max = v[0];
        } else {

            if(v[i] < minx) {
                minx = v[i];
                minx_i = i+1;
            } else if (v[i] > max) {
                max = v[i];
                max_i = i+1;
            }
        }  
    }
    int count = 0;
    if( min(abs(indice - minx_i), abs(minx_i - n)) > min(abs(indice - max_i), abs(max_i - n))) {
        int temp = minx_i;
        minx_i = max_i;
        max_i = temp;
    }
    // cout << minx_i << " " << max_i << " " << indice << " " << n << endl;
    if(abs(indice - minx_i) < abs(minx_i - n)) {
        count += abs(indice - minx_i) + 1;
        indice = minx_i + 1;    
    } else {
        count += abs(minx_i- n) + 1;
        n = minx_i - 1;
    }

    // cout << minx_i << " " << max_i << " " << indice << " " << n << endl;
    if(abs(indice - max_i) < abs(max_i- n)) {
        count += abs(indice - max_i) + 1;
    } else {
        count += abs(max_i - n) + 1;
    }
    cout << count << endl;
}