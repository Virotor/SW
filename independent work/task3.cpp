#include <iostream>
#include <string>

using namespace std;


int main(){
    int n, k;
    string str, ans;

    cout << "Enter n: "; cin >> n;
    cout << "Enter k: "; cin >> k;

    str = to_string(n);
    
    for (int i=0; i<k; i++){
        ans+=str[0];
    }

    cout << stoi(ans) << endl;
    return 0;
    
}