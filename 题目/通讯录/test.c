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
			case 0:
				printf("�˳�ͨѶ¼\n");break;//������do...whileѭ����������0�󲻻�ֱ������ѭ�������ǻ���ִ��������ѭ��
			case 1:
				AddContact(&P);break;
			case 2:
			    DeleteContact(&P);break;
			case 3:
				CheckContact(&P);break;
			case 4:
				ModifyContact(&P);break;
			case 5:
				ShowContact(&P);break;
			case 6:
				SortContact(&P);break;
			default:
				printf("�������ѡ���������������\n");break;
		}
		
	}while(input);
	return 0;
}
