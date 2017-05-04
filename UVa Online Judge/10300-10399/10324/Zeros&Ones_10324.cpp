#include <iostream>
#include <string>
using namespace std;


int main(){

    string cadena;
    int casos,a,b,i,n,k;
    char c;
    i=0;

    while(cin>>cadena && cadena.compare("\n")!=0){
        i++;
        cout<<"Case "<<i<<":"<<endl;
        cin>>casos;

        for(int j=0;j<casos;j++){
            cin>>a>>b;
            n=min(a,b);
            b=max(a,b);
            c=cadena[n];
            
            while(c==cadena[n] && n<=b) n++;

            if(n==(b+1)) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;

        }
    }

    return 0;
}
                    
