#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
////////
////////int main()
////////{
////////	//字符类型
////////	char ch = 'a';
////////	//整型
////////	int age = 20;
////////	//短整型
////////	short num = 10;
////////	//long   
////////	//long long 
////////	
////////
////////}

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(int));
//	//sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间的大小 - 单位 byte  字节
//	return 0;
//
//}
//
//int main()
//{
//	int age = 30;
//	float weight = 83.3;
//	
//	weight = weight - 10;
//
//	age++;
//	printf("%d\n", age);
//	printf("%f\n", weight);
//
//	return 0;
//}
//%d - 整型
//%f - float型

//全局变量 {}外部定义的
//int a = 100;   
//int main()
//{
//	//局部变量 {}内部定义的
//	//当局部与全局变量名字冲突时，局部优先
//	int a = 10;
//	printf("%d\n", a);
//
//	return 0;
//}

//输入10个数，输出其中最大的数
//int main()
//{
//	int i = 0;
//	int max = 0;
//	int arr[10];
//	
//	for(i = 0;i < 10; i++)
//		scanf("%d",&arr[i]);
//
//	for (i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//
//	printf("%d ",max);
//	
//	return 0;
//}

//输出100-200间的素数
//素数：除了1且自身外，不能被其他自然数整除的自然数
//正整数n，2到sqrt(n)之间所有整数都无法整除，则n为素数
//int main()
//{
//	int x, y, i;
//	for (x = 100; x < 201; x++)
//	{
//		for (y = 2; y < sqrt(x) + 1; y++)
//			if (x % y != 0)//在2到sqrt(x)范围内存在一个能整除的数时，终止循环，x++
//				continue;
//			else
//				break;
//		if(y >= sqrt(x))//循环结束后，若此时y>sqrt(x),则x为素数
//			printf("%d ", x);
//		 
//	}
//	return 0;
//}


//输出乘法口诀表
//int main()
//{
//	int x, y, i;
//	
//	for (x = 1; x < 10; x++)
//	{
//		for (y = 1; y <= x; y++)
//		{
//			i = x * y;
//			printf("%d*%d=%d  ", y, x, i);
//		}
//		printf("\n");
//	}
//		return 0;
//}


//输出1000-2000年中的闰年
//闰年：4的倍数且不是100的倍数；400的倍数
//int main()
//{
//	int x, y, i;
//	for (x = 1000; x <= 2000; x++)
//	{
//		if ((x % 4 == 0) && (x % 100 != 0))
//			printf("%d  ", x);
//		else if(x % 400 == 0)
//			printf("%d  ", x);
//		
//	}
//	return 0;
//}


//交换连个整型变量的值
//int main()
//{
//	int x = 1, y = 2, z ;
//	z = x;
//	x = y;
//	y = z;
//	printf("x=%d,y=%d", x, y);
//	
//	return 0;
//}


//不允许创建临时变量，交换两个数的内容
//int main()
//{
//	int a = 1, b = 2;
//	//方法1：算数运算
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//
//	//方法2：位运算，通过“异或”完成交换，一个数与另一个给定的值连续异或2次，值不变
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//
//	printf("a=%d,b=%d", a, b);
//		
//	return 0;
//}

//将3个数按从大到小的顺序输出
//int main()
//{
//	int a = 3, b = 6, c = 9;
//	int max, min, med;
//
//	if (a > b && a > c)
//		max = a;
//	else if (b > a && b > c)
//		max = b;
//	else
//		max = c;
//	if (a < b && a < c)
//		min = a;
//	else if (b < a && b < c)
//		min = b;
//	else
//		min = c;
//	if (max != a && min != a)
//		med = a;
//	else if (max != b && min != b)
//		med = b;
//	else
//		med = c;
//
//	printf("%d %d %d", max, med, min);
//	
//	return 0;
//	
//}

//求2个数的最大公约数
//int main()
//{
//	int x = 100, y = 75;
//	int i;
//	if (x < y)
//		i = x;
//	for (i = x; i > 0; i--)
//		if (x % i == 0 && y % i == 0)
//		{
//			printf("x,y的最大公约数为%d\n", i);
//			break;
//		}
//	return 0;
//}

//2个数最大公约数求法，辗转相除法
//int main()
//{
//	int m, n;
//	int t;
//	printf("输入2个数：");
//	scanf("%d%d", &m, &n);
//	while (t = m % n != 0)
//	{
//		t = m % n;
//		m = n;
//		n = t;
//	}
//	printf("最大公约数是%d", n);
//	return 0;
//}


