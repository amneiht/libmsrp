/*
 * lmsrp.h
 *
 *  Created on: Mar 4, 2021
 *      Author: amneiht
 */

#ifndef LMSRP_H_
#define LMSRP_H_

#include <pjlib.h>
#include <lmsrp/lmsrp_common.h>
#include <lmsrp/lmsrp_www_auth.h>
#include <lmsrp/lmsrp_auth_commom.h>
#include <lmsrp/lmsrp_authorization.h>
#include <lmsrp/lmsrp_info.h>
#include <lmsrp/lmsrp_status.h>
#include <lmsrp/lmsrp_byte_range.h>
#include <lmsrp/lmsrp_content_type.h>
#include <lmsrp/lmsrp_mess.h>
#include <lmsrp/lmsrp_stream.h>

typedef enum _lmsrp_transport {
	lmsrp_transport_udp, lmsrp_transport_tcp, lmsrp_transport_tls
} lmsrp_transport;

#endif /* LMSRP_H_ */
