#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <arpa/inet.h>
#include <sys/socket.h>

#define bzero(ptr,n) memset(ptr,0,n)

int main(int argc, char *argv[])
{
	struct sockaddr_in addr;
	unsigned int ad = 0;
	char str[] = "HelloWorld!";

	memset(&addr, 0, sizeof(addr));
	addr.sin_family = AF_INET;
	addr.sin_port = htons(13);
	inet_pton(AF_INET, "127.18.8.10", &addr.sin_addr);

	ad = 168301183;
	printf("%x\r\n", ad);

	puts(str);
	bzero(str,sizeof(str));
	puts(str);

	return 0;
}