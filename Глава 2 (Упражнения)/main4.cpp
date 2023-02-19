#include <iostream>
#include <vector>
using namespace std;
int main(){
    setlocale(LC_ALL,"RUS");
    int number;
    vector <string> bulHern = {"раскатать тесто","духовка 60 градусов","добавить в тесто чернику",
                               "выложить на противень булочки","противень в духовку","печь 20 минут"};
    vector <string> bulKor = {"раскатать тесто","духовка 60 градусов","добавить в тесто корицу",
                               "выложить на противень булочки","противень в духовку","печь 20 минут"};

    while(true) {
        cout << "Выберите рецепт\n1 - булочка с корицей\n2 - булочка с черникой\n3 - словарь терминов\n";
        cin >> number;

        switch (number) {
            case 1: {
                for (int i = 1; i < bulKor.size(); ++i) {
                    cout << i << " действие: " << bulKor[i] << endl;
                }
                break;
            }
            case 2: {
                for (int i = 1; i <= bulHern.size(); ++i) {
                    cout << i << " действие: " << bulHern[i] << endl;
                }
                break;
            }
            case 3: {
                std::cout<<"Про́тивень — тонкий металлический лист с загнутыми краями и невысоким бортиком для приготовления пищи";
                break;
            }
            case 0:{
                return 0;
            }
        }
        system("cls");
    }
}