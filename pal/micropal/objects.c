#include <pal.h>
#include <unistd.h>
#include "pal_private.h"

void DkObjectClose (PAL_HANDLE objectHandle) {
	if (objectHandle->hdr.type == pal_type_file) {
		close(((PAL_FILE_HANDLE)objectHandle)->descriptor);
	}
}
