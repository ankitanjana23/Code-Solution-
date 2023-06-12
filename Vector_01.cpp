#include <iostream>
#include <vector>
// #include<bits/stdc++.h>

using namespace std;

int main()
{
    // dynamic diclaration
    // vector<int>* vp = new vector<int>() ;

    vector<int> v;

    // using loop to print vector
    for (int i = 0; i < 100; i++)
    {
        cout << "Capacity : " << v.capacity() << endl;
        cout << "Size: " << v.size() << endl;
        v.push_back(i + 1);
    }

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // updation
    v[1] = 100;

    // don't use squre breket to initalize value only use to value get and update
    v[3] = 1034;
    v[4] = 45;

    // more
    v.push_back(40);
    v.push_back(50);

    // Removing the last element of vector
    v.pop_back();

    // size of vector find
    cout << "size: " << v.size() << endl;

    // print

    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;
    cout << v[3] << endl;
    cout << v[4] << endl;
    cout << v[5] << endl;
    cout << v[6] << endl; // it will give garbage value

    // we can use also
    cout << v.at(0) << endl;
    cout << v.at(2) << endl;
    cout << v.at(6) << endl; // don't print garbage value    // terminate called after throwing an instance of 'std::out_of_range'
}