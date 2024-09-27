#include <iostream>
using namespace std;
class Shape{
        int length,width;
        public:
                Shape(int x, int y){ length=x; width=y;
                }
                Shape(Shape &obj);
                  
        int getArea(){ return length*width;
                }
};
Shape:: Shape(Shape &obj){
                        length=obj.length+2;
                        width=obj.width-2+obj.length+3;
                }
int main(){
        cout <<"1: Enter length and width ";
        int x, y;
        cin>>x>>y;
        Shape s1(x,y);
//      Shape s2=s1; copy constructorn called
cout <<"2: Enter length and width ";
cin>>x>>y;
        Shape s2(x,y);
if (s1.getArea()>s2.getArea())
  cout<<s1.getArea();
  else
  cout<<s2.getArea();   


        return 0;
}
