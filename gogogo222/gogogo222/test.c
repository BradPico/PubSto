#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
////////
////////int main()
////////{
////////	//�ַ�����
////////	char ch = 'a';
////////	//����
////////	int age = 20;
////////	//������
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
//	//sizeof - �ؼ��� - ������ - �������ͻ��߱�����ռ�ռ�Ĵ�С - ��λ byte  �ֽ�
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
//%d - ����
//%f - float��

//ȫ�ֱ��� {}�ⲿ�����
//int a = 100;   
//int main()
//{
//	//�ֲ����� {}�ڲ������
//	//���ֲ���ȫ�ֱ������ֳ�ͻʱ���ֲ�����
//	int a = 10;
//	printf("%d\n", a);
//
//	return 0;
//}

//����10�������������������
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

//���100-200�������
//����������1�������⣬���ܱ�������Ȼ����������Ȼ��
//������n��2��sqrt(n)֮�������������޷���������nΪ����
//int main()
//{
//	int x, y, i;
//	for (x = 100; x < 201; x++)
//	{
//		for (y = 2; y < sqrt(x) + 1; y++)
//			if (x % y != 0)//��2��sqrt(x)��Χ�ڴ���һ������������ʱ����ֹѭ����x++
//				continue;
//			else
//				break;
//		if(y >= sqrt(x))//ѭ������������ʱy>sqrt(x),��xΪ����
//			printf("%d ", x);
//		 
//	}
//	return 0;
//}


//����˷��ھ���
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


//���1000-2000���е�����
//���꣺4�ı����Ҳ���100�ı�����400�ı���
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


//�����������ͱ�����ֵ
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


//����������ʱ����������������������
//int main()
//{
//	int a = 1, b = 2;
//	//����1����������
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//
//	//����2��λ���㣬ͨ���������ɽ�����һ��������һ��������ֵ�������2�Σ�ֵ����
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//
//	printf("a=%d,b=%d", a, b);
//		
//	return 0;
//}

//��3�������Ӵ�С��˳�����
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

//��2���������Լ��
//int main()
//{
//	int x = 100, y = 75;
//	int i;
//	if (x < y)
//		i = x;
//	for (i = x; i > 0; i--)
//		if (x % i == 0 && y % i == 0)
//		{
//			printf("x,y�����Լ��Ϊ%d\n", i);
//			break;
//		}
//	return 0;
//}

//2�������Լ���󷨣�շת�����
//int main()
//{
//	int m, n;
//	int t;
//	printf("����2������");
//	scanf("%d%d", &m, &n);
//	while (t = m % n != 0)
//	{
//		t = m % n;
//		m = n;
//		n = t;
//	}
//	printf("���Լ����%d", n);
//	return 0;
//}


//������A������B�����ݽ���
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

//����1/1-1/2+1/3-1/4����+1/99-1/100��ֵ
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
   
//�� * ��ӡ������
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

//���100~999�����е�ˮ�ɻ����������
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

//��Sn = a+aa+aaa+aaaa+aaaaa ǰ����ĺ�
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
 
//��ɲ�������Ϸ
//int main()
//{
//	int right = 222;
//	int ans = 0;
//	printf("��������Ϸ\n");
//	printf("��������Ĵ𰸣�");
//	while (ans != right)
//	{
//		scanf("%d", &ans);
//		printf("\n");
//		if (ans > right)
//		{
//			printf("̫������\n");
//		}
//		else if(ans < right)
//		{
//			printf("̫С����\n");
//		}
//		else
//			break;
//		printf("���ٴ�������Ĵ𰸣�");
//			
//	}
//	printf("���������ȷ�𰸾���%d", right);
//
//	return 0;
//}

//���������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ�������-1��ʹ���۰���ҷ�
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,11,13,15,17,19 };
//	int tar;
//	int min = 0, max = 9, med = 0;
//	printf("������������ҵ�����");
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

