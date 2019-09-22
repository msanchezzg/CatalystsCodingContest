#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int casos,entrada,i;
    double numero;
    
    cin>>casos;
    i=0;

    while(i<casos){
    	cin>>entrada;
    	entrada=(((entrada*567)/9+7492)*235)/47-498;
    	entrada/=10;
    	numero=entrada/10.0;
    	numero=numero-entrada/10;
    	numero*=10;
    	cout<<abs(numero)<<endl;
    	i++;
    }

    return 0;
}
                    
