#include <iostream>
#include <vector>
#include <string>
using namespace std;

int ymenh(int a, vector <int> & vec) {
        string wybor;
        cout << "Ваше число больше " << (a - (a / 2)) << " ?";
        cin >> wybor;

        if (wybor == "y") {
            vec.erase(vec.begin(), vec.end() - (vec.size() / 2));

            for (int i: vec) {
                cout << i << " ";
            }

            if(vec.size() <=3){
                for(int i: vec){
                    string vybor;cout<<"\nВаше число: "<<i;
                    cin>>vybor;
                    if(vybor == "y"){cout<<"\nЧисло: "<<i<<endl;break;}
                }
            }
            else{
                return ymenh((a + (a / 2)), vec);
            }

        }
        else {
            vec.erase(vec.begin() + (vec.size() / 2), vec.end());

            for (int i: vec) {
                cout << i << " ";
            }

            if(vec.size() <=3){
                for(int i: vec){
                    string vybor;cout<<"\nВаше число: "<<i;
                cin>>vybor;
                    if(vybor == "y"){cout<<"\nЧисло: "<<i<<endl;break;}
                }
            }
            else{
                return ymenh((a - (a / 2)), vec);
            }

        }
}

void ywel(int a, vector <int> & vec) {
    string wybor;
    a=(a + (a / 2));
    if(a>=100){a=100;}
    cout << "Ваше число больше " << a << " ?";
    cin >> wybor;
    if (wybor == "y") {
        vec.erase(vec.begin(), vec.end()-(vec.size()/2));

        for (int i: vec) {
            cout << i << " ";
        }

        if(vec.size() <=3){
            for(int i: vec){
                string vybor;cout<<"\nВаше число: "<<i;
                cin>>vybor;
                if(vybor == "y"){cout<<"\nЧисло: "<<i<<endl;break;}
            }
        }
        else{
            return ywel(a, vec);
        }

    }
    else {
        vec.erase(vec.begin() + (vec.size() / 2), vec.end());
        a=(a - (a / 2));
        for (int i: vec) {
            cout << i << " ";
        }

        if(vec.size() <=3){
            for(int i: vec){
                string vybor;cout<<"\nВаше число: "<<i;
                cin>>vybor;
                if(vybor == "y"){cout<<"\nЧисло: "<<i<<endl;break;}
            }
        }
        else{
            return ywel(a, vec);
        }

    }
}

void inputVec(vector <int>& vec1, vector <int>& vec2){
    int i=1;
    while ( i<=50){
        vec1.push_back(i);
        vec2.push_back(50+i);
        i++;
    }

}

int main(){
    vector <int> vec1;
    vector <int> vec2;
    inputVec(vec1,vec2);

    int number;
    cout<<"Загадайте число от 1 до 100: ";
    cin>>number;

    string vybor;
    cout<<"Число больше 50? ";
    cin>>vybor;


    if(vybor == "y")    ywel(49,vec2);
    else    ymenh(50,vec1);


//    for(int i: vec1){
//        cout<<i<<" ";
//    }
//
//    cout<<endl<<endl;
//    for( int i: vec2){
//        cout<<i<<" ";
//    }

    return 0;
}