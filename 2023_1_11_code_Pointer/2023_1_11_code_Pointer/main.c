#include <stdio.h>
#include <string.h>
/*
【知识点】
--------------------------------------------------------------
	【注意】：字符串向内存中存储时最后会自动存上‘\0’
	①sizeof（arr）其中arr代表的是整个数组
	②&arr，其中arr代表的是整个数组
		【其他情况arr均代表首元素地址】
--------------------------------------------------------------
	③strlen和sizeof的区别
			1、sizeof()是运算符，strlen()是库函数，需要引入头文件<string.h>
			2、sizeof()在编译时计算好了，strlen()在运行时计算
			3、sizeof()计算出对象使用的最大字节数，strlen()计算字符串的实际长度
			4、sizeof()的参数类型多样化（数组，指针，对象，函数都可以），strlen()的参数必须是字符型指针（传入数组时自动退化为指针）
              （strlen参数是指针，即地址，从此地址向后一个一个数字符，直到\0结束）

--------------------------------------------------------------
	对于一个表达式通常有两个属性，一个是值属性，一个是类型属性
	short s = 5;
	printf("%d\n",sizeof(s=3+5));  //s是老大，他说了算，最后还是short类型，并且sizeof内部没有进行计算，所以s还是5
	printf("%d\n",s)
	结果是2和5


---------------------------------------------------------------
*/

int main()
{
	//int arr[] = { 1,2,3,4 };
	//printf("%d\n",sizeof(arr));//arr代表整个数组，16
	//printf("%d\n",sizeof(&arr));//&arr取出的是整个数组的地址，4/8
	//printf("%d\n",sizeof(*arr));//*arr代表的是第一个元素，4
	//printf("%d\n",sizeof(&arr[0]));//&arr[0]代表第一个元素的地址，4/8



	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", strlen(arr));//arr不在sizeof中，不代表整个数组，这里arr代表首元素地址，但是并没有\0结束标志，所以是随机值
	//printf("%d\n", strlen(arr+0));//同上
	////printf("%d\n", strlen(*arr));//*arr代表首元素，不是指针，strlen的参数错误,报错
	////printf("%d\n", strlen(arr[1]));//同上
	//printf("%d\n", strlen(&arr));//&arr本质是char(*)[6],但是被strlen转换成char*了，然后从第一个元素向后一个一个数字符，直到遇到\0结束，随机值
	//printf("%d\n", strlen(&arr+1));//从最后一个元素后面向后一个一个数字符，直到遇到\0结束，随机值
	//printf("%d\n", strlen(&arr[0]+1));//从第二个元素向后一个一个数字符，直到遇到\0结束，随机值




	//char arr[] = "abcdef";
	//printf("%d\n", strlen(arr));//arr代表首元素地址，从第一个向后一个一个数字符，直到\0停止，6
	//printf("%d\n", strlen(arr + 0));//同上
	//printf("%d\n", strlen(*arr));//报错
	//printf("%d\n", strlen(arr[1]));//报错
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr+1));//随机值
	//printf("%d\n", strlen(&arr[0] + 1));//5



	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//arr在sizeof中代表整个数组，“abcdef”这个字符串最后以\0为标志，7
	//printf("%d\n", sizeof(arr + 0));//加上数字意味着arr是指针了，4/8
	//printf("%d\n", sizeof(*arr));//解引用出是数组的第一个元素，1
	//printf("%d\n", sizeof(arr[1]));//同上
	//printf("%d\n", sizeof(&arr));//&arr代表整个数组的地址，4/8
	//printf("%d\n", sizeof(&arr + 1));//指向数组最后的指针，4/8
	//printf("%d\n", sizeof(&arr[0] + 1));//数组中第二个元素的地址，4/8



	//char *p = "abcdef";
	//printf("%d\n", sizeof(p));//p是指针，指向字符串中a的地址，4/8
	//printf("%d\n", sizeof(p + 1));//p是一个char类型的指针，p+1向后移动一格，指向字符串中b的地址，4/8
	//printf("%d\n", sizeof(*p));//*p是解引用出a，1
	//printf("%d\n", sizeof(p[0]));//   p[0]   等价于   *（p+0），1
	//printf("%d\n", sizeof(&p));//指针p的地址，4/8
	//printf("%d\n", sizeof(&p + 1));//指针p的地址，不知道什么类型，但还是地址，4/8
	//printf("%d\n", sizeof(&p[0] + 1));//字符串中b的地址，4/8



	//char* p = "abcdef";
	//printf("%d\n", strlen(p));//p是一个指针，指向字符串中a的地址，6
	//printf("%d\n", strlen(p + 1));//char*指针每次移动1格，5
	////printf("%d\n", strlen(*p));//报错，传参有错
	////printf("%d\n", strlen(p[0]));//同上
	//printf("%d\n", strlen(&p));//是一个指针，指向指针p的地址，随机值
	//printf("%d\n", strlen(&p + 1));//p指针尾部的地址，随机值
	//printf("%d\n", strlen(&p[0] + 1));//指向b的地址，5



	int a[3][4] = { 0 };
	printf("%d\n", (int)sizeof(a));//a代表整个二维数组，12个元素，每个元素均为int类型，12*4=48
	printf("%d\n", sizeof(a[0][0]));//a[0][0]代表二维数组的第一个元素，int类型，4
	printf("%d\n", sizeof(a[0]));//a[0]代表二维数组的第一行，4*4=16
	printf("%d\n", sizeof(a[0]+1));//a[0]并非单独放在sizeof内部，因此代表首元素地址，即第一行第一列的地址，+1指向的是第一行第二列的地址，4/8
	printf("%d\n", sizeof(*(a[0]+1)));//a[0]+1代表的是第一行第二列的地址，再解引用代表第一行第二列那个元素，4
	printf("%d\n", sizeof(a+1));//a代表二维数组首元素的地址，即第一行的地址，+1即第二行的地址，4/8
	printf("%d\n", sizeof(*(a + 1)));//对第二行进行解引用，16
	printf("%d\n", sizeof(&a[0] + 1));//&a[0]代表第一行的地址，+1代表第二行的地址，4/8
	printf("%d\n", sizeof(*(&a[0] + 1)));//对第二行进行解引用，16
	printf("%d\n", sizeof(*a));//a是第一行的地址，解引用后，16
	printf("%d\n", sizeof(a[3]));//对于一个表达式通常有两个属性，一个是值属性，一个是类型属性，
	                             //对于sizeof这个操作符来说，只需要知道a[3]的类型属性和个数即可,而计算机完全可以推算出来，所以可以计算，16


	return 0;
}