//将数组A与数组B中内容交换
//int main()
//{
//	int A[5] = {0,1,2,3, 4};
//	int B[5] = { 5, 6, 7, 8, 9 };
//	
//	for (int i = 0; i < sizeof(A)/4; i++)
//	{
//		A[i] = A[i] ^ B[i];
//		B[i] = A[i] ^ B[i];
//		A[i] = A[i] ^ B[i];
//	}
//	for (int i = 0; i < sizeof(A)/4; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < sizeof(A) / 4; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	return 0;
//
//}

//计算1/1-1/2+1/3-1/4……+1/99-1/100的值
//int main()
//{
//	double a = 0, b = 0, c = 0;
//	for (double i = 1; i < 100;i=i+2)
//	{
//		a = a + 1 / i;
//		b = b + 1 / (i + 1);
//	}
//	c = a - b;
//	printf("%f\n", c);
//	
//	return 0;
//}
   
//用 * 打印出菱形
//int main()
//{
//	for (int i = 1; i <=7; i++)
//	{
//		
//		for (int m = 7-i; m >=0; m--)
//		{
//			printf(" ");
//		}
//		for (int n = 1; n <= 2 * i - 1; n++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 6; i > 0; i--)
//	{
//		for (int m = 7 - i; m >= 0; m--)
//		{
//			printf(" ");
//		}
//		for (int n = 1; n <= 2 * i - 1; n++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//求出100~999中所有的水仙花数，并输出
//int main()
//{
//	int b, c, d, f;
//	for (int i = 100; i < 1000; i++)
//	{
//		b = i / 100;
//		c = i % 100 / 10;
//		d = i % 100 % 10;
//		if(i == b*b*b+c*c*c+d*d*d)
//			printf("%d ", i);
//	}
//	
//	return 0;
//
//}

//求Sn = a+aa+aaa+aaaa+aaaaa 前五项的和
//int main()
//{
//	int a;
//	int Sn = 0;
//	int b=0;
//	scanf("%d", &a);
//	for (int i = 0; i < 5; i++)
//	{
//		b = 10 * b + a;
//		Sn = Sn + b;
//		printf("%d ", b);
//	}
//	return 0;
//}
 
//完成猜数字游戏
//int main()
//{
//	int right = 222;
//	int ans = 0;
//	printf("猜数字游戏\n");
//	printf("请输入你的答案：");
//	while (ans != right)
//	{
//		scanf("%d", &ans);
//		printf("\n");
//		if (ans > right)
//		{
//			printf("太大啦！\n");
//		}
//		else if(ans < right)
//		{
//			printf("太小啦！\n");
//		}
//		else
//			break;
//		printf("请再次输入你的答案：");
//			
//	}
//	printf("答对啦！正确答案就是%d", right);
//
//	return 0;
//}

//在整型有序数组中查找想要的数字，找到了返回下标，找不到返回-1，使用折半查找法
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,11,13,15,17,19 };
//	int tar;
//	int min = 0, max = 9, med = 0;
//	printf("请输入你想查找的数：");
//	scanf("%d", &tar);
//	printf("\n");
//	for (med = (max+min)/2;min<=max;  )
//	{
//		if (arr[med] == tar)
//		{
//			printf("%d", med);
//			break;
//		}
//		else if (arr[med] > tar)
//		{
//			max = med-1;
//			med = (max + min) / 2;
//
//		}
//		else if (arr[med] < tar)
//		{
//			min = med+1;
//			med = (max + min) / 2;
//		}
//				
//	}
//	if(min>max)
//		printf("-1");
//
//	return 0;
//}

//模拟三次密码输入场景
//1、使用getch读取输入的字符，不会在操作台上显示，读取后在操作台输出*
//2、输入时以回车\r视为结束，跳出输入循环，并把\r替换为\0，表示字符串结束标志
//int main()
//{
//	char pass[] = "abc123";
//	char input[100];
//	for (int i = 0,m = 1; i <= 100; i++)
//	{
//		//printf("请输入密码：");
//		//scanf("%s", &input);
//		//printf("%s", input);
//		input[i] = getch();
//		if (input[i] == '\r')
//		{
//			input[i] = '\0';
//			if (strcmp(pass, input) == 0)
//			{
//				printf("密码正确");
//				break;
//			}
//			else if (m >= 3)
//			{
//				printf("密码错误，错误3次\n");
//				break;
//			}
//			else
//			{
//				printf("密码错误，重新输入\n");
//				i = -1;
//				m++;
//			}
//						
//		}
//		else
//			printf("*");
//	}
//		
//	return 0;
//
//}

