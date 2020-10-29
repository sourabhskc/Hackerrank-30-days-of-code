

/**
*    Name: printArray
*    Print each element of the generic vector on a new line. Do not return anything.
*    @param A generic vector
**/

// Write your code here
template <class T>
void printArray(vector<T> arr)
{
    for(int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<endl;
    }
}

