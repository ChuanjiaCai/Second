//
//  main.cpp
//  C++ Document
//
//  Created by jack on 16/5/15.
//  Copyright © 2016年 jack. All rights reserved.
//
//
//#include <iostream>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}
//
//  main.cpp
//  1605112254
//
//  Created by jack on 16/5/11.
//  Copyright © 2016年 jack. All rights reserved.
//
//
//#include <iostream>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}
#include <iostream>

#include <iostream>
#include <new>
using namespace std;

int main ()
{
    int i,n;
    int * p;
    cout << "How many numbers would you like to type? "<<":";
    cin >> i;
    p= new (nothrow) int[i];
    if (p == nullptr)
        cout << "Error: memory could not be allocated:";
    else
    {
        for (n=0; n<i; n++)
        {
            cout << "Enter number: ";
            cin >> p[n];
        }
        cout << "You have entered: ";
        for (n=0; n<i; n++)
            cout << p[n] << ", ";
        delete[] p;
    }
    return 0;
}

