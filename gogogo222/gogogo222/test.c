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

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	pritnf("��һ���ύ");
//	printf("�ڶ����ύ");
//	printf("�������ύ");
//	
//	printf("%d", a);
//
//	return 0;
//}

//��ŵ������
//��������ʹ�� A B C ����
//�����Ϊ��3����  1����n-1�����Ӵ�A�Ƶ�B������C��
//				 	 2���ѵ�n�����Ӵ�A�Ƶ�C
//					 3����n-1�����Ӵ�B�Ƶ�C������A��
//��1�����3��ʵ����һ����ֻ����λ�ò�һ�������move�����β���move(n,one,two,three),
//one������ʼ����two�����������three����Ŀ����
//void step(char from	,char to)
//{
//	printf("%c --> %c\n", from, to);
//}
//void move(int n, char one, char two, char three)//��n�����Ӵ�one����two�Ƶ�three
//{
//	if (n == 1)
//	{
//		step(one, three);
//	}
//	else
//	{
//		move(n - 1, one, three, two);//��һ����n-1���̴�A->B,����C
//		step(one, three);            //�ڶ�������n����A->C
//		move(n - 1, two, one, three);//��������n-1���̴�B->C,����A
//	}
//	return 0;
//}
//int main()
//{
//	int m;
//	
//	printf("������A��������������");
//	scanf("%d", &m);
//	move(m,'A','B','C');
//
//	return 0;
//}

//ʹ�õݹ�ʵ��n^k
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

//дһ���ݹ麯��DigitSum(n),����һ���Ǹ����������������������֮��

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

//��дһ������reverse_string(cha* string),�ݹ�ʵ�ֽ��ַ�����������
//˼·��������ַ����ж��ٸ��ַ���n
//      1������1���ַ�����temp
//		2������n���ַ�����*string
//		3������n���ַ�λ������'\0�������ڽ��еݹ�ʱ����string+1λ�ò�ѯ��n-1λ�ã�
//		4����temp���ַ������n���ַ�λ��
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

//ʹ�õݹ�ʵ��strlen
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

//�ݹ�ʵ��n�Ľ׳�
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

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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


//ð������
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

//дһ���������ز�����������1�ĸ���

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
//	printf("������һ������������������ж��ٸ�1��");
//	scanf("%d", &value);
//	printf("%d\n", count_one_bits(value));
//
//	return 0;
//}

//��ȡһ�����������������е�ż��λ������λ���ֱ��������������
//int main()
//{
//	int n;
//	printf("������һ������");
//	scanf("%d", &n);
//	printf("ż��λΪ��");
//	for (int i = 1; i < 32; i = i + 2)
//	{
//		printf("%d", n >> (31-i) & 1);
//	}
//	printf("\n");
//	printf("����λΪ��");
//	for (int i = 0; i < 32; i = i + 2)
//	{
//		printf("%d", n >> (31- i) & 1);
//	}
//	printf("\n");
//	return 0;
//}

//���һ��������ÿһλ
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

//����int����m��n�Ķ����Ʊ��ʽ�У��ж��ٸ�λ��ͬ
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
//	printf("n��m��ͬ��λ�ĸ�����%d", count);
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
//	struct book b = { "c����","C20220802",55 };
//	printf("������%s\n", b.name);
//	printf("��ţ�%s\n", b.id);
//	printf("�۸�%d\n", b.price);
//
//	return 0;
//}

//����ָ��
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

//�ṹ��
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
//	struct stu s1 = { {'w', 31 , 3.14},"������Ƥ��",31,"220804" };
//
//	printf("%c %d %lf %s %d %s \n", s1.sb.c, s1.sb.s, s1.sb.d, s1.name,s1.age, s1.id);
//	print(&s1);//  �ṹ�庯�����Σ�Ҫ���ṹ��ָ�룡����ֱ�Ӵ��ṹ�������ѹջ��Ӱ������Ч��
//	return 0;
//
//}


//ʵ�� strcpy ����
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


//strlen���ַ������ȣ�ʵ��my_strlen

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

//����һ�������������ж��ٸ�1���������㲹��

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

//���Ʋ����ַ���,��һ���ַ����ӵ�m���ַ���ʼ��ʣ���ȫ���ַ����Ƴ���һ���ַ����������
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

//ʵ�� int cal(int* array,int n) �������������Ϊn������ĺ�
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


//��һ������Ϊn����������
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

//��ȡ�ַ������ȣ�ʹ��ָ��ʵ��
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

//ʹ��ָ�뷽ʽ��������
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

//ʹ��ָ���������
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

//д�����жϵ��ڻ������ֽ���

//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//�������ں�������/��/�ꡱ��ʽ���������/��/�ꡱ

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

//��ӡ����
//˼·��1���ȴ�ӡ�ϰ벿�֣� n/2+1 ���ڵ����ϰ벿�ֵ�
//      2���ϰ벿��ÿһ�д�ӡ�� n-( 2*i-1)���ո񣬷������߼�������һ���д�ӡ*���ӡ �ո��λ��
//      3���°벿���м��ǽ� 1~n/2�е����ݷ��������
//int main()
//{
//	char a = '*';
//	int n = 9;
//
//	for (int i = 1; i <= (n / 2 + 1); i++)   //��ӡ�ϰ벿������
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
//	for (int i = n / 2; i > 0 ; i--)  // ���ϰ벿��1~n/2�е����ݰ��෴˳�����
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
//    printf("����ѧ�ţ�");
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