#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100
struct student
{
	int num;
	char name [10];
	char sex;
    int date;
	char zhengzhimianmao;
	char addr[10];
	long int tel;
}st[100];                           /*����һ���ṹ��*/
void menu();
void input();
void display();
void del();
void add();
void search();
void search_num();
void search_name();
void modify();                      /*���������*/
int m=0;

void menu()                         /*�˵�����*/
{
	//systst("cls");                /*����*/
	printf("     ������ѧ����Ϣ����ϵͳ������\n");
	printf("\n");
    printf("      �����İ�     ��Ʒ��\n");
	printf("\n");
	printf("���T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T��\n");
	printf("��              1.¼��ѧ����Ϣ                  ��\n");
	printf("��              2.���ѧ����Ϣ                  ��\n");
	printf("��              3.��ѯѧ����Ϣ                  ��\n");
	printf("��              4.ɾ��ѧ����Ϣ                  ��\n");
	printf("��              5.����ѧ����Ϣ                  ��\n");
	printf("��              6.�޸�ѧ����Ϣ                  ��\n");
	printf("��              7.�˳�                          ��\n");
	printf("���T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T��\n");
	printf("\n");
	printf("\n");

}
void main()
{
	int n,flag;
	char a;
	menu();  /*���ò˵�����*/
	do
	{
		printf("��ѡ������Ҫ�����Ĳ���(1--7):\n");
		scanf("%d",&n);
		if(n>1&&n<7)
		    flag=1;
    	else
		{	flag=0;
			printf("����������������ѡ��!");
		}
	}
    while(flag==0);

while(flag==1)
	{
		switch(n)
		{
		case 1:printf("��������ѧ����Ϣ����\n");
			printf("\n");input();break;
		case 2:printf("�������ѧ����Ϣ����\n");
			printf("\n");input();break;
		case 3:printf("���ﰴѧ�Ų�ѯѧ����Ϣ����\n");
			printf("\n");input();break;
		case 4:printf("����ɾ��ѧ����Ϣ����\n");
			printf("\n");input();break;
		case 5:printf("�������ѧ����Ϣ����\n");
			printf("\n");input();break;
		case 6:printf("�����޸�ѧ����Ϣ����\n");
			printf("\n");input();break;
		case 7:exit(0);break;
		default:break;
		}
		getchar();
		printf("\n");
		printf("�Ƿ��������(y or n):\n");
		scanf("%c",&a);
		if(a=='y')
		{
			flag=1;
			system("cls");        /*����*/
			menu();               /*���ò˵�����*/
			printf("���ٴ�ѡ������Ҫ�����Ĳ���(1--7):\n");
			scanf("%d",&n);
			printf("\n");
		}

		else
			exit(0);
	}
}


 
void input()   /*¼�뺯��*/
{
	int  i,p;
	printf("��������Ҫ������Ϣ��ѧ������(1--100):\n");
	scanf("%d",&m);
	for (i=0;i<p;i++)
	{
		 printf("ѧ��:   ");
		scanf("%d",&st[i].num);
		printf("����������:  ");
		scanf("%s",st[i].name);
		printf("�������Ա�(w--Ů   m--��):  ");
		scanf("%c",&st[i].sex);

		while(!(st[i].sex=='w'||st[i].sex=='m'))
		{
			printf("������w��m");
			printf("�������Ա�(w--Ů  m--��):  ");
			scanf("%c",&st[i].sex);
		}
		printf("�������������:  ");
		scanf("%d",&st[i].date);
		printf("������������ò:(t--��Ա  d--��Ա):");
		scanf("%c",&st[i].zhengzhimianmao);
		while(!(st[i].zhengzhimianmao=='t'||st[i].zhengzhimianmao=='d'))
		{
			printf("������t��d");
			printf("������������ò(t--��Ա  d--��Ա):  ");
			scanf("%c",&st[i].zhengzhimianmao);
		}
		printf("������סַ:  ");
		scanf("%s",st[i].addr);
		printf("������绰:   ");
		scanf("%d",&st[i].tel);
			printf("\n");
			m++;
	}

	printf("\n�������!\n");

}




