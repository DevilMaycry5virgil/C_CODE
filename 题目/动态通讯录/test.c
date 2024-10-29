#include "contact.h"//由于contact.h不是库，所以不用尖括号 

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
	Contact_Init(&P);//由于要将通讯录里面的联系人的信息初始化，涉及到改变值，所以要传址调用 
	do
	{
		menu();	
		scanf("%d",&input);
		switch(input)
		{
			case Exit:
				DestroyContact(&P);
				printf("退出通讯录\n");break;//由于是do...while循环，在输入0后不会直接跳出循环，而是会先执行再跳出循环
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
				printf("你输入的选项有误，请从新输入\n");break;
		}
		
	}while(input);
	return 0;
}
