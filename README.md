# VS2022_C_LEARN【C语言学习】
## 2023年1月10日
## 2023年1月11日

【指针进阶⑧】
【知识点】

		①  sizeof（arr）其中arr代表的是整个数组
	
		②  &arr，其中arr代表的是整个数组
			【其他情况arr均代表首元素地址】

		③  strlen和sizeof的区别

			1、sizeof()是运算符，strlen()是库函数，需要引入头文件<string.h>
	
			2、sizeof()在编译时计算好了，strlen()在运行时计算
	
			3、sizeof()计算出对象使用的最大字节数，strlen()计算字符串的实际长度
	
			4、sizeof()的参数类型多样化（数组，指针，对象，函数都可以），strlen()的参数必须是字符型指针（传入数组时自动退化为指针）
	
			（strlen参数是指针，即地址，从此地址向后一个一个数字符，直到\0结束）                 

二维数组的理解：
![image](https://user-images.githubusercontent.com/78026898/212325377-f46cc2ea-cd8f-4ecd-bbdc-0cb8df46e288.png)