void display()  /*�������*/
{
	int i;
	printf("\nѧ��\t����\t�Ա�\t��������\t������ò\tסַ\t�绰   \n");
	for(i=0;i<m;i++)   /*mΪ���벿�ֵ�ѧ������*/
		printf("\n          %d\t%s\t%c\t%d\t%c\t%s\t%id\n",st[i].num,st[i].name,st[i].sex,st[i].date,st[i].zhengzhimianmao,st[i].addr,st[i].tel);
}

void del ()     /*ɾ������*/
{
	int i,j,n,t,flag=1;
	char name[20];
	printf("\n");
	printf("������Ҫɾ����ѧ��������:\n");
	scanf("%s",name);
	for(i=0;i<m;i++);
	{
   if(strcmp(st[i].name,name)==0)
		{
			printf("\n���ҵ����ˣ�ԭʼ��¼Ϊ:\n");
			printf("\nѧ��\t����\t�Ա�\t��������\t������ò\tסַ\t�绰   \n");
			printf("\n%d\t%s\t%c\t%d\t%c\t%s\t%id\n",st[i].num,st[i].name,st[i].sex,st[i].date,st[i].zhengzhimianmao,st[i].addr,st[i].tel);
			printf("\nȷʵҪɾ��������Ϣ�밴1,��ɾ���밴0\n");
				scanf("%d",&n);
			if(n==1)   /*���ɾ��������������Ϣ��������һ��*/
			{
				for(j=i;j<m-1;j++)
				{
					strcpy(st[j].name,st[j+1].name);
					st[j].num=st[j+1].num;
					st[j].sex=st[j+1].sex;
					st[j].date=st[j+1].date;
					st[j].zhengzhimianmao=st[j+1].zhengzhimianmao;
					strcpy(st[j].addr,st[j+1].addr);
					st[j].tel=st[j+1].tel;
				}
				flag=0;
			}
       	m--;
		}
	}
	if(flag==1)
	printf("\n�Բ��𣬲��޴���!\n");
	printf("\n����ɾ���밴1,����ɾ���밴0\n");
	scanf("%d",&t);
	switch(t)
	{
	case 1:del();break;
	case 0:break;
	default :break;
	}
}


void add()   /*��Ӻ���*/
{
	int n;
	int i;
	printf("�����������ӵ�ѧ����:\n");
	scanf("%d",&n);
	for (i=m;i<n;i++);
	{
		printf("\n����������ѧ������Ϣ:\n");
		printf("������ѧ��:   ");
        scanf("%d",&st[i].num);
		printf("����������:  ");
		scanf("%s",st[i].name);
		printf("�������Ա�(w--Ů m--��):  ");
		scanf("%c",&st[i].sex);
		printf("�������������:  ");
		scanf("%d",&st[i].date);
		printf("������������ò:(t--��Ա d--��Ա):   ");
		scanf("%c",&st[i].zhengzhimianmao);
		printf("������סַ:  ");
		scanf("%s",st[i].addr);
		printf("������绰:   ");
		scanf("%d",&st[i].tel);
		printf("\n");
		m++;
	}
	printf("\n������!\n");

}

void search()  /*��ѯ����*/
{
	int t,flag;
	do
	{
		printf("\n��ѧ�Ų�ѯ�밴1;��������ѯ�밴2;������������3\n");
		scanf("%d",&t);
		if(t>=1&&t<=3)
		{
			flag=1;
			break;
		}
		else
		{
			flag=0;
			printf("����������������ѡ��!");
		}
	}
	while(flag==0);
	while(flag==1);
	{
		switch(t)
		{
		case 1:printf("��ѧ�Ų�ѯ\n");search_num();break;
		case 2:printf("��������\n");search_name();break;
		case 3:main();break;
		default:break;
		}
	}
}

void search_num()
{
	int num[10];
	int i, t;
	printf("������Ҫ���ҵ�ѧ��:\n");
	scanf("%d",num);//num����������,����num��һ������
	for(i=0;i<m;i++);
	{
		if(strcmp(st[i].num,num)==0);
		printf("\n���ҵ����ˣ����¼Ϊ:\n");
		printf("\nѧ��\t����\t����\t��������\t������ò\tסַ\t�绰  \n");
		printf("\n%d\t%s\t%c\t%d\t%c\t%s\t%id\n",st[i].num,st[i].name,st[i].sex,st[i].date,st[i].zhengzhimianmao,st[i].addr,st[i].tel);

	}
	if(i==m)
		printf("\n�Բ��𣬲��޴���\n");
	printf("\n");
	printf("���ز�ѯ�����밴1��������ѯѧ���밴2\n");
	scanf("%d",&t);
	switch(t)
	{
	case 1:search();break;
	case 2:break;
	default:break;
	}
}

