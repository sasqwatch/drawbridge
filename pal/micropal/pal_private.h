/* PAL private functions */ 
#ifndef PAL_PRIVATE_H
#define PAL_PRIVATE_H
#endif // or pragma once

#include <pal.h>

typedef struct pal_file_handle {
	struct {
		PAL_IDX type;
	} hdr;
	int descriptor;
} * PAL_FILE_HANDLE;
