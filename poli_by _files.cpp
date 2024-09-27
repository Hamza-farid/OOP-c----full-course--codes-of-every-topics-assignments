#include <iostream>
#include <fstream>
using namespace std;

class Shape
{
    protected:
    float length,width;
    public:
    virtual float area()= 0;//pure virtual use to give the base class func less priority
};

class Circle : public Shape
{
    protected:
    float radius;
    public:
    Circle(float radius)
    {
        this->radius = radius; 
    }
    float area()
    {
        return (3.14*radius*radius);
    }
};
class Rectangel : public Shape
{
    public:
    Rectangel(float length,float width)
    {
        this->length = length;
        this->width = width;
    }
    float area()
    {
        return (length*width);
    }
};
class Triangle : public Shape
{
    public:
    Triangle(float length,float width)
    {
        this->length = length;
        this->width = width;
    }
    float area()
    {
        return (length*width)/2;
    }
};
int main()
{
    ifstream fin;
    ofstream fout;
    Shape *base_class_pointer[9];//to make ointer objects of all three dervied class (polymogrism)
    float total,radius,length,width;//to calculate the total area of shapes 
    fin.open("polygrism_filehandling_txt.txt");
    char ch;
    do
    {
        fin>>ch;
        switch (ch)
        {
        case 'c':
            fin>>radius;
            break;
        case 't':
            fin>>length>>width;
            break;
        case 'r':
            fin>>length>>width;
            break;        
        default:
            break;
        }   
    } while (!fin.eof());
    fin.close();
    int i = 0;
    for(;i<3;i++)
    {
        base_class_pointer[i]= new Circle(radius);
    }
    for(;i<6;i++)
    {
        base_class_pointer[i]= new Rectangel(length,width);
    }
    for(;i<9;i++)
    {
        base_class_pointer[i] = new Triangle(length,width);
    }

    for(int i = 0;i<9;i++)
    {
        total += base_class_pointer[i]->area();//this is the way of calling function of objects of arry 
    }
    cout<<"THe total area of shapes is  = "<<total<<endl;
    return 0;
}
