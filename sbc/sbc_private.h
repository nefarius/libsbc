/*
 * Bluetooth low-complexity, subband codec (SBC) library
 * Copyright (C) 2004-2010  Marcel Holtmann <marcel@holtmann.org>
 * Copyright (C) 2008-2010  Nokia Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */

#if defined(_MSC_VER)
#define SBC_EXPORT __declspec(dllexport)
#else
#define SBC_EXPORT __attribute__ ((visibility("default")))
#endif
