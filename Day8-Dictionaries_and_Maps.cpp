#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string, long> m;

    int T;
    cin>>T;

    while(T--)
    {
        string key;
        long val;

        cin>> key >> val;

        m.insert(pair<string, long>(key, val));

    //    cout<<m.find(key)->second<<endl;
    }

    bool ch = true;
    while(ch){
        string keyCheck;
        cin>>keyCheck;

        if(keyCheck == "\0"){
            ch == false;
            break;
        }

        // if keyCheck is not there in map,
        // it'll return m.end()

        map<string, long>::iterator itr;

        itr = m.find(keyCheck);

        if(itr == m.end()){
            cout<<"Not found"<<endl;
        }
        else{
            // m.find(keyCheck) will return an iterator, 
            // which we use to get value from the {key: value} pair
            // below statement is same as,
            // itr = m.find(keyCheck)
            // cout<< itr->second

            cout<<itr->first<<"="<<itr->second<<endl;
        }
    }
 
    return 0;
}
