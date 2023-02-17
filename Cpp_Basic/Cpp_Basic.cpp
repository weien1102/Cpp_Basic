#include <iostream>
#include <iomanip>

int main()
{
    //列出算術運算子 + - * / % 的範例程式
    int number1 = 3;
    int number2 = 5;

    //加法
    std::cout << number1 << " + " << number2 << " = " << number1 + number2 << std::endl;

    //減法
    std::cout << number1 << " - " << number2 << " = " << number1 - number2 << std::endl;

    //乘法
    std::cout << number1 << " * " << number2 << " = " << number1 * number2 << std::endl;

    //除法
    std::cout << number1 << " / " << number2 << " = " << number1 / number2 << std::endl;

    //餘數
    std::cout << number1 << " % " << number2 << " = " << number1 % number2 << std::endl;

    //列出關係運算子 > < >= <= == != 的範例程式
    int number3 = 3;
    int number4 = 5;
    
    //大於
    std::cout << number3 << " > " << number4 << " = " << (number3 > number4) << std::endl;

    //小於
    std::cout << number3 << " < " << number4 << " = " << (number3 < number4) << std::endl;

    //大於等於
    std::cout << number3 << " >= " << number4 << " = " << (number3 >= number4) << std::endl;

    //小於等於
    std::cout << number3 << " <= " << number4 << " = " << (number3 <= number4) << std::endl;

    //等於
    std::cout << number3 << " == " << number4 << " = " << (number3 == number4) << std::endl;

    //不等於
    std::cout << number3 << " != " << number4 << " = " << (number3 != number4) << std::endl;

    //列出邏輯運算子 && || ! 的範例程式
    int number5 = 3;
    int number6 = 5;

    //邏輯且
    std::cout << number5 << " && " << number6 << " = " << (number5 && number6) << std::endl;

    //邏輯或
    std::cout << number5 << " || " << number6 << " = " << (number5 || number6) << std::endl;

    //邏輯非
    std::cout << "!" << number5 << " = " << (!number5) << std::endl;
    std::cout << "!" << number6 << " = " << (!number6) << std::endl;

    //列出位元運算子 & | ^ ~ << >> 的範例
    int number7 = 3;
    int number8 = 5;

    //位元且
    std::cout << number7 << " & " << number8 << " = " << (number7 & number8) << std::endl;

    //位元或
    std::cout << number7 << " | " << number8 << " = " << (number7 | number8) << std::endl;

    //位元異或
    std::cout << number7 << " ^ " << number8 << " = " << (number7 ^ number8) << std::endl;

    //位元非
    std::cout << "~" << number7 << " = " << (~number7) << std::endl;
    std::cout << "~" << number8 << " = " << (~number8) << std::endl;

    //位元左移
    std::cout << number7 << " << " << 1 << " = " << (number7 << 1) << std::endl;
    std::cout << number8 << " << " << 1 << " = " << (number8 << 1) << std::endl;

    //位元右移
    std::cout << number7 << " >> " << 1 << " = " << (number7 >> 1) << std::endl;
    std::cout << number8 << " >> " << 1 << " = " << (number8 >> 1) << std::endl;

    //列出指定運算子 = 的範例程式
    int number9 = 3;
    int number10 = 5;

    //指定運算子
    number9 = number10;
    std::cout << number9 << " = " << number10 << std::endl;

    //列出遞增運算子 ++ 的範例程式
    int number11 = 3;
    int number12 = 5;

    //遞增運算子
    number11++;
    number12--;

    std::cout << "++" << number11 << " = " << number11 << std::endl;
    std::cout << "--" << number12 << " = " << number12 << std::endl;

    //定義cout輸出格式 std::hex, std::oct, std::dec, setw 等指令的範例程式
    int number13 = 0x1A2B3C4D;
    int number14 = 01234567;
    int number15 = 12345678;

    //列出各種輸出格式
    std::cout << "number13 = " << number13 << std::endl;
    std::cout << "number14 = " << number14 << std::endl;
    std::cout << "number15 = " << number15 << std::endl;

    //列出std::hex輸出格式
    std::cout << "number13 = " << std::hex << number13 << std::endl;
    std::cout << "number14 = " << std::hex << number14 << std::endl;
    std::cout << "number15 = " << std::hex << number15 << std::endl;

    //列出std::oct輸出格式
    std::cout << "number13 = " << std::oct << number13 << std::endl;
    std::cout << "number14 = " << std::oct << number14 << std::endl;
    std::cout << "number15 = " << std::oct << number15 << std::endl;

    //列出std::dec輸出格式
    std::cout << "number13 = " << std::dec << number13 << std::endl;
    std::cout << "number14 = " << std::dec << number14 << std::endl;
    std::cout << "number15 = " << std::dec << number15 << std::endl;

    //列出setw輸出格式
    std::cout << "number13 = " << std::setw(10) << number13 << std::endl;
    std::cout << "number14 = " << std::setw(10) << number14 << std::endl;
    std::cout << "number15 = " << std::setw(10) << number15 << std::endl;

    //列出setfill輸出格式
    std::cout << "number13 = " << std::setfill('-') << std::setw(10) << number13 << std::endl;
    std::cout << "number14 = " << std::setfill('-') << std::setw(10) << number14;

    return 0;
}