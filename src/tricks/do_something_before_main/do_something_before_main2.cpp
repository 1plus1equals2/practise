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

BeforeMain Ts;//�����ȫ�ֱ�������������Ĵ�����main֮ǰִ��

int main()
{
    cout<<"main"<<endl;

    return 0;
}
