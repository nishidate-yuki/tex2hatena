#include <iostream>
#include <string>
using namespace std;
int main(){
    bool isInline = false;
    cout << "If you want to change the settings, type \"set\"." << endl << endl;


    while(1){
        cout << "---Input tex---" << endl;
        string str;
        getline(cin, str);

        if(str == "set"){
            string il;
            cout << "Convert for Inline?(y/n):";
            getline(cin, il);
            if(il == "y") isInline = true;
            else if(il == "n") isInline = false;
            else cout << "Invalid input" << endl;

            cout << "Setting completed" << endl << endl;
            continue;
        }

        cout << "---Hatena---" << endl;
        
        if(isInline) cout << "[tex: ";
        else         cout << "$$" << endl;

        for(int i=0; i<str.size(); i++){
            if(str[i] == '_' || str[i] == '^')
                cout << '\\';
            cout << str[i];
        }

        if(isInline) cout << " ]" << endl << endl;
        else         cout << endl << "$$" << endl << endl;
    }
}