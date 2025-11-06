#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Empliment of vector
    vector<int> vec(2);
    vec[0] = 10;
    vec[1] = 20;
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    vector<char> v = {'a', 'n', 's', 's', 'e', 't'};
    for (char i : v)
    { // for each loop
        cout << i << " ";
    }
    cout << endl;
    vector<int> vec1(4,3);// vector of size 4 and all values are 3
    for (int val : vec1)
    {
        cout << val << " ";
    }
    return 0;
}
