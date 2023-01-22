#include <stdio.h>
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };    
//	int* ptr = (int*)(&a + 1);//a前面有&，所以&a代表数组a的地址，+1代表指向a数组尾部的指针，
//	                          //再强制类型转换成int*类型的指针放到ptr中，所以ptr-1代表数组的最后一个元素的地址，再解引用得到5
//	printf("%d,%d", *(a + 1), *(ptr - 1));//a前面没有&，也没在sizeof内部，所以a代表数组首元素的地址，+1代表第二个元素的地址，再解引用得到2
//	return 0;
//}




struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;//p是一个结构体指针，指向一个结构体类型
//假设p的值为0x100000（即p这个指针指向的地址的16进制表示）。如下的表达式的值分别是多少？
//已知，结构体Teat类型的变量大小是20个字节。(32位系统下)
//已知，结构体Teat类型的变量大小是32个字节。(64位系统下)



//int main()
//{
//	printf("%p\n", p + 0x1);//p是一个指针，指针+1代表跳过这个类型的那个地址，因为结构体Teat类型的变量大小在32位系统下是20个字节，所以地址为0x100014，十进制的20是十六进制的0x000014
//	printf("%p\n", (unsigned long)p + 0x1);//将指针p转换成unsigned long类型，这个类型就是十六进制的整数，0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//将结构体指针转换成unsigned int*类型的指针，+1代表跳过4个字节，所以0x100004
//	return 0;
//}



//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//
//	return 0;
//}





