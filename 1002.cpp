/*
读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int k, a;
    a = str.length();
    char pingyin[10][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    int i = 0, j = 0, num = 0, index[100];
    for (k = 0; k < a; k++)
    {
        num += str[k] - '0';
    }
    for (i = 0; i < 100; i++)
    {
        index[i] = -1;
    }
    while (num != 0)
    {
        index[j] = num % 10;
        num /= 10;
        j++;
    }
    for (i = 99; i >= 0; i--)
    {
        if (index[i] != -1)
        {
            if (i == 0)
                cout << pingyin[index[i]];
            else
                cout << pingyin[index[i]] << " ";
        }
    }
    return 0;
}