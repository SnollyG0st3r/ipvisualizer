
#include "flowdata.h"

/* returns the number of bytes that are valid */
inline int flowpacketsize(struct flowpacket* f)
{
	return(2*sizeof(unsigned short) + sizeof(flowdata) * f->count);
}

inline int subnetpacketsize(struct subnetpacket* s)
{
	return(2*sizeof(unsigned short) + sizeof(subnetword) * s->count);
}
