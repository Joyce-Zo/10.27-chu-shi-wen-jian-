#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

						文 件
 1.磁盘上的文件 - 文件
 2.程序设计中，一般：
 1)程序文件 - 源程序文件xxx.c + 目标文件xxx.obj + 可执行程序xxx.exe
 2)数据文件 - 不一定是程序，而是程序运行时读取的数据，
				如程序运行时需要读取数据的文件,或输出内容到磁盘(需要时再读取)的文件
 
	文件名 - c:\code\test.txt
			路径  +  text - 文件名主干 + txt 文件后缀

	文件类型 - 
 1.文本文件(可以读懂)-数据在外存以ASCII码形式存储，需要在存储前转化，
 以ASCII字符形式存储的文件即文本文件
 2.二进制文件(宛如乱码)-数据在内存中以二进制的形式存储，不加转换的输出到外存，
 即二进制文件		
 
	字符一律以ASCII形式存储，数值型数据可以用ASCII|二进制形式存储
 整数 10000 ，1.int型，4字节 | 2.字符型，1，0，0，0，0，共5个字符5个字节

int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");
	fwrite(&a, 4, 1, pf);
	fclose(pf);
	pf = NULL;
	return 0;
}

 文件缓冲区
int main()
{
	int a;
	
	while (1)
	{
		printf("%d ", a = 100);
		Sleep(100);
	}
}

 文件指针 - 文件类型指针
 每个被使用的文件都在内存中开辟了一个对应的文件信息区
	存放文件的相关信息 - 名字、状态、当前位置等
	这些信息保存在一个结构体中，有系统声明 - FILE
	可以通过文件指针变量找到与他关联的文件

FILE

int main()
{
	int i = 10;
	for (i; i > 1; i /= 2)
	{
		printf("%d ", i++);
	}
  10 11  5...1  6  3  4  2...2  3  1  2  1
  
	printf("学习问题\n");
	return 0;
}