/*
“答案正确”是自动判题系统给出的最令人欢喜的回复。本题属于 PAT 的“答案正确”大派送 —— 只要读入的字符串满足下列条件，系统就输出“答案正确”，否则输出“答案错误”。

得到“答案正确”的条件是：

    字符串中必须仅有 P、 A、 T这三种字符，不可以包含其它字符；
    任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
    如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a、 b、 c 均或者是空字符串，或者是仅由字母 A 组成的字符串。

现在就请你为 PAT 写一个自动裁判程序，判定哪些字符串是可以获得“答案正确”的。

代码中检验的几点是：
1.包含每个字符必须是PAT中的一个
2.P在T前面
3.P和T个数为1，A至少1个
4.n3=n1*n2且n2!=0
*/
#include <iostream>
#include <string>
using namespace std;
bool judge(string str)
{
    int count_p = 0, count_a = 0, count_t = 0;
    int number1 = 0, number2 = 0, number3 = 0;
    int position_p = 0, position_a = 0, position_t = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != 'P' && str[i] != 'A' && str[i] != 'T')
        {
            return false;
        }
        if (str[i] == 'P')
            count_p++;
        if (str[i] == 'T')
            count_t++;
        if (str[i] == 'A')
            count_a++;
    }
    if (count_p != 1 || count_t != 1 || count_a < 1)
        return false;
    position_p = str.find('P');
    position_t = str.find('T');
    if (position_p >= position_t)
        return false;
    for (int i = 0; i < str.length(); i++)
    {
        if (i < position_p && str[i] == 'A')
            number1++;
        else if (i > position_p && i < position_t && str[i] == 'A')
            number2++;
        else if (i > position_t && str[i] == 'A')
            number3++;
    }
    if (number3 != number1 * number2)
        return false;
    if (number2 == 0)
        return false;
}
int main()
{
    int n, i;
    bool flag;
    string str;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> str;
        flag = judge(str);
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}