#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int>dq;
    // ================= INSERT OPERATIONS =================

    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_front(2);

    cout<<"Deque Elements : "<<endl;
    for(int x:dq)
    {
        cout<<x<<" ";
    }

    cout<<endl;


    // ================= FRONT & BACK =================
    cout<< "Front Element : " <<dq.front()<<endl;
    cout<< "Back Element  : " <<dq.back()<<endl;

    // ================= SIZE =================
    cout<< "Size : " <<dq.size()<<endl;


    // ================= EMPTY CHECK ===================

    if (dq.empty())
    {
        cout<<"Deque is Empty"<<endl;
    }
    else
    {
        cout<<"Deque is Not Empty"<<endl;
    }


    // ================= ACCESS USING INDEX =================

    cout<<"Element at index 1 : "<<dq[1]<<endl;

    cout<<"Element using at() : "<<dq.at(2)<<endl;


    // ================= INSERT AT POSITION =================
    dq.insert(dq.begin()+2, 100);
    cout<<"After Insert : "<<endl;
    for(int x:dq)
    {
        cout<<x<<" ";
    }

    cout<<endl;


    // ================= ERASE =================
    dq.erase(dq.begin()+1);
    cout<<"After Erase : ";
    for(int x:dq)
    {
        cout<<x<<" ";
    }

    cout<<endl;


    // ================= POP OPERATIONS =================
    dq.pop_front();
    dq.pop_back();
    cout<<"After Pop : ";
    for(int x:dq)
    {
        cout<<x<<" ";
    }
    cout<<endl;


    // ================= FIRST & LAST ITERATOR =================
    cout<<"First Element : "<<*dq.begin()<<endl;
    cout<<"Last Element : "<<*(dq.end()-1)<<endl;


    // ================= CLEAR =================
    dq.clear();
    cout<<"After Clear Size : "<<dq.size()<<endl;


    return 0;
}