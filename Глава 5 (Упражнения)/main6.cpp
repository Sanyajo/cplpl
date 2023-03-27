#include <iostream>

void conv_F(double t){
    t = 9.0/5*t+32;
    if(t <= -459.67){
        throw std::invalid_argument("t <= -459,67");
    }else{
        std::cout<<t<<" °F";
    }
}

void conv_C(double t){
    t = (t-32)*5.0/9;
    if(t <= -273.15){
        throw std::invalid_argument("t <= -273.15");
    }else{
        std::cout<<t<<" °C";
    }
}

int main(){
    double t = 0;
    std::cout<<"Input temp: ";
    std::cin>>t;

    char choice;
    std::cout<<"Input (C or F): ";
    std::cin>>choice;
    choice = toupper(choice);
    
    if(choice == 'C' || choice == 'F'){
        switch (choice) {
            case 'C':{
                try{
                    conv_F(t);
                }catch (const char* msg){
                    std::cerr<<msg;
                }
                break;
            }
            case 'F':{
                try{
                    conv_C(t);
                }catch (const char* msg){
                    std::cerr<<msg;
                }
                break;
            }
        }

    }else{
        std::cerr<<"Error choise!";
        return 1;
    }
    return 0;
}