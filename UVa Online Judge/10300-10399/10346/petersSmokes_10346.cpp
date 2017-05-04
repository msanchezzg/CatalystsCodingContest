#include <iostream>
using namespace std;

int algoritmo(int a, int b){

	int nuevos=0;
	while(a>=b){
		a=a-b+1;
		nuevos++;
	}

	return nuevos;
}


int main(){

    int cirr, col;
    while(cin>>cirr>>col){
    	cirr+=algoritmo(cirr,col);

    	cout<<cirr<<endl;
    }    

    return 0;
}
                    
