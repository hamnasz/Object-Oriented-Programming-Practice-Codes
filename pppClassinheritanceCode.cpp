#include <iostream>
using namespace std;

class parent 
{
    public:
    int a;
    protected:
    int b;
    private:
    int c;

};

class child: public parent
{
    public:
    void get()
    {
        cout << "Enter the value of a =";
        cin >> a;
        
        cout << "Enter The Value of b =";
        cin >> b;

        // cout << "Enter The Value of c =";
        // cin >> c;
    }
    void show ()
    {
        cout << b << endl;
        cout << a<< endl;
    }

};