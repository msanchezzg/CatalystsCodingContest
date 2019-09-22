#include <iostream>
using namespace std;


int main(){

      int casos;
      cin>>casos;
      long x,y;

      for(int i=0;i<casos;i++){
      	cin>>x>>y;

      	if(x<y) cout<<"impossible"<<endl;
      	else{
      		if((x+y)%2==0){
      			long a=(x+y)/2;
      			long b=x-a;

      			cout<<a<<" "<<b<<endl;
      		}	

      		else cout<<"impossible"<<endl;
      	}
      } 

      return 0;
}
                    
