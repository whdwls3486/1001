#include <sys/stat.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ( int argv, char *argv[])
{
	struct stat buf;

	if(stat(argv[1].&buf) == -1)
	{
		perror("stat");
		return 1;
	}

	printf("I-node number : %ld\n", (long) buf.st_ino);
	printf("Link count : %ld\n",(long) buf.st_nlink);
	printf("UID : %ld GID : %ld\n", (long) buf.st_uid, buf.st_gid);
	printf("File size : %lld \n", (long long)buf.st_size);
	printf("Last status change : %s" , ctime(&buf.st_ctime));
	printf("last file access : %s", ctime(&buf.st_atime));
	printf("last file modification : %s", ctime(&buf.st_mtime));

	return 0;
}

