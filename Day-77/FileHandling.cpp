// File handling means reading data from a file and writing data into a file using a program.
// In OOPS/C++, file handling is used to store data permanently.

// Example:
// Save student data
// Save bank details
// Read old records from file


// Main file classes in C++:
// ofstream → write data into file
// ifstream → read data from file
// fstream → both read and write

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // Writing into file
    ofstream fout; //fout is my object and open is a member function 
    fout.open("zoom.txt"); //it will created or open it proper path you should give

    //write 
    fout<<"Hello Vijay"<<endl;
    fout<<"Welcome to File Handling";
    fout.close(); //it will release resources

    cout << "Data written successfully" << endl;

    // Reading from file
    ifstream fin;
    //open the file
    fin.open("zoom.txt");
    //read the file
    char c;
    fin>>c;
    while(!fin.eof())
    {
        cout<<c;
        c=fin.get();
    }
    fin.close();

    return 0;
}