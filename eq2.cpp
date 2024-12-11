#include <iostream>
#include <math.h>

double root(double& x_0,double& arg, double& eps){
    while (abs(-2 + x_0 + exp(arg*x_0)) > eps){
        x_0 = x_0 - (-2 + x_0 + exp(arg*x_0))/(1 + arg*exp(arg*x_0));
    }
    return x_0;
}

int main(){
    double arg;
    double eps = 1e-9;
    double x = 0.8;
    std::cin>> arg;
    if(arg >= 0){
        double x_1 = 1;
        std::cout << "answer: "<< root(x_1, arg, eps) <<std::endl;
    }
    else{
        double x_min = (1/arg)*log(abs(1/arg));
        double x_1 = x_min + 0.1*abs(x_min);
        double x_2 = x_min - 0.1*abs(x_min);
        std::cout << "x_1 = "<< root(x_1, arg, eps) << " x_2 = " << root(x_2, arg, eps) << std::endl;
    }
    return 0;		
}
