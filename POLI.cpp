#include <iostream>
using namespace std;
class board
{
    protected:
    string colour;
    float price;
    public:
    board(string colour,float price)
    {
        this->colour = colour;
        this->price = price;
    }
    float get_price()
    {
        return price;
    }
};
int main()
{
    board *b[10];     
    string colour;
    float price;
    float temp = 0;
    for(int i = 1;i<=10;i++)
    {
        cout<<"ENter the colour of a board "<<i<<" ";
        cin >>colour;
        cout<<"ENter the price of a board : "<<i<<" ";
        cin >>price;
        b[i] = new board(colour,price);
    }
    for(int i = 1;i<=10;i++)
    {
        temp+=b[i]->get_price();
    }
    cout<<"The average of price of 10 objects is = "<<temp/10;
      //return 0;   
}
