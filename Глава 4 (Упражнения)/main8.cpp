#include <iostream>
using namespace std;
void Sum(int n){
    int i = 1, sum = 1, prev = 1;
    while (sum < n) 
    {
        prev *= 2;
        sum += prev;
        i++;
    }
    cout<<"Для "<<n<<" зерен риса надо "<<i<<" клеток\n";
}
int main() {
   Sum(1000);
   Sum(1000000);
   Sum(1000000000);
}