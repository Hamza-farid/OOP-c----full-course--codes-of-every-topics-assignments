#include <iostream>
using namespace std;

class Count {
    int value;
    public:
    Count(int x){
	value=x;
	}
	Count(){
		
	}
	Count operator ++ () {
        Count temp;
        temp.value = ++value;
        return temp;
    }
    Count operator ++ (int) {
        Count temp;
        temp.value = value++;
        return temp;
    }
    void display() {
        cout << "Count: " << value << endl;
    }
};
int main() {
    Count count1(5), result;
    result = ++count1;
    result.display();
    result = count1++;
    result.display();
}
