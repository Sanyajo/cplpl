#include <iostream>

double ctok (double c){
    double k = c+ 273.15;
    if (k == 0){
        throw std::invalid_argument("k == 0");
    }else{
        return k;
    }
}
int main(){
    double c = 0;
    std::cin>>c;
    try{
         double k = ctok(c);
             std::cout<<k;
    }catch(const std::invalid_argument& e){
        std::cerr<<e.what()<<"\n";
    }
    return 0;
}