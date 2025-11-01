#include<iostream>
using namespace std;
int main(){

  // Pattern 1: Single Row of 5 Stars
  for(int i=1;i<=5;i++){
    cout<<"*"<<" ";
  }
  cout<<"\n\n";


  // Pattern 2: 5x5 Square of Stars
  for(int row=1;row<=5;row++){
    for(int col=1;col<=5;col++){
      cout<<"*"<<" ";
    }
    cout<<endl;
  }
  cout<<"\n";


  // Pattern 3: 4x4 Grid with 10
  for(int row=1;row<=4;row++){
    for(int col=1;col<=4;col++){
      cout<<"10"<<" ";
    }
    cout<<endl;
  }
  cout<<"\n";


  // Pattern 4: 5x5 Grid of Row Number
  for(int row=1;row<=5;row++){
    for(int col=1;col<=5;col++){
      cout<<row<<" ";
    }
    cout<<endl;
  }
  cout<<"\n";


  // Pattern 5: 5x5 Grid of Column Number
  for(int row=1;row<=5;row++){
    for(int col=1;col<=5;col++){
      cout<<col<<" ";
    }
    cout<<endl;
  }
  cout<<"\n";


  // Pattern 6: Column Numbers in Reverse
  for(int row=1;row<=5;row++){
    for(int col=5;col>=1;col--){
      cout<<col<<" ";
    }
    cout<<endl;
  }
  cout<<"\n";


  // Pattern 7: Square of Squares
  for(int row=1;row<=5;row++){
    for(int col=1;col<=5;col++){
      cout<<col*col<<" ";
    }
    cout<<endl;
  }
  cout<<"\n";


  // Pattern 8: Rows of Same Alphabet (a-e)
  for(int row=1;row<=5;row++){
    char name='a'+(row-1);
    for(int col=1;col<=5;col++){
      cout<<name<<" ";
    }
    cout<<endl;
  }
  cout<<"\n";


  // Pattern 9: Rows of Same Alphabet (Method 2)
  for(char row='a';row<='e';row++){
    for(char col='a';col<='e';col++){
      cout<<row<<" ";
    }
    cout<<endl;
  }
  cout<<"\n";


  // Pattern 10: Columns of Alphabet (a-e)
  for(char row='a';row<='e';row++){
    for(char col='a';col<='e';col++){
      cout<<col<<" ";
    }
    cout<<endl;
  }
  cout<<"\n";


  // Pattern 11: 5x5 Grid with Increasing Numbers
  int count=1;
  for(int row=1;row<=5;row++){
    for(int col=1;col<=5;col++){
      cout<<count<<" ";
      count++;
    }
    cout<<endl;
  }

  return 0;
}