//创建一个数组，使用函数init(）初始化，empty()清空，reverse（）元素逆置
//int init(int *p)
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	return 0;
//}
//int empty(int *p)
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = 0;
//	}
//	return 0;
//}
//
//int reverse(int* p)
//{
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		*(p + i) = *(p + i) ^ *(p + 4 - i);
//		*(p + 4 - i) = *(p + i) ^ *(p + 4 - i);
//		*(p + i) = *(p + i) ^ *(p + 4 - i);
//	}
//	return 0;
//}
//
//int output(int *p)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int arr[5];
//	init(&arr[0]);
//	output(&arr[0]);
//	reverse(&arr[0]);
//	output(&arr[0]);
//	empty(&arr[0]);
//	output(&arr[0]);
//
//	return 0;
//}

//实现一个函数，判断一个数是不是素数
//int sushu(int a)
//{
//	int i = 2;
//	int b = sqrt(a);
//	for (i = 2; i < b+1 ; i++)
//	{
//		if (a % i == 0)
//		{
//			break;
//		}
//	}
//	if (i > sqrt(a))
//		printf("%d是素数\n", a);
//	else
//		printf("%d不是素数\n", a);
//
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	sushu(n);
//	
//	return 0;
//}

//写一个猜数字游戏
//1、自动产生一个1-100之间的随机数
//2、猜数字
//  a、猜对了，游戏结束
//  b、猜错了，会告诉你猜大了还是猜小了，继续猜，知道猜对为止
//3、游戏可以一直玩，除非退出游戏

//void menu()
//{
//	printf("*****************************\n");
//	printf("********    1.play   ********\n");
//	printf("********    0.exit   ********\n");
//	printf("*****************************\n");
//}
//void game()
//{
//	//猜数字游戏实现
//	//1、生成随机数
//	int ret = rand() % 100 + 1;  //使用rand()函数生成一个随机数
//	
//	//2、猜数字
//	int ans;
//	while(1)
//	{
//		printf("请猜数字: ");
//		scanf("%d", &ans);
//		if (ans == ret)
//		{
//			printf("恭喜你猜对了，答案就是%d\n", ret);
//			break;
//		}
//		else if (ans > ret)
//		{
//			printf("猜大了！\n");
//		}
//		else
//		{
//			printf("猜小了！\n");
//		}
//	} 
//}
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();//打印菜单
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}


//关机程序 
// shutdown -s -t 120   //120s后关机
// shutdown -a    // 取消关机
// 使用system ("   "); 执行系统命令
// goto语句一般情况下不使用，可以用循环语句替代

//int main()
//{
//	char input[20] = { 0 };
//
//	system("shutdown -s -t 120");
//
//again:
//	printf("请注意，你的电脑即将关机，如果输入：我是天才，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是天才") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//使用函数交换两个变量的值
//void change(int* pa, int* pb)
//{
//	int z = *pa;
//	*pa = *pb;
//	*pb = z;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前%d,%d\n", a, b);
//	change(&a, &b);
//	printf("交换后%d,%d\n", a, b);
//	return 0;
//}

//使用递归方法，将一个数字从第一位输出到最后一位
//void print(int num)
//{
//	
//	if (num >9)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num % 10);
//
//}
//
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	print(num);
//	
//	return 0;
//}


//编写函数不允许创建临时变量，计算字符串长度
//int my_strlen(char* str) // 创建了临时变量的方法
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str) // 递归方法
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "BradPico";
//
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//使用递归的方法计算n的阶乘
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", Fac(n));
//	return 0;
//}

//使用递归求第n个斐波那契数（效率很低）
//int Fib(int n)  //递归
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", Fib(n));
//	return 0;
//}

//青蛙跳台阶的问题，一次能跳1或2，到n个台阶有多少种跳法
//第1阶：1
//第2阶：2
//第3阶：3
//第4阶：5
//第n-2阶：jump(n-2)
//第n-1阶：jump（n-1)
//第n阶： 从n-1阶和n-2阶跳到n阶，各只有一种跳法，则jump(n) = jump(n-1)+jump(n-2);
//则青蛙跳台阶问题抽象为类似斐波拉契数列问题
//int jump(int n)
//{
//	//if (n <= 2)
//	//	return n;
//	//else
//	//	return jump(n - 1) + jump(n - 2);
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 1)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", jump(n));
//	return 0;
//}


