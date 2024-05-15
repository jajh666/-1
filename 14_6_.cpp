# include <stdio.h>
# include <string.h>

struct student
{
	int num;
	char name[20];
	char sex;
};

//先定义函数
void InputStudent(struct student * pst)//地址传递：只传了4个字节(即：结构体变量st1的首字节地址)过来，传递效率很高，但很危险！
{
	pst->num = 101;
	//pst->name = "张飞";//error!
	strcpy(pst->name, "张飞");
	pst->sex = 'M';

	return;
}

void OutputStudent(struct student st)//值传递：传了28个字节(即：结构体变量st1的所有成员值的拷贝)过来，传递效率很低，但很安全！
{
	printf("%d, %s, %c\n", st.num, st.name, st.sex);

	return;
}

int main(void)
{
	struct student st1;
	
	InputStudent(&st1);//再调用成员初始化函数

	//printf("%d, %s, %c\n", st1.num, st1.name, st1.sex);

	OutputStudent(st1);//再调用成员输出函数

	return 0;
}