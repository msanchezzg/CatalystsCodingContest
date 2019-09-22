#include  <iostream>
#include <string>
#include <vector>
using namespace std;


int mov(string order,int pos){

  if(order[0]=='L') pos--; 
  else if(order[0]=='R') pos++;

  return pos;
}


int main(){

  string line;
  int pos,cases,num_orders,k,move_to;
  vector<string> orders;
  vector<int> other_order;
  char c='a';
  cin>>cases;

  for(int i=0;i<cases;i++){
    pos=0;
    cin>>num_orders;
    orders.clear();
    other_order.clear();

    for(int j=0;j<num_orders;j++){
      cin>>line;
      line+=(char)(j+48);
      orders.push_back(line);
      
      if(line[0]=='S'){
        cin>>line>>move_to;
        other_order.push_back(move_to);
      }
      else other_order.push_back(0);
    }

    for(int j=0;j<orders.size();j++){
      line=orders[j];

      while(line[0]=='S') {
        /*for(int k=line.size()-1;(int)c>=48 && (int)c<=57;k--){
          c=
        }
        line=orders[int(line[line.size()-1]-48)-1];*/

        k=0;
        while(orders[k]!=line) k++; 

        line=orders[other_order[k]-1];
      }  

      pos=mov(line,pos);
    }

    cout<<pos<<endl;
  }

  return 0;
}
