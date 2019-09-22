#include <iostream>
using namespace std;

int main(){

        int casos,largo,ancho,alto,i;
        i=0;
        cin>>casos;
        
        while(i<casos){
        	i++;
        	cin>>largo>>ancho>>alto;
        	cout<<"Case "<<i<<": ";
        	if (largo>20 || ancho>20 || alto>20) cout<<"bad"<<endl;
        	else cout<<"good"<<endl;
        }

        return 0;
}
                    
