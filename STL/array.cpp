#include <iostream>
#include <array>
using namespace std;

int main(){
    array <int , 4> a = {1, 2, 3, 40};
    cout << "element at index  2 is " << a.at(2) << endl;
    cout << "first element is " << a.front() << endl;
    cout << "last element is " << a.back() << endl;
    cout << "is empty or not " << a.empty() << endl;
    return 0;
}