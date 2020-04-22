#ifndef __CALL_H__
#define __CALL_H__

#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 4996)

#include<stdio.h>
#include<Windows.h>
#include<string.h>
#include <errno.h>

typedef struct callman
{
	char name[20];
	char sex[10];
	int age;
	int tel[12];
	char addr[50];
}callman;

//typedef struct status
//{
//	callman num[1000];
//	int count;
//}status;

typedef struct status
{
	//callman num[1000];
	callman* num;
	int count;//
	int v;//rongling
}status;

void myinit(status* p);//chushihua
void myadd(status* p);//tianjia
void mydele(status* p);//shanchu
void myfind(status* p);//chauzhao
void myrevise(status* p);//xiugai
void mydisplay(status* p);//xianshi
void myempty(status* p);//qingkong
void mysort(status* p);//paixu

void Free_data(status* p);//�ͷ��ڴ�
void SaveData(status* p);//�����ݱ��浽�ļ���
void DownLoad(status* p);//���ļ��ж�ȡ����

#endif // !__CALL_H__

