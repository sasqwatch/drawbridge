#include <pal.h>

void DkProcessExit(PAL_NUM exitCode) {
	_exit(exitCode);
}
