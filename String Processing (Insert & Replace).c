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

/* 主程式 */
int main(){
	printf("\n本程式由 劉禹寬 設計\n\n");
	printf("使用 C 語言的指標建立字串處理函數，並且建立 C 程式測試這些函數，如下表所示：\n");
	printf("a.insert(str1, str2, int)：插入字串，將 str2 插入 str1 的位置，int 從 0 開始。\n");
	printf("b.replace(str1, str2, int)：取代字串，將 str1 位置 int 開始取代成 str2，int 是從 0 開始。\n\n");
	printf("程式設計結果如下：\n\n");

  char str1[40] = "1234567890";
  char *str2 = "abcde";
  printf("10-1 insert(str1, str2, 3)：\n");
  printf("插入前：Str1=%s\n",str1);
  printf("　　　：Str2=%s\n",str2);
  printf("插入後：Str1=%s\n",insert(str1, str2, 3));
  printf("　　　：Str2=%s\n\n",str2);
  
  printf("10-2 replace(str1, str2, 3)：\n");
  printf("取代前：Str1=%s\n",str1);
  printf("　　　：Str2=%s\n",str2);
  printf("取代後：Str1=%s\n",replace(str1, str2, 3));
  printf("　　　：Str2=%s\n",str2);
  printf("\n\n");
system("PAUSE");/* 暫停 */
return 0;
}

