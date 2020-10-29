#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> firstname;
    vector<string> email;

    regex re("(.+)(@gmail.com)");

    for (int N_itr = 0; N_itr < N; N_itr++) {
        string firstNameEmailID_temp;
        getline(cin, firstNameEmailID_temp);

        vector<string> firstNameEmailID = split_string(firstNameEmailID_temp);

        string firstName = firstNameEmailID[0];
       
        string emailID = firstNameEmailID[1];
        
        // Taking firstName in the vector, only if it's 
        // corresponding email ends with '@gmail.com'
        if(regex_match(emailID, re)){
            firstname.push_back(firstName);
        }


    //    firstname.push_back(firstName);
     //   email.push_back(emailID);
    //    cout<<"Print = "<<firstName<<" "<<emailID<<endl;
    }
    vector<string>::iterator itr1, itr2;
    sort(firstname.begin(), firstname.end());
    for(itr1 = firstname.begin(); itr1 != firstname.end(); itr1++){
        cout<<*itr1<<endl;
    }
 /*   cout<<endl;
    for(itr2 = email.begin(); itr2 != email.end(); itr2++){
        cout<<*itr2<<" ";
    }
*/
    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
