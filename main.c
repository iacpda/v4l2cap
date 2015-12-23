#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define VIDEODEV "/dev/video0"

int main(int argc, char **argv)
{
	int fd;

	fd = open(VIDEODEV, O_RDWR);
	if (fd <= 0) {
		printf("ERROR: Opening %s\n", VIDEODEV);
		return 1;
	}

	/* Notify we are not functional yet */
	printf("Sorry, still WIP\n");

	close(fd);
	return 0;
}
