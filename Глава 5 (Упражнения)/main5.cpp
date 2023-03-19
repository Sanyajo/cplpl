#include <iostream>

double convert(double k){
    k = k - 273.15;
    return k;
}

int main(){
    double k;

    std::cout<<"Input k: ";
    std::cin>>k;

    if(k <= 0){
        std::cerr<<"k <= 0 !";
        return 1;
    }else{
        double c = convert(k);
        std::cout<<"C: "<<c;
        return 0;
    }

}