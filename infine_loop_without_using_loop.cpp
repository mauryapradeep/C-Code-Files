#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
     int i = 2;
      if(i%2==0){
          label_1:cout<<i<<" if condi🔥"<<endl;
          goto label_2;
      }else{
          label_2:cout<<i<<" else condi🔥"<<endl;
          goto label_1;
      }
   //}

    return 0;
}
