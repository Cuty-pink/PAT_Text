/*
读入 n（>0）名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。
输入样例：
3
Joe Math990112 89
Mike CS991301 100
Mary EE990830 95
输出样例：
Mike CS991301
Joe Math990112
*/
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
struct student
{
    string name;
    string number;
    int score;
};
int main()
{
    int n;
    cin >> n;
    struct student data[10];
    for (int i = 1; i <= n; i++)
    {
        cin >> data[i].name >> data[i].number >> data[i].score;
    }
    int x, y, max, min;
    x = data[1].score;
    y = data[1].score;
    max = 1;
    min = 1;
    for (int i = 1; i < n; i++)
    {
        if (x <= data[i + 1].score)
        {
            x = data[i + 1].score;
            max = i + 1;
        }
        if (y > data[i + 1].score)
        {
            y = data[i + 1].score;
            min = i + 1;
        }
    }
    cout << data[max].name << " " << data[max].number << endl;
    cout << data[min].name << " " << data[min].number << endl;
    return 0;
}

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// struct Student
// {
// 	string name;
// 	string num;
// 	int score;
// };
// bool cmp(Student a,Student b)
// {
//     return a.score>b.score;
// }
// int main()
// {
// 	int n;
// 	cin>>n;
// 	vector< Student> a;
// 	for(int i=0;i<n;i++)
// 	{
// 		Student stu1;
// 		cin>>stu1.name>>stu1.num>>stu1.score;
// 		a.push_back(stu1);
// 	}
// 	sort(a.begin(),a.end(),cmp);
// 	cout<<a[0].name<<" "<<a[0].num<<endl;
// 	cout<<a[n-1].name<<" "<<a[n-1].num<<endl;
// 	return 0;
// }
