/* B = A^t */

#include <assert.h>

#ifndef L
#define L (1<<11)
#endif

#ifndef X
#define X 1
#endif

#ifndef Y
#define Y 8
#endif

const unsigned int BX=1<<X;
const unsigned int BY=1<<Y;

float a[L][L], b[L][L];

int main(void) {
	unsigned int i=0, j=0, ii=0, jj=0;
	assert(0==L%BX && 0==L%BY);
	for (i=0; i<L; i+=BY)
		for (j=0; j<L; j+=BX)
			for (ii=i; ii<i+BY; ++ii)
				for (jj=j; jj<j+BX; ++jj)
					b[jj][ii] = a[ii][jj];
	return 0;
}
