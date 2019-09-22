#include <iostream>
#include <string>
using namespace std;

int main(){

        string ecuacion;

        while(cin>>ecuacion){
        	cout<<ecuacion;
        	getline(cin,ecuacion);
        	cout<<ecuacion<<endl;
        }

        return 0;
}
                    
