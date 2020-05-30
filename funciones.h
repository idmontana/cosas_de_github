
double alfa(double t,double vo){
    double vi= vo - 9.8*t; 
    return vi;
}

double RungeKutta4(double vo, double y, double t, double dt){
    double k1 = alfa(t,vo)*dt;
    double k2 = alfa(t+dt/2,vo)*dt;
    double k3 = alfa(t+dt/2,vo)*dt;
    double k4 = alfa(t+dt,vo)*dt;
    //double* p= new double[2];
    double p = y + (k1 + 2*k2 + 2*k3 + k4)/6;
    return p;
}
