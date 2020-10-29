#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T;
    cin>>T;
    // Using std::cin >> var. before std::getline() can cause problems. As a solution, you can create a stop character as a third argument, allowing C++ getline to continue the reading process.

//When using non-processable input in std::cin, it will end in a fail state. This can cause a serious problem since all input will be put on hold until the fail state is fixed. To remove the problematic input, add std::cin.ignore.
    cin.ignore(); // important statement, not to forget 

    while(T--) {
        string s;
        getline(cin, s);
    //   cout<<s<<endl;

        vector<char> vEven;
        vector<char> vOdd;

        for(int i = 0; s[i] != '\0'; i++){
            if(i % 2 == 0){
                vEven.push_back(s[i]);
            }   
            else
            {
                vOdd.push_back(s[i]);
            }
        }
        for(int i = 0; i < vEven.size(); i++)
            cout<<vEven[i];
        
        cout<<" ";

        for(int i = 0; i < vOdd.size(); i++)
            cout<<vOdd[i];
        
        cout<<endl;
    
    }
    return 0;
}
