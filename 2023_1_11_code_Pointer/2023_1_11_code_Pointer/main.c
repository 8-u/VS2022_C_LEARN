#include <stdio.h>
#include <string.h>
/*
��֪ʶ�㡿
--------------------------------------------------------------
	��sizeof��arr������arr���������������
	��&arr������arr���������������
		���������arr��������Ԫ�ص�ַ��
--------------------------------------------------------------
	��strlen��sizeof������
			1��sizeof()���������strlen()�ǿ⺯������Ҫ����ͷ�ļ�<string.h>
			2��sizeof()�ڱ���ʱ������ˣ�strlen()������ʱ����
			3��sizeof()���������ʹ�õ�����ֽ�����strlen()�����ַ�����ʵ�ʳ���
			4��sizeof()�Ĳ������Ͷ����������飬ָ�룬���󣬺��������ԣ���strlen()�Ĳ����������ַ���ָ�루��������ʱ�Զ��˻�Ϊָ�룩
              ��strlen������ָ�룬����ַ���Ӵ˵�ַ���һ��һ�����ַ���ֱ��\0������                 
---------------------------------------------------------------
*/

int main()
{
	//int arr[] = { 1,2,3,4 };
	//printf("%d\n",sizeof(arr));//arr�����������飬16
	//printf("%d\n",sizeof(&arr));//&arrȡ��������������ĵ�ַ��4/8
	//printf("%d\n",sizeof(*arr));//*arr������ǵ�һ��Ԫ�أ�4
	//printf("%d\n",sizeof(&arr[0]));//&arr[0]�����һ��Ԫ�صĵ�ַ��4/8



	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", strlen(arr));//arr����sizeof�У��������������飬����arr������Ԫ�ص�ַ�����ǲ�û��\0������־�����������ֵ
	//printf("%d\n", strlen(arr+0));//ͬ��
	////printf("%d\n", strlen(*arr));//*arr������Ԫ�أ�����ָ�룬strlen�Ĳ�������,����
	////printf("%d\n", strlen(arr[1]));//ͬ��
	//printf("%d\n", strlen(&arr));//&arr������char(*)[6],���Ǳ�strlenת����char*�ˣ�Ȼ��ӵ�һ��Ԫ�����һ��һ�����ַ���ֱ������\0���������ֵ
	//printf("%d\n", strlen(&arr+1));//�����һ��Ԫ�غ������һ��һ�����ַ���ֱ������\0���������ֵ
	//printf("%d\n", strlen(&arr[0]+1));//�ӵڶ���Ԫ�����һ��һ�����ַ���ֱ������\0���������ֵ



	//��ע�⡿���ַ������ڴ��д洢ʱ�����Զ����ϡ�\0��
	//char arr[] = "abcdef";
	//printf("%d\n", strlen(arr));//arr������Ԫ�ص�ַ���ӵ�һ�����һ��һ�����ַ���ֱ��\0ֹͣ��6
	//printf("%d\n", strlen(arr + 0));//ͬ��
	//printf("%d\n", strlen(*arr));//����
	//printf("%d\n", strlen(arr[1]));//����
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr+1));//���ֵ
	//printf("%d\n", strlen(&arr[0] + 1));//5



	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//arr��sizeof�д����������飬��abcdef������ַ��������\0Ϊ��־��7
	//printf("%d\n", sizeof(arr + 0));//����������ζ��arr��ָ���ˣ�4/8
	//printf("%d\n", sizeof(*arr));//�����ó�������ĵ�һ��Ԫ�أ�1
	//printf("%d\n", sizeof(arr[1]));//ͬ��
	//printf("%d\n", sizeof(&arr));//&arr������������ĵ�ַ��4/8
	//printf("%d\n", sizeof(&arr + 1));//ָ����������ָ�룬4/8
	//printf("%d\n", sizeof(&arr[0] + 1));//�����еڶ���Ԫ�صĵ�ַ��4/8



	//char *p = "abcdef";
	//printf("%d\n", sizeof(p));//p��ָ�룬ָ���ַ�����a�ĵ�ַ��4/8
	//printf("%d\n", sizeof(p + 1));//p��һ��char���͵�ָ�룬p+1����ƶ�һ��ָ���ַ�����b�ĵ�ַ��4/8
	//printf("%d\n", sizeof(*p));//*p�ǽ����ó�a��1
	//printf("%d\n", sizeof(p[0]));//   p[0]   �ȼ���   *��p+0����1
	//printf("%d\n", sizeof(&p));//ָ��p�ĵ�ַ��4/8
	//printf("%d\n", sizeof(&p + 1));//ָ��p�ĵ�ַ����֪��ʲô���ͣ������ǵ�ַ��4/8
	//printf("%d\n", sizeof(&p[0] + 1));//�ַ�����b�ĵ�ַ��4/8



	char* p = "abcdef";
	printf("%d\n", strlen(p));//p��һ��ָ�룬ָ���ַ�����a�ĵ�ַ��6
	printf("%d\n", strlen(p + 1));//char*ָ��ÿ���ƶ�1��5
	//printf("%d\n", strlen(*p));//���������д�
	//printf("%d\n", strlen(p[0]));//ͬ��
	printf("%d\n", strlen(&p));//��һ��ָ�룬ָ��ָ��p�ĵ�ַ�����ֵ
	printf("%d\n", strlen(&p + 1));//pָ��β���ĵ�ַ�����ֵ
	printf("%d\n", strlen(&p[0] + 1));//ָ��b�ĵ�ַ��5


	return 0;
}