/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(C) 2022 Marvell.
 */

#include "cn9k_ethdev.h"
#include "cn9k_rx.h"

#if !defined(CNXK_DIS_TMPLT_FUNC)

#define R(name, flags) NIX_RX_RECV(cn9k_nix_recv_pkts_##name, flags)

NIX_RX_FASTPATH_MODES_112_127
#undef R

#endif
