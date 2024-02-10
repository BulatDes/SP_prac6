// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string.h>
#include <cctype>

#include <iostream>
#include <string.h>
using namespace std;

bool VowelWord(char ch) {
    char vowelletters[] = { 'a','A', 'e', 'E', 'y', 'Y', 'u', 'U', 'i', 'I', 'o', 'O' };
    bool flag = false;
    for (int i = 0; i < sizeof(vowelletters) / sizeof(vowelletters[0]); i++)
    {
        if (ch == vowelletters[i]) {
            flag = true;
            break;
        }
    }
    return flag;
}

void RemoveWords(char* str)
{
    int n, i, k, nv;
    int j = 0;
    bool check = false;
    n = strlen(str);
    for (i = 0; i < n; i++)
    {

        check = VowelWord(str[i]);
        if (check || !isalpha(str[i]))
        {
            while (i < n && str[i] != ' ')
            {
                i++;
            }
            check = false;
        }
        else
        {
            while (i < n && str[i] != ' ')
            {
                str[j++] = str[i++];
            }
            str[j++] = ' ';
        }
    }
    str[j] = '\0';
}



int main()
{
    setlocale(LC_ALL, "rus");
    std::cout << "Введите предложение \n";
    char str[1000];
    gets_s(str);
    RemoveWords(str);
    puts(str);
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
