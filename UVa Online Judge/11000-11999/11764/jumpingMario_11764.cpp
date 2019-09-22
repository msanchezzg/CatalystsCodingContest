#include <iostream>
using namespace std;


int main(){

    int casos, num_columnas, col_actual, col_siguente, high, low;
    cin>>casos;

    for(int i=1;i<=casos;i++){
    	high=0;
    	low=0;
    	cin>>num_columnas;
    	cin>>col_actual;

    	for(int j=1;j<num_columnas;j++){
    		cin>>col_siguente;
    		if (col_actual<col_siguente) high++;
    		else if (col_actual>col_siguente) low++;
    		col_actual=col_siguente;
    	}

    	cout<<"Case "<<i<<": "<<high<<' '<<low<<endl;
    }       

    return 0;
}
                    
