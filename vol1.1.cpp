#include"ark_l.h"
#include"ark_w.h"


//main�������� 
int main(void) {
 	char filename[10];
 	
	int i,k,c,y;
	double cs;	
	
	//printf("�������ļ�����\n");
    //scanf("%s",filename);
    //system("CLS");
    strcpy(filename,"test.txt");      //����ʱ�� 
    
    printf("�����뾵Ƭ������\n");
	scanf("%d",&k);
	system("CLS");
	k=3;                              //����ʱ��
    
    printf("��������ֱͫ����\n");
    scanf("%le",&a);
	system("CLS");
	//a=10; ka=1;                         //����ʱ��
	printf("������׾�ϵ����\n");
    scanf("%le",&ka);
	system("CLS");
	
	printf("�������ӳ��ǣ�ȡ��������\n");
    scanf("%le",&m);
	system("CLS");
	//m=-3; km=1 ;                          //����ʱ��
	
	printf("�������ӳ�ϵ����\n");
    scanf("%le",&km);
	system("CLS");
	
	while(c!=1&&c!=2){
	
	printf("�����Ƿ�������Զ��\n");
	printf("1.��\n");
	printf("2.��\n");
	printf("���ѡ��");
    scanf("%d",&c);
	system("CLS");
	}
	
	if(c==2){
		printf("��������ߣ�\n");
		scanf("%le",&xg);
	}
		
    read_data(filename,k);
    i=1;
    while(i!=0){
    	printf("������Ҫ�鿴�Ĳ�����\n");
    	printf("1.���     2.����۲� 3.����\n");
    	printf("4.���糡�� 5.��ʸ���� 6.��ɢ\n");
    	printf("7.����     8.����λ�� 9.��ͫ��\n"); 
    	printf("0.��������\n");
    	printf("���ѡ��");
		scanf("%d",&i) ;
		switch(i){
			case 0:break; 
			case 1:cs=get_ls1(c)-get_l1(c);printf("���Ϊ:%le",cs);getch();break;
			case 2:cs=get_Ks(c);           printf("����۲�Ϊ:%le",cs);getch();break;
			case 3:cs=get_yp1(c)-get_y0(c);printf("����Ϊ:%le",cs);getch();break;
			case 4:cs=get_xt1(c);printf("���糡��Ϊ:%le",cs);getch();break;
			case 5:cs=get_xs1(c);printf("��ʸ����Ϊ:%le",cs);getch();break;
			case 6:cs=get_xt1(c)-get_xs1(c);printf("��ɢΪ:%le",cs);getch();break;
			case 7:cs=get_f1();printf("����Ϊ:%le",cs);getch();break;
			case 8:cs=get_l1(c)-get_f1();printf("����λ��Ϊ:%le",cs);getch();break;
			case 9:cs=get_lp1(c);printf("��ͫ����Ϊ:%le",cs);getch();break;
		}
	system("CLS");	
	}
    
    
    //l1=get_xt1(2);
    //printf("xt1 is %le\n",l1);
    
    
    
    /*get_head1(c);
    get_head2(c);
   	get_head3(c);
   	get_head4(c);    //��ȡ�Ĵ�����������Ϣ 
	 
   	f1=get_f1();
   	l1=get_l1();
	lh1=l1-f1;
	y0=f1*tan(-m/180*Pi);
	y01=f1*tan(-m/180*0.7*Pi);
	ls1=get_ls1();
	ka=0.7;
	get_head4(c);
	ls11=get_ls1();k=1;
	dL=ls1-l1;
	dL1=ls11-l1; 
	yp1=get_yp1();
	m=-2.1;
	get_head1(c);
	yp11=get_yp1();m=-3;get_head1(c);
	dy=yp1-y0;
	xt1=get_xt1();
	xs1=get_xs1();
	lp1=get_lp1();
	
		
   	printf("������%le\n",f1);
    printf("���������%le\n",l1);
    printf("������λ��lH����%le\n",lh1);
    printf("�������y0����%le\n",y0);
	printf("0.7�ӳ��������y0����%le\n",y01);
	printf("ʵ�������%le\n",ls1);
	printf("0.7�׾�ʵ�������%le\n",ls11);
	printf("�����%le\n",dL);
	printf("0.7�׾������%le\n",dL1);
	printf("ʵ�������%le\n",yp1);
	printf("0.7�ӳ�ʵ�������%le\n",yp11);
	printf("ȫ�ӳ����Ի�����%le\n",dy);
	printf("ȫ�ӳ���Ի�����%le\n",dy/y0);
	printf("0.7�ӳ����Ի�����%le\n",yp11-y01);
	printf("0.7�ӳ���Ի�����%le\n",(yp11-y01)/y01);
	printf("���糡����%le\n",xt1);
	printf("��ʸ������%le\n",xs1);
	printf("��ɢ��%le\n",xt1-xs1);
	printf("��ͫ����%le\n",lp1);
	wirte_result();
	 */

}




