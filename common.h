/*
 * Copyright (c) 2004 Damien Miller <djm@mindrot.org>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _FLOWD_COMMON_H

#include "config.h"

#include <sys/cdefs.h>

#ifdef __GNU_LIBRARY__
# define _GNU_SOURCE
#endif

#include <sys/types.h>
#include <sys/poll.h>
#include <paths.h>
#include <unistd.h>

#if defined(HAVE_INTTYPES_H)
# include <inttypes.h>
#endif
#if defined(HAVE_STDINT_H)
# include <stdint.h>
#endif
#if defined(HAVE_ENDIAN_H)
# include <endian.h>
#endif

/* Prototypes for absent friends */
#ifndef HAVE_CLOSEFROM
void closefrom(int);
#endif
#ifndef HAVE_STRLCAT
size_t strlcat(char *, const char *, size_t);
#endif
#ifndef HAVE_STRLCPY
size_t strlcpy(char *, const char *, size_t);
#endif
#ifndef HAVE_SETPROCTITLE
void compat_init_setproctitle(int, char ***);
void setproctitle(const char *, ...);
#endif

#ifndef INFTIM
# define INFTIM			(-1)
#endif

#ifndef _PATH_DEVNULL
# define _PATH_DEVNULL		"/dev/null"
#endif

#if defined(__GNUC__)
# ifndef __dead
#  define __dead		__attribute__((__noreturn__))
# endif
# ifndef __packed
#  define __packed		__attribute__((__packed__))
# endif
#endif

#if !defined(HAVE_INT8_T) && defined(OUR_CFG_INT8_T)
typedef OUR_CFG_INT8_T int8_t;
#endif
#if !defined(HAVE_INT16_T) && defined(OUR_CFG_INT16_T)
typedef OUR_CFG_INT16_T int16_t;
#endif
#if !defined(HAVE_INT32_T) && defined(OUR_CFG_INT32_T)
typedef OUR_CFG_INT32_T int32_t;
#endif
#if !defined(HAVE_INT64_T) && defined(OUR_CFG_INT64_T)
typedef OUR_CFG_INT64_T int64_t;
#endif
#if !defined(HAVE_U_INT8_T) && defined(OUR_CFG_U_INT8_T)
typedef OUR_CFG_U_INT8_T u_int8_t;
#endif
#if !defined(HAVE_U_INT16_T) && defined(OUR_CFG_U_INT16_T)
typedef OUR_CFG_U_INT16_T u_int16_t;
#endif
#if !defined(HAVE_U_INT32_T) && defined(OUR_CFG_U_INT32_T)
typedef OUR_CFG_U_INT32_T u_int32_t;
#endif
#if !defined(HAVE_U_INT64_T) && defined(OUR_CFG_U_INT64_T)
typedef OUR_CFG_U_INT64_T u_int64_t;
#endif

#endif /* _FLOWD_COMMON_H */

