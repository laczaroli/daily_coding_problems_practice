#include <iostream>

using namespace std; 

int main() {
    int n = 6, x = 12;
    int count = 0;
    int table[n][n];
    
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            table[i][j] = (i+1)*(j+1);
            if(table[i][j] == x) count++;
        }
    }
    
    cout << count << endl;
}
