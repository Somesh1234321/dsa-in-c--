#include <iostream>
using namespace std;
int main(){
  int n=5;
  int arr[n]={1,2,3,4,5};
  /**currSum=0, maxsum= int_min;
   * for (i=0; i<n; i++){
   * currSum+=arr[i];
   * if(currSum<0){
   * currSum=0;
   * }
   *        
   *  * maxSum=max(maxSum,currSum);
   * kedanes approach (hum no lenge agr wo negative ho gya to hum usko 0 kar denge)
   */
  
  /**brute force approach 
  int maxSum= INT8_MIN;
  for (int st=0; st<n; st++){
     int currSum=0;
    for (int en=st; en<n; en++){
      currSum+=arr[en];
      maxSum = max(maxSum,currSum);
      
    }   
    

    
    }
    cout<<"max subarray sum ="<<maxSum<<endl;
    return 0;**/
  }
