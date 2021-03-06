/*
 * lmsrp_auth.c
 *
 *  Created on: Mar 6, 2021
 *      Author: amneiht
 */

#include <lmsrp.h>

lmsrp_authorization_h* lmsrp_authorization_h_create(pj_pool_t *pool,
		pj_str_t *scheme, pj_str_t *username, pj_str_t *realm, pj_str_t *nonce,
		pj_str_t *uri, pj_str_t *response, pj_str_t *algorithm,
		pj_str_t *cnonce, pj_str_t *opaque, pj_str_t *qop, pj_str_t *nc) {
	lmsrp_authorization_h *res = PJ_POOL_ZALLOC_T(pool, lmsrp_authorization_h);
	res->pool = pool;
	if (scheme != NULL)
		pj_memcpy(&res->scheme, scheme, sizeof(pj_str_t));
	if (username != NULL)
		pj_memcpy(&res->username, username, sizeof(pj_str_t));
	if (realm != NULL)
		pj_memcpy(&res->realm, realm, sizeof(pj_str_t));
	if (nonce != NULL)
		pj_memcpy(&res->nonce, nonce, sizeof(pj_str_t));
	if (uri != NULL)
		pj_memcpy(&res->uri, uri, sizeof(pj_str_t));
	if (response != NULL)
		pj_memcpy(&res->response, response, sizeof(pj_str_t));
	else {
		PJ_LOG(2, (__FILE__,"you should add response"));
	}
	if (algorithm != NULL)
		pj_memcpy(&res->algorithm, algorithm, sizeof(pj_str_t));
	if (cnonce != NULL)
		pj_memcpy(&res->cnonce, cnonce, sizeof(pj_str_t));
	if (opaque != NULL)
		pj_memcpy(&res->opaque, opaque, sizeof(pj_str_t));
	if (qop != NULL)
		pj_memcpy(&res->qop, qop, sizeof(pj_str_t));
	if (nc != NULL)
		pj_memcpy(&res->nc, nc, sizeof(pj_str_t));
	return res;
}
