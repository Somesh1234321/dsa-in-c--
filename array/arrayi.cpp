#include <iostream>
using namespace std;

int main(){
    int size = 5;
    int marks[size];
    for(int i =0; i<size; i++){
        cin >> marks[i];
    }


    //2-int marks[5]= {99,100,55,66,77};
    //int size = 5;
    //loops : 0 to size-1
    for (int i=0; i<size; i++){
      cout << marks[i] << endl;
    }

    
   // 1-int price[]={98,99,105,67,30}; 
    //marks[0] = 101;
    //cout << marks[0] <<endl;
    //cout << marks[1];
    //cout << marks[2];
    //out << marks[3];
    //cout << marks[4];
    return 0;
}