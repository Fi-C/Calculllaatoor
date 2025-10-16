#include <iostream>


int sum(int num1, int num2)
{
    return num1 + num2;
}

int summain()
{
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int number2;
    std::cout << "Enter a second number: ";
    std::cin >> number2;

    int result = sum(number, number2);
    std::cout << number << " + " << number2 << " is " << result << std::endl;

    return 0;
}

int multi(int num1, int num2)
{
    return num1 * num2;
}

int multimain()
{
    int multinumber;
    std::cout << "Enter a number: ";
    std::cin >> multinumber;

    int multinumber2;
    std::cout << "Enter a second number: ";
    std::cin >> multinumber2;

    int result = multi(multinumber, multinumber2);
    std::cout << multinumber << " x " << multinumber << " is " << result << std::endl;

    return 0;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int submain()
{
    int minusnumber;
    std::cout << "Enter a number: ";
    std::cin >> minusnumber;

    int minusnumber2;
    std::cout << "Enter a second number: ";
    std::cin >> minusnumber2;

    int result = sub(minusnumber, minusnumber2);
    std::cout << minusnumber << " - " << minusnumber2 << " is " << result << std::endl;

    return 0;
}