//#include "add.h"
//int main()
//{
//	int n;
//	int m;
//	scanf("%d%d", &n, &m);
//	printf("%d\n",add(n, m));
//
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	pritnf("第一次提交");
//	printf("第二次提交");
//	printf("第三次提交");
//	
//	printf("%d", a);
//
//	return 0;
//}

//汉诺塔问题
//三根柱子使用 A B C 代表
//问题简化为：3步，  1：把n-1个盘子从A移到B，借助C柱
//				 	 2：把第n个盘子从A移到C
//					 3：把n-1个盘子从B移到C，借助A柱
//第1步与第3步实际上一样，只不过位置不一样，因此move函数形参中move(n,one,two,three),
//one代表起始柱，two代表借助柱，three代表目的柱
//void step(char from	,char to)
//{
//	printf("%c --> %c\n", from, to);
//}
//void move(int n, char one, char two, char three)//把n个盘子从one借助two移到three
//{
//	if (n == 1)
//	{
//		step(one, three);
//	}
//	else
//	{
//		move(n - 1, one, three, two);//第一步，n-1个盘从A->B,借助C
//		step(one, three);            //第二步：第n个从A->C
//		move(n - 1, two, one, three);//第三步：n-1个盘从B->C,借助A
//	}
//	return 0;
//}
//int main()
//{
//	int m;
//	
//	printf("请输入A柱上盘子数量：");
//	scanf("%d", &m);
//	move(m,'A','B','C');
//
//	return 0;
//}

//使用递归实现n^k
//int mi(int n, int k)
//{
//	//int a;
//	if (k == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n * mi(n, k - 1);
//	}
//}
//int main()
//{
//	int n;
//	int k;
//	scanf("%d%d", &n, &k);
//	printf("%d", mi(n, k));
//	return 0;
//}

//写一个递归函数DigitSum(n),输入一个非负整数，返回组成它的数字之和

//int DigitSum(int n)
//{
//	if (n > 9)
//	{	
//		return n % 10 + DigitSum(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", DigitSum(n));
//	return 0;
//}

//编写一个函数reverse_string(cha* string),递归实现将字符串反向排列
//思路：计算出字符串有多少个字符，n
//      1、将第1个字符放入temp
//		2、将第n个字符放入*string
//		3、将第n个字符位置填入'\0’（便于进行递归时，从string+1位置查询到n-1位置）
//		4、将temp的字符放入第n个字符位置
//int my_strlen(char* string)
//{
//	int count=0;
//	while (*string != '\0')
//	{
//		string++;
//		count++;
//	}
//	return count;
//}
//void reverse_string(char* string)
//{
//	int count;
//	char temp;
//	count = my_strlen(string);
//	if (count > 1)
//	{
//		temp = *string;
//		*string = *(string + count - 1);
//		*(string + count - 1) = '\0';
//		reverse_string(string + 1);
//		*(string + count - 1) = temp;
//	}
//	return 0;
//
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

//使用递归实现strlen
//
//int my_strlen(char* string)
//{
//	int count=1;
//	if (*string != '\0')
//	{
//		return count + my_strlen(string + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "a1b2c3d4e5";
//	printf("%d", my_strlen(arr));
//}

//递归实现n的阶乘
//int smuti(int n)
//{
//	if (n>1)
//	{
//		return n * smuti(n - 1);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", smuti(n));
//	
//	return 0;
//}

//递归方式实现打印一个整数的每一位
//void pr(int n)
//{
//	if (n > 9)
//	{
//		pr(n / 10);
//		printf("%d ", n % 10);
//	}
//	else
//		printf("%d ", n);
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	pr(n);
//	return 0;
//}


//冒泡排序法
//void bubble_sort(int* arr, int n)
//{
//	int temp;
//	for (int i = n-1; i > 0; i--)
//	{
//		for (int m = 0; m < i; m++)
//		{
//			if (*(arr + m) > *(arr + m + 1))
//			{
//				temp = *(arr + m);
//				*(arr + m) = *(arr + m + 1);
//				*(arr + m + 1) = temp;
//			}		      
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//写一个函数返回参数二进制中1的个数

//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((value >> i & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int value = 0;
//	printf("请输入一个数，计算其二进制有多少个1：");
//	scanf("%d", &value);
//	printf("%d\n", count_one_bits(value));
//
//	return 0;
//}

