#include <iostream>
using namespace std;
class Test{
        int i,j;

        public:
        Test(){ cout<<" I am a constructor\n"; i=4; j=i++;// yaha i ki value icrease hogi
        }
        Test(int id){ cout<<" i'm one paramterized constructor\n"; i=id; j=id+4;
        }
        Test(int x, int y){ i=x+y; j=x-y;
        }
        ~Test(){ cout<<j<<" I'm destructor\n";
        }

};
void abc(Test x){
        Test t(4,5); cout <<" in abc\n";
}

int main (){
 Test t1;
 abc(t1);
 Test t2(12);
        return 0;
}
