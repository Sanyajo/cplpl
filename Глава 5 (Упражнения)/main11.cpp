#include <iostream>
#include <vector>

int main(){
    //int k = std::numeric_limits<int>::max();

   int i= 0 ,j = 1 ,check;
   long int sum = 0;
    while(true){
        check=sum;
       sum=(i+j);
       i=j;
       j=sum;
       if(sum > 32767){
           std::cout<<check;
           break;
       }
    }

}