void search_name()
{
	char name[30];
	int i,t;
	printf("������Ҫ���ҵ�����:\n");
	scanf("%s",name);
	for(i=0;i<m;i++);
	{
		if(strcmp(st[i].name,name)==0);
		{
			printf("\n���ҵ������¼Ϊ:  \n");
			printf("\nѧ��\t����\t�Ա�\t��������\t������ò\tסַ\t�绰  \n");
			printf("\n%d\t%s\t%c\t%d\t%c\t%s\t%id\n",st[i].num,st[i].name,st[i].sex,st[i].date,st[i].zhengzhimianmao,st[i].addr,st[i].tel);
		}
		if(i==m)
			printf("\n�Բ��𣬲��޴���\n");
		printf("���ز�ѯ�����밴1,������ѯ�����밴2\n");
		scanf("%d",&t);
		switch(t)
		{
		case 1:search();break;
		case 2:break;
		default:break;
		}
	}
}

void modify()  /*�޸ĺ���*/
{
		int num;
		char name[10];
		char sex;
		int date;
		char zhengzhimianmao;
		char addr[10];
		long int tel;
		int b,c,i,n,t,flag=1;
		printf("������Ҫ�޸ĵ�ѧ��������:\n");
	
		scanf("%s",name);
		for(i=0;flag&&i<m;i++)
		{
			if(strcmp(st[i].name ,name)==0);
			{
				printf("\n���ҵ�����,ԭʼ��¼Ϊ:\n");
				printf("\nѧ��\t����\t�Ա�\t��������\t������ò\tסַ\t�绰  \n");
				printf("\n%d\t%s\%c\t%d\t%c\t%s\t%id\n",st[i].num,st[i].name,st[i].sex,st[i].date,st[i].zhengzhimianmao,st[i].addr,st[i].tel);
				printf("\nȷʵҪ�޸Ĵ�ѧ����Ϣ�밴1;���޸��밴0\n");
				scanf("%d",&n);
				if(n==1)
				{
					printf("\nx��Ҫ�����޸ĵ�ѡ��\n 1.ѧ�� 2.���� 3.�Ա� 4.�������� 5.������ò 6.סַ  7.�绰\n");
					printf("�����������޸ĵ���һ�����:\n");
					scanf("%d",&c);
					if(c>7||c<1)
						printf("\nѡ�����������ѡ��!\n");
				}
				flag=0;
			}
		}
		if(flag==1);
		printf("\n�Բ��𣬲��޴���!\n");
		do
		{
			switch(i-1)   /*��Ϊ���ҵ���i��ѧ��ʱ��for����i�Լ���1�����������Ӧ�ðѸĺ����Ϣ��ֵ����i-1��ѧ��*/
			{
		case 1:printf("ѧ�Ÿ�Ϊ:  ");
				scanf("%d",&num);
				st[i-1].num=num;
				break;
			case 2:printf("������Ϊ:  ");
				scanf("%s",name);
				strcpy(st[i-1].name,name);
				break;
			case 3:printf("�Ա��Ϊ:  ");
				getchar();
				scanf("%c",&sex);
				st[i-1].sex=sex;
				break;
			case 4:printf("�������ڸ�Ϊ:  ");
				scanf("%d",&date);
				st[i-1].date=date;
				break;
			case 5:printf("������ò��Ϊ:  ");
				getchar();
				scanf("%c",&zhengzhimianmao);
				st[i-1].zhengzhimianmao=zhengzhimianmao;
				break;
			case 6:printf("סַ��Ϊ:   ");
				scanf("%s",addr);
				strcpy(st[i-1].addr,addr);
				break;
			case 7:printf("�绰��Ϊ:  ");
				scanf("%id",&tel);
				st[i-1].tel=tel;
				break;
			}
			printf("\n");
			printf("\n�Ƿ�ȷ�����޸ĵ���Ϣ?\n �� �밴1 ;�����޸� �밴2:  \n");
			scanf("%d",&b);
		}
		while(b==2);
		printf("\n�����޸��밴1,�����޸��밴0\n");
		scanf("%d",&t);
		switch(t)
		{
		case 1:modify();break;
		case 0:break;
		default:break;
		}

}
