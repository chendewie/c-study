//#define  _CRT_SECURE_NO_WARNINGS
////ʵ��һ��ͨѶ¼����,�����ϵ����Ϣ�Ĵ洢
////1.������¼
////2.ɾ����¼
////3,�޸ļ�¼
////4.���Ҽ�¼
////5.��ӡȫ����¼
////6.�����¼
////7.���ȫ����¼
////����: 
////1.������Ϣ������������(�ṹ��)
////2.��Ҫ�����������.��Ҫ��֯����
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MAX_PERSONINFO_SIZE 300
////����һ���ṹ��.��������
//typedef struct PersonInfo {
//	char name[1024];  //̸���ṹ��ռ�����ֽ�,Ҫ˵���ֽڶ���
//	char phone[1024]; //�����������������ݽṹ
//
//}PersonInfo;
//
////��֯����
//typedef struct AddressBook {
//	PersonInfo persons[MAX_PERSONINFO_SIZE];
//	//[0,size)��ʾ��ЧԪ��
//	int size;
//
//}AddressBook;
//
//AddressBook  g_address_book;
//
////ͨѶ¼��ʼ��
//void Init() {
//	g_address_book.size = 0;
//	for (int i = 0; i < MAX_PERSONINFO_SIZE; i++) {
//		g_address_book.persons[i].name[0] = '\0';
//		g_address_book.persons[i].phone[0] = '\0';
//
//	}
//}
//
//int  Menu() {
//	printf("=======================\n");
//	printf("1.������ϵ��\n");
//	printf("2.ɾ����ϵ��\n");
//	printf("3.������ϵ��\n");
//	printf("4.�޸���ϵ��\n");
//	printf("5.��ӡȫ����ϵ��\n");
//	printf("6.������ϵ��\n");
//	printf("7.�����ϵ��\n");
//	printf("0.�˳�\n");
//	printf("=======================\n");
//	printf("���������ѡ��:   ");
//	int choice = 0;
//	scanf("%d", &choice);
//	return  choice;
//
//
//}
//
////1.������ϵ��
//void AddPersonInfo() {
//	printf("������ϵ��;\n");
//	if (g_address_book.size >= MAX_PERSONINFO_SIZE) {
//		printf("������ϵ��ʧ��!\n");
//		return;
//	}
//	printf("��������ϵ������:  \n");
//	//��ȡһ��ָ��,�޸ĵ�������һ��Ԥ�ڵ�ָ��
//	PersonInfo* person_info = &g_address_book.persons[g_address_book.size];
//	scanf("%s", person_info->name);
//
//	printf("��������ϵ�˵绰:  \n");
//	scanf("%s", person_info->phone);
//
//	++g_address_book.size;
//
//	printf("������ϵ�˳ɹ�;\n");
//
//}
//
//
////2.ɾ����ϵ��
//void DelPersonInfo() {
//	printf("ɾ����ϵ��:\n");
//	if (g_address_book.size <= 0) {
//		printf("ͨѶ¼Ϊ��,ɾ��ʧ��;\n");
//		return;
//	}
//	printf("������Ҫɾ�������:\n");
//	int id = 0;
//	scanf("%d", &id);
//
//	if (id < 0 || id >= g_address_book.size) {
//		printf("ɾ��ʧ��,������������!");
//		return;
//
//	}
//
//	g_address_book.persons[id]
//		= g_address_book.persons[g_address_book.size - 1];
//	--g_address_book.size;
//
//	printf("ɾ����ϵ�˳ɹ�:\n");
//
//}
//
////3.������ϵ��
//void FindPersonInfo() {
//	printf("������ϵ��\n");
//	if (g_address_book.size = 0) {
//		printf("ͨѶ¼Ϊ��,����ʧ��!\n");
//		return;
//	}
//	//������Ŀ���ҵ绰
//	printf("������Ҫ���ҵ�����: ");
//	char name[1024] = { 0 };
//	scanf("%s", name);
//	for (int i = 0; i < g_address_book.size; ++i) {
//		PersonInfo* info = &g_address_book.persons[i];
//		if (strcmp(info->name, name) == 0) {
//			printf("[%d]%s\t%s\n", i, info->name, info->phone);
//		}
//
//	}
//
//
//}
////4.������ϵ��
//void UpdatePersonInfo() {
//	printf("������ϵ��\n");
//	if (g_address_book.size = 0) {
//		printf("ͨѶ¼Ϊ��,�޸�ʧ��!\n");
//		return;
//	}
//	printf("������Ҫ�޸ĵ����:\n");
//	int id = 0;
//	scanf("%d", &id);
//	if (id<0 || id>-g_address_book.size) {
//		printf("�޸�ʧ��,������������!\n");
//		return;
//	}
//	PersonInfo* info = &g_address_book.persons[id];
//	printf("�������µ�����:     (%s)\n", info->name);
//	char name[1024] = { 0 };
//
//	scanf("%s", name);
//	if (strcmp(name, "") != 0) {
//		strcmp(info->name, name);
//	}
//
//
//	char phone[1024] = { 0 };
//	printf("�������µĵ绰:    (%s)\n", info->phone);
//	scanf("%s", phone);
//	if (strcmp(phone, "") != 0) {
//		strcmp(info->phone, phone);
//	}
//	printf("������ϵ�˳ɹ�!\n");
//
//}
//
////5.��ӡȫ����ϵ��
//void PrintfAllPersonInfo() {
//	printf("��ӡȫ����ϵ��: \n");
//	for (int i = 0; i < g_address_book.size; ++i) {
//		PersonInfo* info = &g_address_book.persons[i];
//		printf("[%d]  %s\t%s\n", i, info->name, info->phone);
//	}
//
//	printf("����ӡ��%d������! \n", g_address_book.size);
//
//	printf("��ӡȫ����ϵ�˳ɹ�! \n");
//
//
//}
//
////6.������ϵ��
//void SortPersonInfo() {
//	//�����ֽ�������,ȡ�ṹ���е������ֶ�
//	char name[1024] = { '\0' };
//	char phone[1024] = { '\0' };
//	int bound;
//	int i;
//	int size;
//	for (i = 0; i < g_address_book.size; i++) {
//		for (bound = 0; bound < g_address_book.size; bound++) {
//			for (size = bound; size < g_address_book.size - 1; size++) {
//				if (strcmp(g_address_book.persons[size].name,
//					g_address_book.persons[size + 1].name) > 0) {
//					strcpy(name, g_address_book.persons[size].name);
//					strcpy(g_address_book.persons[size].name,
//						g_address_book.persons[size + 1].name);
//					strcpy(g_address_book.persons[size + 1].name, name);
//					//copy �绰����
//					strcpy(phone, g_address_book.persons[size].phone);
//					strcpy(g_address_book.persons[size].phone,
//						g_address_book.persons[size + 1].phone);
//					strcpy(g_address_book.persons[size + 1].phone, phone);
//				}
//			}
//		}
//	}
//	printf("����������ϵ��:\n");
//	printf("����ɹ�!\n");
//	system("pause");
//	system("cls");
//}
//
//
//
////7.�����ϵ��
//void ClearAllPersonInfo() {
//	printf("���ȫ������\n");
//	printf("�����Ҫ���ȫ��������? Y/N \n");
//	char choice[1024] = { 0 };
//	scanf("%s", choice);
//	if (strcmp(choice, "Y") == 0) {
//		g_address_book.size = 0;
//		printf("���ȫ�����ݳɹ�!\n");
//
//	}
//	else {
//		printf("��ղ���ȡ��!\n");
//	}
//
//
//}
//
//Empty() {
//
//}
//
//typedef void(*Func)();//������һ������ָ��;
//
//
//
//
//int main() {
//	Func arr[] = {
//		Empty,
//		AddPersonInfo,
//		DelPersonInfo,
//		FindPersonInfo,
//		UpdatePersonInfo,
//		PrintfAllPersonInfo,
//		SortPersonInfo,
//		ClearAllPersonInfo
//	};
//
//	Init();
//
//	while (1) {
//		int choice = Menu();
//		if (choice < 0 || choice >= sizeof(arr) / sizeof(arr[0])) {
//			printf("������������,����������!");
//			continue;
//		}
//
//		if (choice == 0) {
//			printf("�ټ�!\n");
//			break;
//
//		}
//		arr[choice]();//ת�Ʊ�,�򻯴���,ͨ���±�ȡ�ú���ָ��
//	}
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    unsigned char puc[4];
//    struct tagPIM
//    {
//        unsigned char ucPim1;
//        unsigned char ucData0 : 1;
//        unsigned char ucData1 : 2;
//        unsigned char ucData2 : 3;
//    }*pstPimData;
//    pstPimData = (struct tagPIM*)puc;
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;
//    pstPimData->ucData0 = 3;
//    pstPimData->ucData1 = 4;
//    pstPimData->ucData2 = 5;
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//    return 0;
//}

//#pragma pack(4)
//#include<stdio.h>
//int main(int argc, char* argv[])
//{
//    struct tagTest1
//    {
//        short a;//2
//        char d;//1+1
//        long b;//4
//        long c;//4 
//    };
//    struct tagTest2
//    {
//        long b;//4
//        short c;//2
//        char d;//1+1
//        long a;//4
//    };
//    struct tagTest3
//    {
//        short c;//2+2
//        long b;//4
//        char d;//1+3
//        long a;//4
//    };
//    struct tagTest1 stT1;
//    struct tagTest2 stT2;
//    struct tagTest3 stT3;
//
//    printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//    return 0;
//}