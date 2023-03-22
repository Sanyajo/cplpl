#include <iostream>

 long int Fib(int i){
    if(i < 1){
        return 0;
    }else if(i == 1) {
        return 1;
    }else{
        return Fib(i-1) + Fib(i - 2);
    }
}

 int main() {
     int i = 0;
     int k = std::numeric_limits<int>::max();
     while (true) {
         if(Fib(i) > k){
             std::cout << Fib(i-1) << std::endl;
             break;
         }
         i++;
     }
     return 0;
 }
