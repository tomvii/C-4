#pragma once
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<stdlib.h>
#include<stdio.h>
#include<string>
#include<sstream>
using namespace std;
class cal 
{
public:
	void random(int *a, int*b, int*c, int *d);
	void print( int v, int c);//对于结果的输出
	void writefile(char *str, char *p);//写出文件
	int test(int total, char *p1);
	int generateExpression(int x);
	float calcusum(int a, int b, char sig);
	string combine(string a, string b, char sign);
	string int_string(int number);
	char randop();
private:
	char *p;
};
class read
{
public:
	void boundary();//用于生成界面
	int fileread(char *p1);//读入文件并返回题目数值
private:
	char *pr;//读入指针
	int num;

};