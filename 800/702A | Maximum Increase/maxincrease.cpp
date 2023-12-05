    #include <iostream>
    using namespace std;
    
    int main ()
    {
        int a;
        cin >> a;
        int v, last_v;
        int count = 0, max_count = 0;

        for (int i = 0; i < a; i++)
        {      
            last_v = v;
            cin >> v;

            if(count == 0) {
                count++;
            }
            else if (v > last_v) {
                count++;  
            }
            else {
                count = 1;
            }

            if(count > max_count) {
                max_count = count;
            }
        }

        cout << max_count << endl;
        return 0;
    }
