/*
 * lmsrp_byte_range.h
 *
 *  Created on: Mar 4, 2021
 *      Author: amneiht
 */

#ifndef LMSRP_BYTE_RANGE_H_
#define LMSRP_BYTE_RANGE_H_

#include <lmsrp.h>

typedef struct lmsrp_byte_range {
	pj_pool_t *pool;
	pj_int64_t start;
	pj_int64_t end;
	pj_int64_t total;
} lmsrp_byte_range;

void lmsrp_byte_range_prase(pj_pool_t *pool, lmsrp_byte_range *header,
		char *data, int end);

#endif /* LMSRP_BYTE_RANGE_H_ */