//ģ�������������볡��
//1��ʹ��getch��ȡ������ַ��������ڲ���̨����ʾ����ȡ���ڲ���̨���*
//2������ʱ�Իس�\r��Ϊ��������������ѭ��������\r�滻Ϊ\0����ʾ�ַ���������־
//int main()
//{
//	char pass[] = "abc123";
//	char input[100];
//	for (int i = 0,m = 1; i <= 100; i++)
//	{
//		//printf("���������룺");
//		//scanf("%s", &input);
//		//printf("%s", input);
//		input[i] = getch();
//		if (input[i] == '\r')
//		{
//			input[i] = '\0';
//			if (strcmp(pass, input) == 0)
//			{
//				printf("������ȷ");
//				break;
//			}
//			else if (m >= 3)
//			{
//				printf("������󣬴���3��\n");
//				break;
//			}
//			else
//			{
//				printf("���������������\n");
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

//����һ�����飬ʹ�ú���init(����ʼ����empty()��գ�reverse����Ԫ������
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

//ʵ��һ���������ж�һ�����ǲ�������
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
//		printf("%d������\n", a);
//	else
//		printf("%d��������\n", a);
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

//дһ����������Ϸ
//1���Զ�����һ��1-100֮��������
//2��������
//  a���¶��ˣ���Ϸ����
//  b���´��ˣ��������´��˻��ǲ�С�ˣ������£�֪���¶�Ϊֹ
//3����Ϸ����һֱ�棬�����˳���Ϸ

//void menu()
//{
//	printf("*****************************\n");
//	printf("********    1.play   ********\n");
//	printf("********    0.exit   ********\n");
//	printf("*****************************\n");
//}
//void game()
//{
//	//��������Ϸʵ��
//	//1�����������
//	int ret = rand() % 100 + 1;  //ʹ��rand()��������һ�������
//	
//	//2��������
//	int ans;
//	while(1)
//	{
//		printf("�������: ");
//		scanf("%d", &ans);
//		if (ans == ret)
//		{
//			printf("��ϲ��¶��ˣ��𰸾���%d\n", ret);
//			break;
//		}
//		else if (ans > ret)
//		{
//			printf("�´��ˣ�\n");
//		}
//		else
//		{
//			printf("��С�ˣ�\n");
//		}
//	} 
//}
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();//��ӡ�˵�
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}


//�ػ����� 
// shutdown -s -t 120   //120s��ػ�
// shutdown -a    // ȡ���ػ�
// ʹ��system ("   "); ִ��ϵͳ����
// goto���һ������²�ʹ�ã�������ѭ��������

//int main()
//{
//	char input[20] = { 0 };
//
//	system("shutdown -s -t 120");
//
//again:
//	printf("��ע�⣬��ĵ��Լ����ػ���������룺������ţ���ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "�������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//ʹ�ú�����������������ֵ
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
//	printf("����ǰ%d,%d\n", a, b);
//	change(&a, &b);
//	printf("������%d,%d\n", a, b);
//	return 0;
//}

//ʹ�õݹ鷽������һ�����ִӵ�һλ��������һλ
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


//��д��������������ʱ�����������ַ�������
//int my_strlen(char* str) // ��������ʱ�����ķ���
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str) // �ݹ鷽��
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

//ʹ�õݹ�ķ�������n�Ľ׳�
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

//ʹ�õݹ����n��쳲���������Ч�ʺܵͣ�
//int Fib(int n)  //�ݹ�
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

//������̨�׵����⣬һ������1��2����n��̨���ж���������
//��1�ף�1
//��2�ף�2
//��3�ף�3
//��4�ף�5
//��n-2�ף�jump(n-2)
//��n-1�ף�jump��n-1)
//��n�ף� ��n-1�׺�n-2������n�ף���ֻ��һ����������jump(n) = jump(n-1)+jump(n-2);
//��������̨���������Ϊ����쳲�������������
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

int main()
{
	pritnf("��һ���ύ");
	printf("�ڶ����ύ");

	return 0;
}