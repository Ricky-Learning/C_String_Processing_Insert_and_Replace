#include <stdio.h>
#include <stdlib.h>

char *insert(char *str1,char *str2,int num){
	static char str[100];
	int i;
	char *ptr1=str1;
	char *ptr2=str2;
	char *pstr=str;
	num--;	num--;
	for(i=0;i<=num;i++){
		*(pstr+i)=*ptr1++;
	}
	while(*ptr2!='\0'){
		*(pstr+i)=*ptr2++;
		i++;
	}
	while(*ptr1!='\0'){
		*(pstr+i)=*ptr1++;
		i++;
	}
	*(pstr+i)='\0';
	
	return str;
}

char *replace(char *str1,char *str2,int num){
	static char str[100];
	int i;
	char *ptr1=str1;
	char *ptr2=str2;
	char *pstr=str;
	num--; 	num--;
	for(i=0;i<=num;i++){
		*(pstr+i)=*ptr1++;
	}
	while(*ptr2!='\0'){
		*(pstr+i)=*ptr2++;
		i++;
	}
	*(pstr+i)='\0';
	
	return str;
}

/* �D�{�� */
int main(){
	printf("\n���{���� �B��e �]�p\n\n");
	printf("�ϥ� C �y�������Ыإߦr��B�z��ơA�åB�إ� C �{�����ճo�Ǩ�ơA�p�U��ҥܡG\n");
	printf("a.insert(str1, str2, int)�G���J�r��A�N str2 ���J str1 ����m�Aint �q 0 �}�l�C\n");
	printf("b.replace(str1, str2, int)�G���N�r��A�N str1 ��m int �}�l���N�� str2�Aint �O�q 0 �}�l�C\n\n");
	printf("�{���]�p���G�p�U�G\n\n");

  char str1[40] = "1234567890";
  char *str2 = "abcde";
  printf("10-1 insert(str1, str2, 3)�G\n");
  printf("���J�e�GStr1=%s\n",str1);
  printf("�@�@�@�GStr2=%s\n",str2);
  printf("���J��GStr1=%s\n",insert(str1, str2, 3));
  printf("�@�@�@�GStr2=%s\n\n",str2);
  
  printf("10-2 replace(str1, str2, 3)�G\n");
  printf("���N�e�GStr1=%s\n",str1);
  printf("�@�@�@�GStr2=%s\n",str2);
  printf("���N��GStr1=%s\n",replace(str1, str2, 3));
  printf("�@�@�@�GStr2=%s\n",str2);
  printf("\n\n");
system("PAUSE");/* �Ȱ� */
return 0;
}

