

//Write your code here
class MyException : public exception {
    public:
        const char * what() const throw()
        {
            return "n and p should be non-negative";
        }
};
class Calculator{
    public:

        int power(int n, int p){
            if(n < 0 || p < 0){
                MyException obj;
                throw obj;
            }
            else 
            {
                return (int)pow(n, p);
            }
        }

};