//获取一个二进制序列中所有的偶数位和奇数位，分别输出二进制序列
//int main()
//{
//	int n;
//	printf("请输入一个数：");
//	scanf("%d", &n);
//	printf("偶数位为：");
//	for (int i = 1; i < 32; i = i + 2)
//	{
//		printf("%d", n >> (31-i) & 1);
//	}
//	printf("\n");
//	printf("奇数位为：");
//	for (int i = 0; i < 32; i = i + 2)
//	{
//		printf("%d", n >> (31- i) & 1);
//	}
//	printf("\n");
//	return 0;
//}

//输出一个整数的每一位
//int evebit(int n)
//{
//	if (n > 9)
//	{
//		evebit(n / 10);
//		printf("%d ", n % 10);
//	}
//	else
//		printf("%d ", n);
//	return n;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	evebit(n);
//
//	return 0;
//}

//两个int整数m和n的二进制表达式中，有多少个位不同
//int main()
//{
//	int n;
//	int m;
//	int count = 0;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < 32; i++)
//	{
//		if ((m & (1 << i)) != (n & (1 << i)))
//		{
//			count++;
//		}
//	}
//	printf("n与m不同的位的个数：%d", count);
//	return 0;
//}

//struct book
//{
//	char name[20];
//	char id[20];
//	int  price;
//};
//
//int main()
//{
//	struct book b = { "c语言","C20220802",55 };
//	printf("书名：%s\n", b.name);
//	printf("书号：%s\n", b.id);
//	printf("价格：%d\n", b.price);
//
//	return 0;
//}

//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//
//	printf("%d\n", **ppa);
//	printf("%p\n", *pa);
//	printf("%d\n", *pa);
//	return 0;
//}

//结构体
//struct b
//{
//	char c;
//	short s;
//	double d;
//
//};
//struct stu
//{
//	struct b sb;
//	char name[20];
//	int age;
//	char id[20];
//
//}s1;
//void print(struct stu* sp)
//{
//	printf("%c %d %lf %s %d %s \n", sp->sb.c, sp->sb.s, sp->sb.d, sp->name, sp->age, sp->id);
//
//}
//int main()
//{
//	struct stu s1 = { {'w', 31 , 3.14},"布拉德皮超",31,"220804" };
//
//	printf("%c %d %lf %s %d %s \n", s1.sb.c, s1.sb.s, s1.sb.d, s1.name,s1.age, s1.id);
//	print(&s1);//  结构体函数传参，要传结构体指针！！，直接传结构体参数，压栈会影响运行效率
//	return 0;
//
//}


//实现 strcpy 函数
#include <assert.h>

//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		
//	}
//
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxxx";
//	char arr2[] = "hello";
//	
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}


//strlen求字符串长度，实现my_strlen

//unsigned int my_strlen(const char* target)
//{
//	assert(target != NULL);
//	unsigned int count = 0;
//	while (*target++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello world!";
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//计算一个数二进制中有多少个1，负数计算补码

//int NumberOf1_1(unsigned int d)
//{
//	int count = 0;
//	while (d)
//	{
//		if (1 == d % 2)
//		{
//			count++;
//		}
//		d /= 2;
//	}
//	return count;
//}
//
//int NumberOf1_2(unsigned int d)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (1 == ((d >> i) & 1))
//			count++;
//	}
//	return count;
//}
//
//int NumberOf1_3(unsigned int d)
//{
//	int count = 0;
//	while (d)
//	{
//		d = (d & (d - 1));
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = -1;
//	
//	printf("ret1_1 = %d\n", NumberOf1_1(n));
//	printf("ret1_2 = %d\n", NumberOf1_2(n));
//	printf("ret1_3 = %d\n", NumberOf1_3(n));
//
//	return 0;
//
//}

//复制部分字符串,将一个字符串从第m个字符开始，剩余的全部字符复制成另一个字符串，并输出
//int main()
//{
//	char str[30] = { 0 };
//    int m = 0;
//    scanf("%s", str);
//    int i = 0;
//    while (str[i])
//    {
//        i++;
//    }
//    scanf("%d", &m);
//    char newstr[30] = { 0 };
//    char* strp = &str[0];
//    char* newstrp = &newstr[0];
//    for (int j = m - 1; j <= i; j++)
//    {
//        *newstrp = *(str + j);
//        newstrp++;
//
//    }
//    printf("%s", newstr);
//
//	return 0;
//}

