#include <iostream>
using namespace std;


int main(){

	int casos, salario1, salario2, salario3, i, suma;
	cin>>casos;
	i=0;

	while(i<casos){
		cin>>salario1>>salario2>>salario3;
		suma=salario1+salario2+salario3;
		cout<<"Case "<<i+1<<": "<<suma-max(max(salario1,salario2),salario3)-min(min(salario1,salario2),salario3)<<endl;
		i++;
	}

    return 0;
}
                    
