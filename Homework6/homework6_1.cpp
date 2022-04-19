#include <string>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <istream>
#include <locale>
#include <ostream>
#include <iostream>


int main()
{
    std::fstream fin{ "strings.txt" };

    std::string strData;
    int N;

    std::cin >> N;

    fin.seekg((N-1)*10);             // переход к 5-му символу
    // Получаем оставшуюся часть строки и распечатываем ее
    getline(fin, strData);
    std::cout << strData << '\n';
}

