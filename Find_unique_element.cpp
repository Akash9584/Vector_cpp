#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5);
    cout<<"Enter 5 elements in the vector to find unique element: ";
    for (int i :v){
        cin>>v[i];
    }
    int ans =0;
    for (int i=0;i<v.size(); i++){
        ans = ans^ v[i];
    }
    cout << "Unique element is: "<<ans<<endl;
    return 0; 
}
