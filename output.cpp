#include <iostream>
using namespace std;
class Test{
        int i,j;

        public:
                static int k;
        Test(int x, int y, int z){
                i=x; j=y; k=z;
        }
void setK(int a){ k=a+i;
}
};
int Test::k=10;

int main (){
        cout <<Test::k<<endl;
        Test t1(20,25,30);
        //      cout<<t2.k;
        Test t2(45, 50, 55);
                cout<<t1.k<<endl;
        t1.setK(2);
		 t2.setK(1);
       
      cout<<t1.k<<endl;
        cout<<t2.k;
          
        return 0;
}

