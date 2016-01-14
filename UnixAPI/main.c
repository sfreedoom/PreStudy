#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>

#include "apue.h"

void testOpenDir(char* theDirName)
{
	DIR* tmpdir = NULL;
	struct dirent* tmpdirent = NULL;

	//opendir
	if(NULL == (tmpdir = opendir(theDirName)))
		err_sys("open dir error.\n");

	//readdir
	while(NULL != (tmpdirent = readdir(tmpdir)))
		printf("dir name is:%s\n", tmpdirent->d_name);

	//closedir
	closedir(tmpdir);
	exit(0);
}

int main(int argc, char** argv)
{
	if(2 != argc)
		err_quit("Usage: Is directory_name.");
	testOpenDir(argv[1]);
	return 0;
}
