#include <pal.h>
#include <stdio.h>

PAL_HANDLE DkStreamOpen (PAL_STR path, PAL_FLG flags, PAL_FLG share, PAL_FLG create_if_not_existing, PAL_FLG options) {
	if (!strcmp("dev:tty", path) && flags == PAL_ACCESS_WRONLY) {
		return 1; 
	}
	else {
		return -1; // not implemented
	}
}

PAL_NUM DkStreamWrite (PAL_HANDLE handle, PAL_NUM offset, PAL_NUM count, PAL_PTR buffer, PAL_STR dest) {
	int8_t* buffer2 = buffer;
	buffer2 = buffer2 + offset;
	write(handle, buffer2, count);
}
