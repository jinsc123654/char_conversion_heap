/*
 * @Author: Jinsc
 * @Date: 2022-11-12 21:13:52
 * @LastEditors: Jinsc
 * @LastEditTime: 2022-11-12 21:50:18
 * @FilePath: /char_conversion-master/src/main.c
 * @Description: 
 * Copyright (c) 2022 by jinsc123654@gmail.com All Rights Reserved. 
 */
#include <stdio.h>
#include <string.h>
#include <stdio.h>  
#include <string.h>  
#include <malloc.h>  
#include <memory.h> 
#include "char_conversion.h"

static char txt_src[] = "123你好你，，，，，，123你好你，，，，，，123你好你，，，，，，123你好你，，，，，，123你好你，，，，，，123你好你，，，，，，123你好你，，，，，，123你好你，，，，，，";
static char txt_dir[1000];

int main(int argc, char *argv[])
{
	printf("start\n");
	FILE *file;
	file = fopen("text.txt","w");

	gb2312ToUtf8(txt_dir,sizeof(txt_dir),txt_src,strlen(txt_src));
	fwrite(txt_dir,strlen(txt_dir),1,file);

	// fwrite(txt_src,sizeof(txt_src),1,file);
	fflush(file);
	fclose(file);
	return 0;
}
