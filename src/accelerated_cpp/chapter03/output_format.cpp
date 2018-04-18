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
setfill(c) 设填充字符为c 
setprecision(n) 设显示小数精度为n位 
setw(n) 设域宽为n个字符 
setioflags(ios::fixed) 固定的浮点显示 
setioflags(ios::scientific) 指数表示 
setiosflags(ios::left) 左对齐 
setiosflags(ios::right) 右对齐 
setiosflags(ios::skipws 忽略前导空白 
setiosflags(ios::uppercase) 16进制数大写输出 
setiosflags(ios::lowercase) 16进制小写输出 
setiosflags(ios::showpoint) 强制显示小数点 
setiosflags(ios::showpos) 强制显示符号 
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
