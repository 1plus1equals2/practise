#include <iostream>
using namespace std;

class BeforeMain
{
    public:
        BeforeMain();
};


BeforeMain::BeforeMain()
{
    cout<<"BeforeMain"<<endl;
}

BeforeMain Ts;//定义个全局变量，让类里面的代码在main之前执行

int main()
{
    cout<<"main"<<endl;

    return 0;
}
