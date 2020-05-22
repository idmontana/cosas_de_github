#include <iostream>
using namespace std;

int factorial(int n){
    if(n<0) return 0;
    else if (n>1) return n*factorial(n-1);
    return 1;
}

int main(){
    int n;
    cout<<"Ingresa el número al que se le va a realizar el factorial"<<endl;
    cin>>n;
    cout<<"Factorial de "<<n<<" = "<<factorial(n)<<endl;
    return 0;
}
