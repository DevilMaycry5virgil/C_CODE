#include "contact.h"//����contact.h���ǿ⣬���Բ��ü����� 

void menu()
{
	printf("**********************************\n");
	printf("******   1.add    2.delete    ****\n");
	printf("******   3.check  4.modify    ****\n");
	printf("******   5.show   6.sort      ****\n");
	printf("******   0.exit               ****\n");
	printf("**********************************\n");
}




int main()
{
	int input = 1;
	Con P;
	Contact_Init(&P);//����Ҫ��ͨѶ¼�������ϵ�˵���Ϣ��ʼ�����漰���ı�ֵ������Ҫ��ַ���� 
	do
	{
		menu();	
		scanf("%d",&input);
		switch(input)
		{
			case Exit:
				DestroyContact(&P);
				printf("�˳�ͨѶ¼\n");break;//������do...whileѭ����������0�󲻻�ֱ������ѭ�������ǻ���ִ��������ѭ��
			case Add:
				AddContact(&P);break;
			case Delete:
			    DeleteContact(&P);break;
			case Check:
				CheckContact(&P);break;
			case Modify:
				ModifyContact(&P);break;
			case Show:
				ShowContact(&P);break;
			case Sort:
				SortContact(&P);break;
			default:
				printf("�������ѡ���������������\n");break;
		}
		
	}while(input);
	return 0;
}