//实现 int cal(int* array,int n) 函数，求出长度为n的数组的和
//
//int cal(int* array, int n)
//{
//    int sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        sum = sum + array[i];
//    }
//    return sum;
//}
//
//int main()
//{
//    int n = 0;
//    int arr[30] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    printf("%d\n", cal(arr, n));
//
//    return 0;
//}


//对一个长度为n的数组排序
//void sort(int* array, int n)
//{
//    int m = 0;
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = 0; j < n - i - 1; j++)
//        {
//            if (*(array + j) > *(array + j + 1))
//            {
//                m = *(array + j);
//                *(array + j) = *(array + j + 1);
//                *(array + j + 1) = m;
//            }
//        }
//    }
//}
//
//int main()
//{
//    int n = 0;
//    int arr[100] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    sort(arr, n);
//    for (int i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//
//}

//获取字符串长度，使用指针实现
//int main() {
//
//    char str[100] = { 0 };
//
//    scanf("%s", &str);
//    int count = 0;
//    char* strp = &str[0];
//    while (*strp)
//    {
//        count++;
//        strp++;
//    }
//    printf("%d\n", count);
//    return 0;
//}

//使用指针方式交换两数
//int main() 
//{
//
//    int m, n;
//    scanf("%d%d", &m, &n);
//    int* mp = &m;
//    int* np = &n;
//    *mp = *mp ^ *np;
//    *np = *mp ^ *np;
//    *mp = *mp ^ *np;
//    printf("%d %d",m,n);
// 
//
//    return 0;
//}

//使用指针遍历数组
//int main() {
//
//    int arr[6] = { 0 };
//    int* ptr = arr;
//
//    int len = sizeof(arr) / sizeof(int);
//    
//    for (int i = 0; i < len; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//
//    for (int i = 0; i < len; i++)
//    {
//        printf("%d ", *(ptr + i));
//
//    }
//
//    return 0;
//}

//写代码判断当期机器的字节序

//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//输入日期函数“日/月/年”格式，输出“日/月/年”

//struct TDate
//{
//    int Month;
//    int Day;
//    int Year;
//};
//int main()
//{
//    struct TDate Date = { 0 , 0, 0 };
//    scanf("%d %d %d", &Date.Year, &Date.Month, &Date.Day);
//    printf("%d/%d/%d", Date.Day, Date.Month, Date.Year);
//
//    return 0;
//}

//打印菱形
//思路：1、先打印上半部分， n/2+1 以内的是上半部分的
//      2、上半部分每一行打印， n-( 2*i-1)个空格，分在两边即可区分一行中打印*与打印 空格的位置
//      3、下半部分行即是将 1~n/2行的内容反过来输出
//int main()
//{
//	char a = '*';
//	int n = 9;
//
//	for (int i = 1; i <= (n / 2 + 1); i++)   //打印上半部分内容
//	{
//		for (int j = 1; j < n+1; j++)
//		{
//			if ((j < (n - (2 * i - 1 ))/ 2 + 1 )||( j > (n + 2 * i - 1) / 2))
//			{
//				printf(" ");
//			}
//			else
//			{
//				printf("%c", a);
//			}
//		}
//		printf("\n");
//	}
//	for (int i = n / 2; i > 0 ; i--)  // 将上半部分1~n/2行的内容按相反顺序输出
//	{
//		for (int j = 1; j < n + 1; j++)
//		{
//			if ((j < (n - (2 * i - 1)) / 2 + 1) || (j > (n + 2 * i - 1) / 2))
//			{
//				printf(" ");
//			}
//			else
//			{
//				printf("%c", a);
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//    int ID = 0;
//    float s1 = 0;
//    float s2 = 0;
//    float s3 = 0;
//    printf("输入学号：");
//    scanf("%d", &ID);
//
//    scanf("%f %f %f",&s1, &s2, &s3);
//
//    printf("The each subject score of NO. %d is %.2f, %.2f, %.2f", ID, s1, s2, s3);
//
//    return 0;
//}

//int main()
//{
//	int a = 0;
//	while ((a = getchar()) != EOF)
//	{
//		//a = getchar();
//		getchar();
//		printf("%c\n", a + 32);
//	}	
//	return 0;
//}

//int main()
//{
//    int n = 0xABCDEF;
//    printf("%15d", n);
//    return 0;
//}

int main()
{
    int a = 1234;
    printf("%#o,%#X", a, a);
    return 0;
}