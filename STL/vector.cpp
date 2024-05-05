#include <iostream>
#include <vector>
using namespace std;

int main(){
    // ! initialize 
    vector <int> v;
    cout << "capacity is " << v.capacity() << endl;
    v.push_back(4);

    cout << "capacity is " << v.capacity() << endl;
    v.push_back(7);

    cout << "capacity is " << v.capacity() << endl;
    v.push_back(45);

    cout << "capacity is " << v.capacity() << endl;
    v.push_back(74);

    cout << "at index 3 is " << v.at(3) << endl;
    v.pop_back();

    cout << "last element is " << v.back() << endl;

    v.clear();
    cout << "capacity is " << v.capacity() << endl;
    

    return 0;
}