# include <stdio.h>
# include <string.h>

struct student
{
	int num;
	char name[20];
	char sex;
};

//�ȶ��庯��
void InputStudent(struct student * pst)//��ַ���ݣ�ֻ����4���ֽ�(�����ṹ�����st1�����ֽڵ�ַ)����������Ч�ʺܸߣ�����Σ�գ�
{
	pst->num = 101;
	//pst->name = "�ŷ�";//error!
	strcpy(pst->name, "�ŷ�");
	pst->sex = 'M';

	return;
}

void OutputStudent(struct student st)//ֵ���ݣ�����28���ֽ�(�����ṹ�����st1�����г�Աֵ�Ŀ���)����������Ч�ʺܵͣ����ܰ�ȫ��
{
	printf("%d, %s, %c\n", st.num, st.name, st.sex);

	return;
}

int main(void)
{
	struct student st1;
	
	InputStudent(&st1);//�ٵ��ó�Ա��ʼ������

	//printf("%d, %s, %c\n", st1.num, st1.name, st1.sex);

	OutputStudent(st1);//�ٵ��ó�Ա�������

	return 0;
}