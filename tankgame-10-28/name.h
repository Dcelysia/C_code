#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
//��ӡ��ͷ����
void startmenu();
//��ӡ��Ϸҳ��
void menu(char arr[14][14]);
//��ʼ��ս��
void Initmenu(char arr[14][14], int ctank, int* px, int* py);
//����Ĺؼ�����
void play(char arr[14][14],int px,int py);
//���������еĵз�̹������������������ƶ�
void commove(char arr[14][14]);
//�����ڵ��ķ�����˶��ͽ�����ж�
void fire(char arr[14][14],int who,char whe,int px,int py);
//������ȥ��̹��
void fuhuoba(char arr[14][14]);
//�ж���û��̹�˿���ɱ�����
void ifctankkill(char arr[14][14]);
//��ӡ�����˵�
void endmenu();