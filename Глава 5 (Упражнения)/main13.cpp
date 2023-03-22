#include <iostream>
#include <random>

int main(){
    while(true){
        int n;
        std::cout<<"Input n: ";
        std::cin>>n;
        if(n == 0 ){
            break;
        }else{
            srand(n);
            std::cout<<rand()%9999+1<<"\n";
        }
    }
    return 0;
}