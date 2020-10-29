#include <bits/stdc++.h>
#include <vector>
using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> v;
    // finding the binary digit and assigning to vector(dynamic array)
    while(n > 0)
    {
        int rem = n % 2;
        n = n / 2;
        v.push_back(rem);
    }
    // reversing the complete vector, as assigned from back side,
    // and we want the reverse like stack approach

    reverse(v.begin(), v.end());

 //   vector<int>::iterator it;
 //   vector<int>::iterator p;

  /*  for(it = v.begin(); it != v.end(); it++)
        cout<<*it<<" ";
*/
/*
    for(int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";

    cout<<endl;
*/
    int max = 0;
    int count = 0;

    // simplest approach without using iterator
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == 1){
            count++;

            if(count > max)
                max = count;
        }
        else{
            count = 0;
        }
    }

    // Working fine but no need, because above solution is more simpler
    /*
    for(it = v.begin(); it != v.end(); it++){
        p = it;
        if(*p == 1){
            count += 1;
    
        if(count > max){
            max = count;
        }
        }
        else{
            count = 0;
        }
    }
    */
    cout<<max;
    return 0;
}
