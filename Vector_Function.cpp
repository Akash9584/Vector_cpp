#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << "Size: " << v.size() << endl;
    v.push_back(37);
    v.push_back(574);
    v.push_back(7897);
    v.push_back(123);
    cout << "Size after push back: " << v.size() << endl;
    v.pop_back();
    cout << "Size after pop back: " << v.size() << endl;
    cout << "Front element: " << v.front() << endl;
    cout << "Back element: " << v.back() << endl;
    cout << "Accessing element at index 2: " << v.at(2) << endl;
    return 0;
}
