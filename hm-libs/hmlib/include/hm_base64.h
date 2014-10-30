
#ifndef __J_BASE_64_H__
#define __J_BASE_64_H__

#include <stdio.h>
#include <string.h>


#ifdef __cplusplus
extern "C" {
#endif

int base64_encode(unsigned char *data, unsigned int dataLen, 
		unsigned char **encData, unsigned int *encDataLen);
int base64_decode(unsigned char *data, unsigned int dataLen, 
		unsigned char **decData, unsigned int *decDataLen);

void base64_free(void *data, size_t size);

#ifdef __cplusplus
}
#endif


#endif //__J_BASE_64_H__

