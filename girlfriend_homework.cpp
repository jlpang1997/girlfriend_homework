// girlfriend_homework.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<iomanip>
#define MAX_ROW 10
#define MAX_COLONM 10
using namespace std;
void Matrix_Multi(double A[MAX_ROW][MAX_COLONM], double B[MAX_ROW][MAX_COLONM], double result[MAX_ROW][MAX_COLONM],
	int A_row,int A_column, int B_row, int B_column)
{
	if (A_column != B_row)
	{
		cout << "error" << endl;
		return;
	}
	for (int i = 0; i < A_row; i++)
	{
		for (int j = 0; j < B_column; j++)
		{
			double sum = 0;
			for (int k = 0; k < A_column; k++)
			{
				sum += A[i][k] * B[k][j];
			}
			result[i][j] = sum;
		}
	}
}
void Matrix_Add(double A[MAX_ROW][MAX_COLONM], double B[MAX_ROW][MAX_COLONM], double result[MAX_ROW][MAX_COLONM],
	int A_row, int A_column, int B_row, int B_column)
{
	if (A_row!=B_row|| A_column != B_column)
	{
		cout << "error" << endl;
		return;
	}
	for (int i = 0; i < A_row; i++)
	{
		for (int j = 0; j < B_column; j++)
		{
			result[i][j] = A[i][j] + B[i][j];
		}
	}
}



using namespace std;

int main()
{
	double A[MAX_ROW][MAX_COLONM] = {
		{1,2,3},
		{4,5,6}
	};
	double B[MAX_ROW][MAX_COLONM] = {
		{1,2,3,4},
		{4,5,6,7},
		{4,5,6,7},
	};
	double result[MAX_ROW][MAX_COLONM];
	Matrix_Add(A, A, result,2,3,2,3);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout <<setw(3)<< result[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	Matrix_Multi(A, B, result, 2, 3, 3, 4);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << setw(3) << result[i][j] << " ";
		}
		cout << endl;
	}

}



//3.3题
   //double x;
   //cout << "input x=";
   //cin >> x;
   //if (x < 1)
   //	cout << "x=" << x << ",y=" << x;
   //else if(x>=1&&x<10)
   //	cout << "x=" << x << ",y=" <<2*x-11;
   //else
   //	cout << "x=" << x << ",y=" << 3*x-11;
   //return 0;

//3.4
	//int a, b;
	//cout << "请输入两门课的成绩" << endl;
	//cin >> a >> b;
	//if (a < 0 || a>100 || b < 0 || b>100)
	//{
	//	cout << "成绩输入无效，请输入正确的百分制成绩" << endl;
	//	return 0;

	//}
	//int sum = a + b;
	//if (sum >= 180)
	//	cout << sum << "--->A" << endl;
	//else if (sum >= 160)
	//	cout << sum << "--->B" << endl;
	//else if (sum >= 140)
	//	cout << sum << "--->C" << endl;
	//else if (sum >= 120)
	//	cout << sum << "--->D" << endl;
	//else
	//	cout << sum << "--->E" << endl;
	//return 0;

//3.5
	//cout << "请输入年份" << endl;
	//int year;
	//cin >> year;
	//if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	//	cout << year << "是闰年" << endl;
	//else
	//{
	//	cout << year << "不是闰年" << endl;
	//}
	//return 0;
//3.6
	//double money;
	//cout << "请输入购物金额：";
	//cin >> money;

	//这是输出两位小数的方法

	//cout.setf(ios::fixed);


	//if (money < 100)
	//	cout << "不打折,应付 " << setprecision(2) << money << " 元" << endl;
	//else if(money<500)
	//	cout << "9折,应付 " << setprecision(2) <<money<< " 元" << endl;
	//else if(money<1000)
	//	cout << "8折,应付 " << setprecision(2) << money*0.8 << " 元" << endl;
	//else
	//	cout << "5折,应付 " << setprecision(2) << money*0.5 << " 元" << endl;

	//return 0;

//循环部分
//2.3.1 题目这么长，自己回去看，懒得看

//2.32 同上，不会再来问我

//2.3.3
	//int i = 0;
	//int sum = 0;
	//while (i <= 7)
	//{
	//	if (i % 2 == 0)
	//		sum += i;
	//	i++;
	//}
	//cout << "小于等于7的自然数之和为 " << sum;

	//return 0;

//2.3.4  这道题待定  字符串的输入有问题
	//char s[100];
	//cout << "请输入20个字符。" << endl;
	//for (int k = 0; k < 20; k++)
	//{
	//	cin >> s[k];
	//}

	//int alpha_num = 0, blankspace_num = 0, digit_num = 0, other_num = 0;
	////以下我都用for循环，你以后也学着用这种结构，因为看起来很自然
	//for (int i = 0; i<20; i++)
	//{
	//	if ((s[i] >= 'a'&&s[i] <= 'z') || (s[i] >= 'A'&&s[i] <= 'Z'))
	//		alpha_num++;
	//	else if (s[i] == ' ')
	//		blankspace_num++;
	//	else if (s[i] >= '0'&&s[i] <= '9')
	//		digit_num++;
	//	else
	//		other_num++;
	//}
	//cout << "英文字母个数为 " << alpha_num << endl;
	//cout << "空格个数为" << blankspace_num << endl;
	//cout << "数字个数为" << digit_num << endl;
	//cout << "其他字符个数为" << other_num << endl;
	//return 0;


//2.35上面有

	//2.36
//double pi = 0;
//double i, j;
//for ( i = 1,  j = -3; i < 100000; i += 4, j -= 4)
//{
//	pi += 1 / i + 1 / j;
//}
//cout << "pi大约等于 " << pi*4 << endl;
//return 0;

//2.37
//cout << "斐波那契数列前40项如下：" << endl;
//int f1 = 1, f2 = 2;
//cout << f1 << endl;
//cout << f2 << endl;
//for (int i = 2; i <= 40; i++)
//{
//	int tmp = f1 + f2;
//	f1 = f2;
//	f2 = tmp;
//	cout << tmp << endl;
//
//}
//return 0;

//2.38
//int num;
//cout << "请输入一个整数：";
//cin >> num;
//int i;
//for ( i = 2; i < num / 2; i++)
//{
//	if (num%i == 0)
//	{
//		cout << num << "不是素数" << endl;
//		break;
//	}
//}
//if(i>=num/2)
//	cout << num << "是素数" << endl;
//return 0;

//2.39
//for (int num = 100; num < 1000; num++)
//{
//	int init_num = num;
//	int lifanghe = 0;
//	while (num > 0)
//	{
//		int tmp = num % 10;
//		num = num/10;
//		lifanghe += tmp * tmp*tmp;
//	}
//	num = init_num;
//	if (lifanghe == num)
//		cout << num << "是水仙花数" << endl;
//
//}
//return 0;
//2.3.10
//double a;
//cout << "请输入一个数：";
//cin >> a;
//double x1 = 1;
//double x2;
//do {
//	x2 = x1;
//	x1 = (x2 + a / x2) / 2;
//} while (fabs(x2 - x1)>0.00001);
//cout << a << "的平方根是：" << x2 << endl;
//return 0;

