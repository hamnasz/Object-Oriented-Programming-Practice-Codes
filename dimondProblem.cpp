#include <iostream>
using namespace std;

class instagram {
public: instagram() { cout 
    << "Instagram is Opened Here" 
    << endl; }};

class facebook : virtual public instagram
{ public: facebook() { cout 
    << "Facebook is Opened Here " 
    << endl; }};

class snapchat : virtual public instagram
{ public: snapchat() { cout 
    << "Snapchat is Opened Here " 
    << endl; }};

class twitter : public facebook, public snapchat
{ public: twitter() { cout 
    << "Twitter is Opened Here " 
    << endl; }};

int main()
{
    twitter th;
    return 0;
}