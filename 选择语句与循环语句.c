                                               //ѡ�������ѭ�����
#include <stdio.h>
//int main()
//{
//	int input = 0;//��inputһ����ַ�����︳��һ����ʼֵΪ0
//	printf("�������\n");
//	printf("Ҫ�ú�ѧϰ��(1/0)?");
//	scanf_s("%d", &input);//��һ����������1\0������ѡ��input����,�°�visual studio΢���ṩ�˸���ȫ��scanf_s�����scanf
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}
int main()
{
    int line = 0;//��lineһ����ַ�����︳��һ����ʼֵΪ0(line������ʵ���Ǵ�ָ��������)
    printf("�������\n");

    while (line < 20000)//whileΪѭ������
    {
        printf("д���룺%d\n", line);//��line��������������������
        line++;
    }
    if (line >= 20000)
    {
        printf("��offer");
    }
    else
    {
        printf("��������");
    }

    return 0;
}
//��ʵ�����Ѿ���������δ����޷�����whileѭ��������������Զ�޷����֣��뿴��һ�ڡ�������