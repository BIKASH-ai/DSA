#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int i =1;
    while (i<=n){
        int j =1;
        while(j<=n){
            // We can also print 'A' + i =1 because with an int 'A' will get typecasted to 65
            cout << (char) (65 + i-1) << " ";
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }
    return 0;
}