#include <iostream>
#include <random>
#include <string>

using namespace std;


int main(){
    int digit1=rand()%10, digit2=rand()%10, digit3=rand()%10, digit4=rand()%10, num;
    string hidden_num, ans="0000";

    hidden_num = to_string(digit1)+to_string(digit2)+to_string(digit3)+to_string(digit4);
    
    for (int i=0; i<=9; i++){
        ans.replace(3, 1, to_string(i));
        if (ans == hidden_num){
            cout << "Hooray, I guesed password. The password is: " << ans << endl;
        }
        for (int j=0; j<=9; j++){
            ans.replace(2, 1, to_string(j));
            if (ans == hidden_num){
                cout << "Hooray, I guesed password. The password is: " << ans << endl;
            }
            for (int l=0; l<=9; l++){
                ans.replace(1, 1, to_string(l));
                if (ans == hidden_num){
                    cout << "Hooray, I guesed password. The password is: " << ans << endl;
                }
                for (int f=0; f<=9; f++){
                    ans.replace(0, 1, to_string(f));
                    if (ans == hidden_num){
                        cout << "Hooray, I guesed password. The password is: " << ans << endl;
                    }
                }
            }
        }
    }

    return 0;
}