
// Write your MyBook class here
class MyBook: public Book{
    private:
        int price;
    public :
    MyBook(string title, string author, int price):Book(title, author){
        this->price = price;
    }

    void display(){
        cout<<"Title: "<<title<<endl<<"Author: "<<author<<endl<<"Price: "<<price<<endl;
    }
};
