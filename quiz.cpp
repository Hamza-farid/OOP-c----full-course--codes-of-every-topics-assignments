#include <iostream>
using namespace std;
class Distance{
        int km, m;
        public:
                Distance(int a, int b){ km=a; m=b;
                }
        int getKM(){ return km;
        }
        int getM(){ return m;
        }
};


int main (){
        Distance uni2home(3,400);
        Distance uni2Airport(25,700);
        int totalKM=uni2home.getKM()+uni2Airport.getKM();
        int totalM=uni2home.getM()+uni2Airport.getM();
        if (totalM>1000){
                totalKM++;
                totalM-=1000;
        }
        cout<<totalKM<<"  "<<totalM;
        return 0;
}
