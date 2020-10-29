#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int da, ma, ya, de, me, ye;
    cin>>da>>ma>>ya;
    cin>>de>>me>>ye;

    int ddiff, mdiff, ydiff;
    ddiff = da - de;
    mdiff = ma - me;
    ydiff = ya - ye;

 /*   int diff=(ya-ye>0)?10000:(ma-me>0&&ydiff==0)?mdiff*500:(da-de>0 && ydiff==0)?ddiff*15:0;    
    cout<<diff<<endl;
*/
   
    if(ya-ye > 0){
        cout<<10000;
    }
    else{
         if((ydiff==0) && (ma-me > 0)){
            cout<<500*(ma-me);
        }
        else
        {
            if((da-de > 0) && ydiff==0)
                cout<<15*(da-de);
            else 
                cout<<0;
        }  
    }
   
    return 0;
}
