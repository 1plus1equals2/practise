#include <iostream>
#include <ios>
#include <iomanip>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;
using std::setw;

/*
setfill(c) ������ַ�Ϊc 
setprecision(n) ����ʾС������Ϊnλ 
setw(n) �����Ϊn���ַ� 
setioflags(ios::fixed) �̶��ĸ�����ʾ 
setioflags(ios::scientific) ָ����ʾ 
setiosflags(ios::left) ����� 
setiosflags(ios::right) �Ҷ��� 
setiosflags(ios::skipws ����ǰ���հ� 
setiosflags(ios::uppercase) 16��������д��� 
setiosflags(ios::lowercase) 16����Сд��� 
setiosflags(ios::showpoint) ǿ����ʾС���� 
setiosflags(ios::showpos) ǿ����ʾ���� 
*/

int main(int argc, char** argv)
{
    cout << string(80, '=') << endl;
    streamsize prec = cout.precision();
    cout << "default precision: " << prec << endl;
    double pi = 3.1415926;
    cout << "ouput pi:"  << endl;
    cout << setw(10) << setprecision(2) << pi << setprecision(prec) << endl;
    cout << setw(10) << setiosflags(std::ios::fixed) << setiosflags(std::ios::right) << setprecision(2) << pi << setprecision(prec) << endl;

    cout << string(80, '=') << endl;
    cout << "output number: " << endl;
    const int ival = 27;
    cout << "oct: " << std::oct << ival << endl;
    cout << "dec: " << std::dec << ival << endl;
    cout << "hex: " << std::hex << ival << endl;
    cout << "hex: " << std::uppercase << std::hex << ival << endl;

    return 0;
}
