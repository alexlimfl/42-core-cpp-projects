#include <iostream>
#include <string>

class test
{
private:
    const static int  s = 134;
    int         x;
public:
    test(int a, int b);
    ~test();

    int         getStatic(void);
    static int  getStatic_(void);
    int         getInt(void);
};

int test::s = 0;

test::test(int para1, int para2) : x(para2)
{
    this->s += para1;
}

test::~test()
{
}

int test::getStatic(void) { return (s); }

int test::getInt(void) { return (x); }

int test::getStatic_(void) { return (s); }

int main(void)
{
    test    T1(1, 2);
    test    T2(2, 1);

    std::cout << "get val T1 " << T1.getStatic() << " " << T1.getInt() << '\n';
    std::cout << "get val T2 " << T2.getStatic() << " " << T2.getInt() << '\n';
    std::cout << "get Static " << test::getStatic_() << '\n';
    std::cout << std::string::npos << '\n';
    return (0);
}