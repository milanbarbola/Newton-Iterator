#include<iostream>
#include <iomanip>

template<typename F,typename F2, typename T>
T Newton(F function, F2 derivative, T x0){
    double x_n = x0;
    for(int i = 1; i <= 10000 ; i++){
        double x_n1 = x_n - (function(x_n)/derivative(x_n));
        x_n = x_n1;
    }
    std::cout << std::fixed << std::setprecision(21) << x_n << std::endl;
    return x_n;
}
int main(){
    Newton([](double x){return x*x-612.0;},
           [](double x){return 2*x;},10.0
    );
}