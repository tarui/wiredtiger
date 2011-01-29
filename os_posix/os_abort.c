/*-
 * See the file LICENSE for redistribution information.
 *
 * Copyright (c) 2008-2011 WiredTiger, Inc.
 *	All rights reserved.
 *
 * $Id$
 */

#include "wt_internal.h"

/*
 * __wt_abort --
 *	Abort the process, dropping core.
 */
void
__wt_abort(ENV *env)
{
	__wt_msg(env, "aborting WiredTiger library");

	__wt_attach(env);

	abort();
	/* NOTREACHED */
}
