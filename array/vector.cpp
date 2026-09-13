#include <iostream>
#include <vector>
using  namespace std;
int main (){
/**
int main (){
    vector<int>vec (5,0);
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    cout << vec[3] << endl;
    cout << vec[4] << endl;
    return 0;

int main(){
    vector<char> vec={'a','b','c','d','e'};
    cout <<"size: "<< vec.size() << endl;
    for(char val: vec){
        cout << val << endl;
    }
        return 0;**/
        vector<int> vec;
        vec.push_back(0);
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);
        cout << "size: " << vec.size() << endl;
        cout << "capacity: " << vec.capacity() << endl;
        return 0;


    
   
      
    
}
   
    
