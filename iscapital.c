#include "iscapital.h"

int iscapital(char c) {
	if (c >= 65 && c <= 90)
		return (c + 32);
	return c;
}
