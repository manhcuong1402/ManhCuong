#ifndef NHANVIEN_H
#define NHANVIEN_H
#include <bits/stdc++.h>
using namespace std;
class nhanvien
{
    protected:
        string id;
        string fullname;
        string taxcode;
    public:
        nhanvien();
        nhanvien(string, string, string);
        //setters:
        void setID(string);
        void setName(string);
        void setTax(string);
        //getters:
        string getID()const;
        string getName()const;
        string getTax()const;
        //methods:
        double getSalary()const;
}; 
#endif