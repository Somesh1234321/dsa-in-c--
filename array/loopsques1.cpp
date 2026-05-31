//find smallest/ largest in array
#include <iostream>
using namespace std;
int main(){
    int nums[]= {5,10,15,20,25,30};
    int size = 6;
    int smallest = INT8_MAX;
    for(int i=0;i<size;i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }

    }
    cout << "smallest ="<< smallest <<endl;

    return 0;
}