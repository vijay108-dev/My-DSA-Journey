#include <iostream>
using namespace std;

int main(){
  for(int row=1;row<=5;row++){
    for (int col=1;col<=5;col++){
      cout<<"4"<<" ";
    }
    cout << endl;
  }
  cout<<"\n";


  for (int row=1;row<=6;row++){
    for (int col=1;col<=5;col++){
      cout<<col*col<<" ";
    }
    cout<<endl;
  }
  cout<<"\n";

  for (int row=1;row<=5;row++){
    for (int col=1;col<=6;col++){
      cout<<col*col*col<<" ";
    }
    cout<<endl;
  }
  cout<<"\n";

  return 0;
}
