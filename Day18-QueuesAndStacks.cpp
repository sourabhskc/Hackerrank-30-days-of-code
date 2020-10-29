#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Solution {
    
    public: 

    stack<char> s; // created a stack of char 
    queue<char> q; // created a queue of char

    void pushCharacter(char ch)
    {
        s.push(ch); // pushing at top of stack
    }
    void enqueueCharacter(char ch){
        q.push(ch); // pushing at Rear of queue
    }
    char popCharacter(){
        char ch;
        ch = s.top(); // assigning the top of stack into ch, before pop/deleting, to return 
        s.pop(); // deleting the top element from the stack 
        return ch;
    }
    char dequeueCharacter(){
        char ch;
        ch = q.front(); // assigning the front from queue to ch, to return, before deleting
        q.pop(); // deleting the front element of queue
        return ch;
    }

};

