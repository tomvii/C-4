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
	void print( int v, int c);//���ڽ�������
	void writefile(char *str, char *p);//д���ļ�
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
	void boundary();//�������ɽ���
	int fileread(char *p1);//�����ļ���������Ŀ��ֵ
private:
	char *pr;//����ָ��
	int num;

};