#include<iostream>
using namespace std;
class board
{
    string color;
    float price;
    public:
    board(float d)
    {
	  price=d;
    }	
    float pprice()
    {
      return price;
    }
};
int main()
{	
    float d;
    float a;
    string c;
//	board b("yellow",7),c("black",10),d("pink",8),e("red",9),f("white",17),g("voilet",27),h("green",37),i("blue",47),j("golden",71),k("orange",72);
//	cout<<(b.pprice()+c.pprice()+d.pprice()+e.pprice()+f.pprice()+g.pprice()+h.pprice()+i.pprice()+j.pprice()+k.pprice())/10;
    for(int i=0;i<10;i++)
    {
	  cout<<"price ";cin>>a;
	  //cout<<"color ";cin>>c;
	  board b(a);
      d+=b.pprice()/10;	
    }
    cout<<"AVG: "<<d;
}

