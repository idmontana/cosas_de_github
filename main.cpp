#include <iostream>
#include "funciones.h"
using namespace std;

int main(){
    
    //Inicialización
    double vo= 20;
    double yi = 8.5;
    double ti = 0;
    double dt= 0.001;
    
    double y = yi;
    double t = ti;
    int i = 1;
    
    while(y >= 0){
        
        cout << t << ',' << y << endl;
        t = ti + dt*i;
        yi = y; 
        y = RungeKutta4(vo,yi,t,dt);
        i = i+1;
    }    
    return 0;
}

