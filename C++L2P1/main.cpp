//
//  main.cpp
//  C++L2P1
//
//  Created by Tadeusz Potoniec on 23/01/2023.
//  based on https://www.youtube.com/watch?v=ErOzmh3BiXU&list=PLOYHgt8dIdoxx0Y5wzs7CFpmBzb40PaDo

#include <iostream>
using namespace std;
string PIN;
int main() {
    cout<<"Welcome in our bank!"<<endl;
    cout<<"Enter PIN number:";
    cin>>PIN;
    
    if (PIN=="1729")
       {
        cout<<"Correct PIN"<<endl;
    }
    else {
        cout<<"Incorrect PIN"<<endl;
    }
    return 0;
}

