/*
让我们用字母 B 来表示“百”、字母 S 表示“十”，
用 12...n 来表示不为零的个位数字 n（<10），
换个格式来输出任一个不超过 3 位的正整数。
例如 234 应该被输出为 BBSSS1234，因为它有 2 个“百”、3 个“十”、
以及个位的 4。
*/
#include <iostream>
using namespace std;
int main()
{
    int n, tir, two, one;
    cin >> n;
    tir = (n / 100) % 10;
    two = (n / 10) % 10;
    one = n % 10;
    for (int i = 0; i < tir; i++)
    {
        cout << "B";
    }
    for (int j = 0; j < two; j++)
    {
        cout << "S";
    }
    for (int k = 0; k < one; k++)
    {
        cout << k + 1;
    }
    return 0;
}