#include <pal.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "pal_private.h"
#include <stdlib.h>

PAL_HANDLE DkStreamOpen (PAL_STR path, PAL_FLG flags, PAL_FLG share, PAL_FLG create_if_not_existing, PAL_FLG options) {
	PAL_FILE_HANDLE handle = malloc(sizeof(struct pal_file_handle));
	if (!strcmp("dev:tty", path) && flags == PAL_ACCESS_WRONLY) {
		handle->hdr.type = pal_type_file;
		handle->descriptor = 1;
		return (PAL_HANDLE)handle; 
	}
	else {
		return -1; // not implemented
	}
}

PAL_NUM DkStreamWrite (PAL_HANDLE handle, PAL_NUM offset, PAL_NUM count, PAL_PTR buffer, PAL_STR dest) {
	int8_t* buffer2 = buffer;
	buffer2 = buffer2 + offset;
	if (handle->hdr.type == pal_type_file) {
		write(((PAL_FILE_HANDLE)handle)->descriptor, buffer2, count);
        }
}
