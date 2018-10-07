#include <pal.h>
#include <unistd.h>

void DkObjectClose (PAL_HANDLE objectHandle) {
	close(objectHandle);
}
