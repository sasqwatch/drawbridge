#include <pal.h>

void DkObjectClose (PAL_HANDLE objectHandle) {
	close(objectHandle);
}
