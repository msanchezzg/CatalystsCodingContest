#include  <iostream>
#include <string>
using namespace std;


int main(){

  string line;
  int cases;
  cin>>cases;
  cin.ignore();

  for(int i=0;i<cases;i++){
  	getline(cin,line);
  	
	if (line.size()==1 || line.size()==2) cout<<'+'<<endl;
    else if(line[line.size()-1]=='5' && line[line.size()-2]=='3') cout<<'-'<<endl;
    else if(line[0]=='9' && line[line.size()-1]=='4') cout<<'*'<<endl;
    else cout<<'?'<<endl;
  }

  return 0;
}