#include <iostream>
using namespace std;

class complex
{

    int a, b;

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumcomplex(complex c1, complex c2);
    void getdata(void)
    {
        cout << "your complex number is " << a << "+" << b << "i" << endl;
    }
};
complex sumcomplex(complex c1, complex c2)
{
    complex c3;
    c3.setdata((c1.a + c2.a), (c1.b + c2.b));
    return c3;
}

int main()
{
    complex d, e, sum;
    e.setdata(3, 5);
    e.getdata();
    d.setdata(6, 7);
    d.getdata();

    sum = sumcomplex(d, e);
    sum.getdata();

    return 0;
}