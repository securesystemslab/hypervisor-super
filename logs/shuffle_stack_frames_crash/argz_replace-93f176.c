# 1 "<built-in>"
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/argz/argz_replace.c"
/* Copyright (C) 2002 by  Red Hat, Incorporated. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

#if 0 /* expanded by -frewrite-includes */
#include <errno.h>
#endif /* expanded by -frewrite-includes */
# 7 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/argz/argz_replace.c"
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/errno.h" 1 3
#ifndef __ERRNO_H__
#define __ERRNO_H__

#ifndef __error_t_defined
typedef int error_t;
#define __error_t_defined 1
#endif
# 8 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/errno.h" 3

#if 0 /* expanded by -frewrite-includes */
#include <sys/errno.h>
#endif /* expanded by -frewrite-includes */
# 9 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/errno.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/errno.h" 1 3
/* errno is not a global variable, because that would make using it
   non-reentrant.  Instead, its address is returned by the function
   __errno.  */

#ifndef _SYS_ERRNO_H_
#ifdef __cplusplus
extern "C" {
#endif
# 9 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/errno.h" 3
#define _SYS_ERRNO_H_

#if 0 /* expanded by -frewrite-includes */
#include <sys/reent.h>
#endif /* expanded by -frewrite-includes */
# 11 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/errno.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 1 3
/* This header file provides the reentrancy.  */

/* WARNING: All identifiers here must begin with an underscore.  This file is
   included by stdio.h and others and we therefore must only use identifiers
   in the namespace allotted to us.  */

#ifndef _SYS_REENT_H_
#ifdef __cplusplus
extern "C" {
#endif
# 11 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
#define _SYS_REENT_H_

#if 0 /* expanded by -frewrite-includes */
#include <_ansi.h>
#endif /* expanded by -frewrite-includes */
# 13 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */

#ifndef	_ANSIDECL_H_
#define	_ANSIDECL_H_

#if 0 /* expanded by -frewrite-includes */
#include <newlib.h>
#endif /* expanded by -frewrite-includes */
# 10 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/_ansi.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/depends/newlib/x86_64-vmm-elf/build/x86_64-vmm-elf/newlib/targ-include/newlib.h" 1 3
/* newlib.h.  Generated from newlib.hin by configure.  */
/* newlib.hin.  Manually edited from the output of autoheader to
   remove all PACKAGE_ macros which will collide with any user
   package using newlib header files and having its own package name,
   version, etc...  */
#ifndef __NEWLIB_H__

#define __NEWLIB_H__ 1

/* EL/IX level */
/* #undef _ELIX_LEVEL */

/* Newlib version */
#if 0 /* expanded by -frewrite-includes */
#include <_newlib_version.h>
#endif /* expanded by -frewrite-includes */
# 14 "/srv/bfbuild/hypervisor-super/build/depends/newlib/x86_64-vmm-elf/build/x86_64-vmm-elf/newlib/targ-include/newlib.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/depends/newlib/x86_64-vmm-elf/build/x86_64-vmm-elf/newlib/targ-include/_newlib_version.h" 1 3
/* _newlib_version.h.  Generated from _newlib_version.hin by configure.  */
/* Version macros for internal and downstream use. */
#ifndef _NEWLIB_VERSION_H__
#define _NEWLIB_VERSION_H__ 1

#define _NEWLIB_VERSION "3.0.0"
#define __NEWLIB__ 3
#define __NEWLIB_MINOR__ 0
#define __NEWLIB_PATCHLEVEL__ 0

#endif /* !_NEWLIB_VERSION_H__ */
# 12 "/srv/bfbuild/hypervisor-super/build/depends/newlib/x86_64-vmm-elf/build/x86_64-vmm-elf/newlib/targ-include/_newlib_version.h" 3

# 15 "/srv/bfbuild/hypervisor-super/build/depends/newlib/x86_64-vmm-elf/build/x86_64-vmm-elf/newlib/targ-include/newlib.h" 2 3

/* C99 formats support (such as %a, %zu, ...) in IO functions like
 * printf/scanf enabled */
/* #undef _WANT_IO_C99_FORMATS */

/* long long type support in IO functions like printf/scanf enabled */
/* #undef _WANT_IO_LONG_LONG */

/* Register application finalization function using atexit. */
/* #undef _WANT_REGISTER_FINI */

/* long double type support in IO functions like printf/scanf enabled */
/* #undef _WANT_IO_LONG_DOUBLE */

/* Positional argument support in printf functions enabled.  */
/* #undef _WANT_IO_POS_ARGS */

/* Optional reentrant struct support.  Used mostly on platforms with
   very restricted storage.  */
/* #undef _WANT_REENT_SMALL */

/* Multibyte supported */
/* #undef _MB_CAPABLE */

/* MB_LEN_MAX */
#define _MB_LEN_MAX 1

/* ICONV enabled */
#define _ICONV_ENABLED 1

/* Enable ICONV external CCS files loading capabilities */
/* #undef _ICONV_ENABLE_EXTERNAL_CCS */

/* Define if the linker supports .preinit_array/.init_array/.fini_array
 * sections.  */
#define HAVE_INITFINI_ARRAY 1

/* True if atexit() may dynamically allocate space for cleanup
   functions.  */
#define _ATEXIT_DYNAMIC_ALLOC 1

/* True if long double supported.  */
#define _HAVE_LONG_DOUBLE 1

/* Define if compiler supports -fno-tree-loop-distribute-patterns. */
/* #undef _HAVE_CC_INHIBIT_LOOP_TO_LIBCALL */

/* True if long double supported and it is equal to double.  */
/* #undef _LDBL_EQ_DBL */
 
/* Define if ivo supported in streamio.  */
#define _FVWRITE_IN_STREAMIO 1

/* Define if fseek functions support seek optimization.  */
#define _FSEEK_OPTIMIZATION 1

/* Define if wide char orientation is supported.  */
#define _WIDE_ORIENT 1

/* Define if unbuffered stream file optimization is supported.  */
#define _UNBUF_STREAM_OPT 1

/* Define if lite version of exit supported.  */
/* #undef _LITE_EXIT */

/* Define if declare atexit data as global.  */
/* #undef _REENT_GLOBAL_ATEXIT */

/* Define to move the stdio stream FILE objects out of struct _reent and make
   them global.  The stdio stream pointers of struct _reent are initialized to
   point to the global stdio FILE stream objects. */
/* #undef _WANT_REENT_GLOBAL_STDIO_STREAMS */

/* Define if small footprint nano-formatted-IO implementation used.  */
/* #undef _NANO_FORMATTED_IO */

/* Define if using retargetable functions for default lock routines.  */
/* #undef _RETARGETABLE_LOCKING */

/* Define to use type long for time_t.  */
/* #undef _WANT_USE_LONG_TIME_T */

/*
 * Iconv encodings enabled ("to" direction)
 */
/* #undef _ICONV_TO_ENCODING_BIG5 */
/* #undef _ICONV_TO_ENCODING_CP775 */
/* #undef _ICONV_TO_ENCODING_CP850 */
/* #undef _ICONV_TO_ENCODING_CP852 */
/* #undef _ICONV_TO_ENCODING_CP855 */
/* #undef _ICONV_TO_ENCODING_CP866 */
/* #undef _ICONV_TO_ENCODING_EUC_JP */
/* #undef _ICONV_TO_ENCODING_EUC_TW */
/* #undef _ICONV_TO_ENCODING_EUC_KR */
/* #undef _ICONV_TO_ENCODING_ISO_8859_1 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_10 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_11 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_13 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_14 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_15 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_2 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_3 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_4 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_5 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_6 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_7 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_8 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_9 */
/* #undef _ICONV_TO_ENCODING_ISO_IR_111 */
/* #undef _ICONV_TO_ENCODING_KOI8_R */
/* #undef _ICONV_TO_ENCODING_KOI8_RU */
/* #undef _ICONV_TO_ENCODING_KOI8_U */
/* #undef _ICONV_TO_ENCODING_KOI8_UNI */
/* #undef _ICONV_TO_ENCODING_UCS_2 */
/* #undef _ICONV_TO_ENCODING_UCS_2_INTERNAL */
/* #undef _ICONV_TO_ENCODING_UCS_2BE */
/* #undef _ICONV_TO_ENCODING_UCS_2LE */
/* #undef _ICONV_TO_ENCODING_UCS_4 */
/* #undef _ICONV_TO_ENCODING_UCS_4_INTERNAL */
/* #undef _ICONV_TO_ENCODING_UCS_4BE */
/* #undef _ICONV_TO_ENCODING_UCS_4LE */
/* #undef _ICONV_TO_ENCODING_US_ASCII */
/* #undef _ICONV_TO_ENCODING_UTF_16 */
/* #undef _ICONV_TO_ENCODING_UTF_16BE */
/* #undef _ICONV_TO_ENCODING_UTF_16LE */
/* #undef _ICONV_TO_ENCODING_UTF_8 */
/* #undef _ICONV_TO_ENCODING_WIN_1250 */
/* #undef _ICONV_TO_ENCODING_WIN_1251 */
/* #undef _ICONV_TO_ENCODING_WIN_1252 */
/* #undef _ICONV_TO_ENCODING_WIN_1253 */
/* #undef _ICONV_TO_ENCODING_WIN_1254 */
/* #undef _ICONV_TO_ENCODING_WIN_1255 */
/* #undef _ICONV_TO_ENCODING_WIN_1256 */
/* #undef _ICONV_TO_ENCODING_WIN_1257 */
/* #undef _ICONV_TO_ENCODING_WIN_1258 */

/*
 * Iconv encodings enabled ("from" direction)
 */
/* #undef _ICONV_FROM_ENCODING_BIG5 */
/* #undef _ICONV_FROM_ENCODING_CP775 */
/* #undef _ICONV_FROM_ENCODING_CP850 */
/* #undef _ICONV_FROM_ENCODING_CP852 */
/* #undef _ICONV_FROM_ENCODING_CP855 */
/* #undef _ICONV_FROM_ENCODING_CP866 */
/* #undef _ICONV_FROM_ENCODING_EUC_JP */
/* #undef _ICONV_FROM_ENCODING_EUC_TW */
/* #undef _ICONV_FROM_ENCODING_EUC_KR */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_1 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_10 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_11 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_13 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_14 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_15 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_2 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_3 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_4 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_5 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_6 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_7 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_8 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_9 */
/* #undef _ICONV_FROM_ENCODING_ISO_IR_111 */
/* #undef _ICONV_FROM_ENCODING_KOI8_R */
/* #undef _ICONV_FROM_ENCODING_KOI8_RU */
/* #undef _ICONV_FROM_ENCODING_KOI8_U */
/* #undef _ICONV_FROM_ENCODING_KOI8_UNI */
/* #undef _ICONV_FROM_ENCODING_UCS_2 */
/* #undef _ICONV_FROM_ENCODING_UCS_2_INTERNAL */
/* #undef _ICONV_FROM_ENCODING_UCS_2BE */
/* #undef _ICONV_FROM_ENCODING_UCS_2LE */
/* #undef _ICONV_FROM_ENCODING_UCS_4 */
/* #undef _ICONV_FROM_ENCODING_UCS_4_INTERNAL */
/* #undef _ICONV_FROM_ENCODING_UCS_4BE */
/* #undef _ICONV_FROM_ENCODING_UCS_4LE */
/* #undef _ICONV_FROM_ENCODING_US_ASCII */
/* #undef _ICONV_FROM_ENCODING_UTF_16 */
/* #undef _ICONV_FROM_ENCODING_UTF_16BE */
/* #undef _ICONV_FROM_ENCODING_UTF_16LE */
/* #undef _ICONV_FROM_ENCODING_UTF_8 */
/* #undef _ICONV_FROM_ENCODING_WIN_1250 */
/* #undef _ICONV_FROM_ENCODING_WIN_1251 */
/* #undef _ICONV_FROM_ENCODING_WIN_1252 */
/* #undef _ICONV_FROM_ENCODING_WIN_1253 */
/* #undef _ICONV_FROM_ENCODING_WIN_1254 */
/* #undef _ICONV_FROM_ENCODING_WIN_1255 */
/* #undef _ICONV_FROM_ENCODING_WIN_1256 */
/* #undef _ICONV_FROM_ENCODING_WIN_1257 */
/* #undef _ICONV_FROM_ENCODING_WIN_1258 */

#endif /* !__NEWLIB_H__ */
# 206 "/srv/bfbuild/hypervisor-super/build/depends/newlib/x86_64-vmm-elf/build/x86_64-vmm-elf/newlib/targ-include/newlib.h" 3

# 11 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/_ansi.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/config.h>
#endif /* expanded by -frewrite-includes */
# 11 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/_ansi.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 1 3
#ifndef __SYS_CONFIG_H__
#define __SYS_CONFIG_H__

#if 0 /* expanded by -frewrite-includes */
#include <machine/ieeefp.h>  /* floating point macros */
#endif /* expanded by -frewrite-includes */
# 4 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 1 3
#ifndef __IEEE_BIG_ENDIAN
#ifndef __IEEE_LITTLE_ENDIAN

/* This file can define macros to choose variations of the IEEE float
   format:

   _FLT_LARGEST_EXPONENT_IS_NORMAL

	Defined if the float format uses the largest exponent for finite
	numbers rather than NaN and infinity representations.  Such a
	format cannot represent NaNs or infinities at all, but it's FLT_MAX
	is twice the IEEE value.

   _FLT_NO_DENORMALS

	Defined if the float format does not support IEEE denormals.  Every
	float with a zero exponent is taken to be a zero representation.
 
   ??? At the moment, there are no equivalent macros above for doubles and
   the macros are not fully supported by --enable-newlib-hw-fp.

   __IEEE_BIG_ENDIAN

        Defined if the float format is big endian.  This is mutually exclusive
        with __IEEE_LITTLE_ENDIAN.

   __IEEE_LITTLE_ENDIAN
 
        Defined if the float format is little endian.  This is mutually exclusive
        with __IEEE_BIG_ENDIAN.

   Note that one of __IEEE_BIG_ENDIAN or __IEEE_LITTLE_ENDIAN must be specified for a
   platform or error will occur.

   __IEEE_BYTES_LITTLE_ENDIAN

        This flag is used in conjunction with __IEEE_BIG_ENDIAN to describe a situation 
	whereby multiple words of an IEEE floating point are in big endian order, but the
	words themselves are little endian with respect to the bytes.

   _DOUBLE_IS_32BITS 

        This is used on platforms that support double by using the 32-bit IEEE
        float type.

   _FLOAT_ARG

        This represents what type a float arg is passed as.  It is used when the type is
        not promoted to double.
	

   __OBSOLETE_MATH_DEFAULT

	Default value for __OBSOLETE_MATH if that's not set by the user.
	It should be set here based on predefined feature macros.

   __OBSOLETE_MATH

	If set to 1 then some new math code will be disabled and older libm
	code will be used instead.  This is necessary because the new math
	code does not support all targets, it assumes that the toolchain has
	ISO C99 support (hexfloat literals, standard fenv semantics), the
	target has IEEE-754 conforming binary32 float and binary64 double
	(not mixed endian) representation, standard SNaN representation,
	double and single precision arithmetics has similar latency and it
	has no legacy SVID matherr support, only POSIX errno and fenv
	exception based error handling.
*/

#if (defined(__arm__) || defined(__thumb__)) && !defined(__MAVERICK__)
/* ARM traditionally used big-endian words; and within those words the
   byte ordering was big or little endian depending upon the target.
   Modern floating-point formats are naturally ordered; in this case
   __VFP_FP__ will be defined, even if soft-float.  */
#ifdef __VFP_FP__
# ifdef __ARMEL__
#  define __IEEE_LITTLE_ENDIAN
# else
# 79 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#  define __IEEE_BIG_ENDIAN
# endif
# 81 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
# if __ARM_FP & 0x8
#  define __OBSOLETE_MATH_DEFAULT 0
# endif
# 84 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#else
# 85 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
# define __IEEE_BIG_ENDIAN
# ifdef __ARMEL__
#  define __IEEE_BYTES_LITTLE_ENDIAN
# endif
# 89 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 90 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 91 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#if defined (__aarch64__)
#if defined (__AARCH64EL__)
#define __IEEE_LITTLE_ENDIAN
#else
# 96 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 98 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __OBSOLETE_MATH_DEFAULT 0
#endif
# 100 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __epiphany__
#define __IEEE_LITTLE_ENDIAN
#define Sudden_Underflow 1
#endif
# 105 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __hppa__
#define __IEEE_BIG_ENDIAN
#endif
# 109 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __nds32__
#ifdef __big_endian__
#define __IEEE_BIG_ENDIAN
#else
# 114 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 116 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 117 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __SPU__
#define __IEEE_BIG_ENDIAN

#define isfinite(__y) \
	(__extension__ ({int __cy; \
		(sizeof (__y) == sizeof (float))  ? (1) : \
		(__cy = fpclassify(__y)) != FP_INFINITE && __cy != FP_NAN;}))

#define isinf(__x) ((sizeof (__x) == sizeof (float))  ?  (0) : __isinfd(__x))
#define isnan(__x) ((sizeof (__x) == sizeof (float))  ?  (0) : __isnand(__x))

/*
 * Macros for use in ieeefp.h. We can't just define the real ones here
 * (like those above) as we have name space issues when this is *not*
 * included via generic the ieeefp.h.
 */
#define __ieeefp_isnanf(x)	0
#define __ieeefp_isinff(x)	0
#define __ieeefp_finitef(x)	1
#endif
# 138 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __sparc__
#ifdef __LITTLE_ENDIAN_DATA__
#define __IEEE_LITTLE_ENDIAN
#else
# 143 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 145 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 146 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__m68k__) || defined(__mc68000__)
#define __IEEE_BIG_ENDIAN
#endif
# 150 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__mc68hc11__) || defined(__mc68hc12__) || defined(__mc68hc1x__)
#define __IEEE_BIG_ENDIAN
#ifdef __HAVE_SHORT_DOUBLE__
# define _DOUBLE_IS_32BITS
#endif
# 156 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 157 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#if defined (__H8300__) || defined (__H8300H__) || defined (__H8300S__) || defined (__H8500__) || defined (__H8300SX__)
#define __IEEE_BIG_ENDIAN
#define _FLOAT_ARG float
#define _DOUBLE_IS_32BITS
#endif
# 163 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#if defined (__xc16x__) || defined (__xc16xL__) || defined (__xc16xS__)
#define __IEEE_LITTLE_ENDIAN
#define _FLOAT_ARG float
#define _DOUBLE_IS_32BITS
#endif
# 169 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3


#ifdef __sh__
#ifdef __LITTLE_ENDIAN__
#define __IEEE_LITTLE_ENDIAN
#else
# 175 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 177 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#if defined(__SH2E__) || defined(__SH3E__) || defined(__SH4_SINGLE_ONLY__) || defined(__SH2A_SINGLE_ONLY__)
#define _DOUBLE_IS_32BITS
#endif
# 180 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 181 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef _AM29K
#define __IEEE_BIG_ENDIAN
#endif
# 185 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef _WIN32
#define __IEEE_LITTLE_ENDIAN
#endif
# 189 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __i386__
#define __IEEE_LITTLE_ENDIAN
#endif
# 193 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __riscv
#define __IEEE_LITTLE_ENDIAN
#endif
# 197 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __i960__
#define __IEEE_LITTLE_ENDIAN
#endif
# 201 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __lm32__
#define __IEEE_BIG_ENDIAN
#endif
# 205 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __M32R__
#define __IEEE_BIG_ENDIAN
#endif
# 209 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#if defined(_C4x) || defined(_C3x)
#define __IEEE_BIG_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 214 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __TMS320C6X__
#ifdef _BIG_ENDIAN
#define __IEEE_BIG_ENDIAN
#else
# 219 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 221 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 222 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __TIC80__
#define __IEEE_LITTLE_ENDIAN
#endif
# 226 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MIPSEL__
#define __IEEE_LITTLE_ENDIAN
#endif
# 230 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#ifdef __MIPSEB__
#define __IEEE_BIG_ENDIAN
#endif
# 233 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MMIX__
#define __IEEE_BIG_ENDIAN
#endif
# 237 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __D30V__
#define __IEEE_BIG_ENDIAN
#endif
# 241 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

/* necv70 was __IEEE_LITTLE_ENDIAN. */

#ifdef __W65__
#define __IEEE_LITTLE_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 248 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__Z8001__) || defined(__Z8002__)
#define __IEEE_BIG_ENDIAN
#endif
# 252 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __m88k__
#define __IEEE_BIG_ENDIAN
#endif
# 256 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mn10300__
#define __IEEE_LITTLE_ENDIAN
#endif
# 260 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mn10200__
#define __IEEE_LITTLE_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 265 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __v800
#define __IEEE_LITTLE_ENDIAN
#endif
# 269 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __v850
#define __IEEE_LITTLE_ENDIAN
#endif
# 273 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __D10V__
#define __IEEE_BIG_ENDIAN
#if __DOUBLE__ == 32
#define _DOUBLE_IS_32BITS
#endif
# 279 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 280 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __PPC__
#if (defined(_BIG_ENDIAN) && _BIG_ENDIAN) || (defined(_AIX) && _AIX)
#define __IEEE_BIG_ENDIAN
#else
# 285 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#if (defined(_LITTLE_ENDIAN) && _LITTLE_ENDIAN) || (defined(__sun__) && __sun__) || (defined(_WIN32) && _WIN32)
#define __IEEE_LITTLE_ENDIAN
#endif
# 288 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 289 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 290 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __xstormy16__
#define __IEEE_LITTLE_ENDIAN
#endif
# 294 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __arc__
#ifdef __big_endian__
#define __IEEE_BIG_ENDIAN
#else
# 299 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 301 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 302 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __CRX__
#define __IEEE_LITTLE_ENDIAN
#endif
# 306 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __fr30__
#define __IEEE_BIG_ENDIAN
#endif
# 310 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __FT32__
#define __IEEE_LITTLE_ENDIAN
#endif
# 314 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mcore__
#define __IEEE_BIG_ENDIAN
#endif
# 318 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mt__
#define __IEEE_BIG_ENDIAN
#endif
# 322 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __frv__
#define __IEEE_BIG_ENDIAN
#endif
# 326 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __moxie__
#ifdef __MOXIE_BIG_ENDIAN__
#define __IEEE_BIG_ENDIAN
#else
# 331 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 333 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 334 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __ia64__
#ifdef __BIG_ENDIAN__
#define __IEEE_BIG_ENDIAN
#else
# 339 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 341 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 342 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __AVR__
#define __IEEE_LITTLE_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 347 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__or1k__) || defined(__OR1K__) || defined(__OR1KND__)
#define __IEEE_BIG_ENDIAN
#endif
# 351 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __IP2K__
#define __IEEE_BIG_ENDIAN
#define __SMALL_BITFIELDS
#define _DOUBLE_IS_32BITS
#endif
# 357 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __iq2000__
#define __IEEE_BIG_ENDIAN
#endif
# 361 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MAVERICK__
#ifdef __ARMEL__
#  define __IEEE_LITTLE_ENDIAN
#else  /* must be __ARMEB__ */
# 366 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#  define __IEEE_BIG_ENDIAN
#endif /* __ARMEL__ */
# 368 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif /* __MAVERICK__ */
# 369 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __m32c__
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS
#endif
# 374 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __CRIS__
#define __IEEE_LITTLE_ENDIAN
#endif
# 378 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __BFIN__
#define __IEEE_LITTLE_ENDIAN
#endif
# 382 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __x86_64__
#define __IEEE_LITTLE_ENDIAN
#endif
# 386 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mep__
#ifdef __LITTLE_ENDIAN__
#define __IEEE_LITTLE_ENDIAN
#else
# 391 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 393 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 394 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MICROBLAZE__
#ifndef __MICROBLAZEEL__
#define __IEEE_BIG_ENDIAN
#else
# 399 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 401 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 402 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MSP430__
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS	/* 16 Bit INT */
#endif
# 407 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __RL78__
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS	/* 16 Bit INT */
#ifndef __RL78_64BIT_DOUBLES__
#define _DOUBLE_IS_32BITS
#endif
# 414 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 415 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __RX__

#ifdef __RX_BIG_ENDIAN__
#define __IEEE_BIG_ENDIAN
#else
# 421 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 423 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifndef __RX_64BIT_DOUBLES__
#define _DOUBLE_IS_32BITS
#endif
# 427 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __RX_16BIT_INTS__
#define __SMALL_BITFIELDS
#endif
# 431 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#endif
# 433 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#if (defined(__CR16__) || defined(__CR16C__) ||defined(__CR16CP__))
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS	/* 16 Bit INT */
#endif
# 438 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __NIOS2__
# ifdef __nios2_big_endian__
#  define __IEEE_BIG_ENDIAN
# else
# 443 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#  define __IEEE_LITTLE_ENDIAN
# endif
# 445 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 446 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __VISIUM__
#define __IEEE_BIG_ENDIAN
#endif
# 450 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifndef __OBSOLETE_MATH_DEFAULT
/* Use old math code by default.  */
#define __OBSOLETE_MATH_DEFAULT 1
#endif
# 455 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#ifndef __OBSOLETE_MATH
#define __OBSOLETE_MATH __OBSOLETE_MATH_DEFAULT
#endif
# 458 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifndef __IEEE_BIG_ENDIAN
#ifndef __IEEE_LITTLE_ENDIAN
#error Endianess not declared!!
#endif /* not __IEEE_LITTLE_ENDIAN */
# 463 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif /* not __IEEE_BIG_ENDIAN */
# 464 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#endif /* not __IEEE_LITTLE_ENDIAN */
# 466 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif /* not __IEEE_BIG_ENDIAN */
# 467 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

# 5 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/features.h>	/* POSIX defs */
#endif /* expanded by -frewrite-includes */
# 5 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 1 3
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2014.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */

#ifndef _SYS_FEATURES_H
#define _SYS_FEATURES_H

#ifdef __cplusplus
extern "C" {
#endif
# 27 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3

#if 0 /* expanded by -frewrite-includes */
#include <_newlib_version.h>
#endif /* expanded by -frewrite-includes */
# 28 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
# 29 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3

/* Macro to test version of GCC.  Returns 0 for non-GCC or too old GCC. */
#ifndef __GNUC_PREREQ
# if defined __GNUC__ && defined __GNUC_MINOR__
#  define __GNUC_PREREQ(maj, min) \
	((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
# else
# 36 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#  define __GNUC_PREREQ(maj, min) 0
# endif
# 38 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#endif /* __GNUC_PREREQ */
# 39 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
/* Version with trailing underscores for BSD compatibility. */
#define	__GNUC_PREREQ__(ma, mi)	__GNUC_PREREQ(ma, mi)


/*
 * Feature test macros control which symbols are exposed by the system
 * headers.  Any of these must be defined before including any headers.
 *
 * __STRICT_ANSI__ (defined by gcc -ansi, -std=c90, -std=c99, or -std=c11)
 *	ISO C
 *
 * _POSIX_SOURCE (deprecated by _POSIX_C_SOURCE=1)
 * _POSIX_C_SOURCE >= 1
 * 	POSIX.1-1990
 *
 * _POSIX_C_SOURCE >= 2
 * 	POSIX.2-1992
 *
 * _POSIX_C_SOURCE >= 199309L
 * 	POSIX.1b-1993 Real-time extensions
 *
 * _POSIX_C_SOURCE >= 199506L
 * 	POSIX.1c-1995 Threads extensions
 *
 * _POSIX_C_SOURCE >= 200112L
 * 	POSIX.1-2001 and C99
 *
 * _POSIX_C_SOURCE >= 200809L
 * 	POSIX.1-2008
 *
 * _XOPEN_SOURCE
 *	POSIX.1-1990 and XPG4
 *
 * _XOPEN_SOURCE_EXTENDED
 *	SUSv1 (POSIX.2-1992 plus XPG4v2)
 *
 * _XOPEN_SOURCE >= 500
 *	SUSv2 (POSIX.1c-1995 plus XSI)
 *
 * _XOPEN_SOURCE >= 600
 *	SUSv3 (POSIX.1-2001 plus XSI) and C99
 *
 * _XOPEN_SOURCE >= 700
 *	SUSv4 (POSIX.1-2008 plus XSI)
 *
 * _ISOC99_SOURCE or gcc -std=c99 or g++
 * 	ISO C99
 *
 * _ISOC11_SOURCE or gcc -std=c11 or g++ -std=c++11
 * 	ISO C11
 *
 * _ATFILE_SOURCE (implied by _POSIX_C_SOURCE >= 200809L)
 *	"at" functions
 *
 * _LARGEFILE_SOURCE (deprecated by _XOPEN_SOURCE >= 500)
 *	fseeko, ftello
 *
 * _GNU_SOURCE
 * 	All of the above plus GNU extensions
 *
 * _BSD_SOURCE (deprecated by _DEFAULT_SOURCE)
 * _SVID_SOURCE (deprecated by _DEFAULT_SOURCE)
 * _DEFAULT_SOURCE (or none of the above)
 * 	POSIX-1.2008 with BSD and SVr4 extensions
 *
 * _FORTIFY_SOURCE = 1 or 2
 * 	Object Size Checking function wrappers
 */

#ifdef _GNU_SOURCE
#undef _ATFILE_SOURCE
#define	_ATFILE_SOURCE		1
#undef	_DEFAULT_SOURCE
#define	_DEFAULT_SOURCE		1
#undef _ISOC99_SOURCE
#define	_ISOC99_SOURCE		1
#undef _ISOC11_SOURCE
#define	_ISOC11_SOURCE		1
#undef _POSIX_SOURCE
#define	_POSIX_SOURCE		1
#undef _POSIX_C_SOURCE
#define	_POSIX_C_SOURCE		200809L
#undef _XOPEN_SOURCE
#define	_XOPEN_SOURCE		700
#undef _XOPEN_SOURCE_EXTENDED
#define	_XOPEN_SOURCE_EXTENDED	1
#endif /* _GNU_SOURCE */
# 126 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3

#if defined(_BSD_SOURCE) || defined(_SVID_SOURCE) || \
   (!defined(__STRICT_ANSI__) && !defined(_ANSI_SOURCE) && \
   !defined(_ISOC99_SOURCE) && !defined(_POSIX_SOURCE) && \
   !defined(_POSIX_C_SOURCE) && !defined(_XOPEN_SOURCE))
#undef _DEFAULT_SOURCE
#define	_DEFAULT_SOURCE		1
#endif
# 134 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3

#if defined(_DEFAULT_SOURCE)
#undef _POSIX_SOURCE
#define	_POSIX_SOURCE		1
#undef _POSIX_C_SOURCE
#define	_POSIX_C_SOURCE		200809L
#endif
# 141 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3

#if !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE) && \
  ((!defined(__STRICT_ANSI__) && !defined(_ANSI_SOURCE)) || \
   (_XOPEN_SOURCE - 0) >= 500)
#define	_POSIX_SOURCE		1
#if !defined(_XOPEN_SOURCE) || (_XOPEN_SOURCE - 0) >= 700
#define	_POSIX_C_SOURCE		200809L
#elif (_XOPEN_SOURCE - 0) >= 600
# 149 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define	_POSIX_C_SOURCE		200112L
#elif (_XOPEN_SOURCE - 0) >= 500
# 151 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define	_POSIX_C_SOURCE		199506L
#elif (_XOPEN_SOURCE - 0) < 500
# 153 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define	_POSIX_C_SOURCE		2
#endif
# 155 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#endif
# 156 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3

#if defined(_POSIX_C_SOURCE) && _POSIX_C_SOURCE >= 200809
#undef _ATFILE_SOURCE
#define	_ATFILE_SOURCE		1
#endif
# 161 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3

/*
 * The following private macros are used throughout the headers to control
 * which symbols should be exposed.  They are for internal use only, as
 * indicated by the leading double underscore, and must never be used outside
 * of these headers.
 *
 * __POSIX_VISIBLE
 * 	any version of POSIX.1; enabled by default, or with _POSIX_SOURCE,
 * 	any value of _POSIX_C_SOURCE, or _XOPEN_SOURCE >= 500.
 *
 * __POSIX_VISIBLE >= 2
 * 	POSIX.2-1992; enabled by default, with _POSIX_C_SOURCE >= 2,
 * 	or _XOPEN_SOURCE >= 500.
 *
 * __POSIX_VISIBLE >= 199309
 * 	POSIX.1b-1993; enabled by default, with _POSIX_C_SOURCE >= 199309L,
 * 	or _XOPEN_SOURCE >= 500.
 *
 * __POSIX_VISIBLE >= 199506
 * 	POSIX.1c-1995; enabled by default, with _POSIX_C_SOURCE >= 199506L,
 * 	or _XOPEN_SOURCE >= 500.
 *
 * __POSIX_VISIBLE >= 200112
 * 	POSIX.1-2001; enabled by default, with _POSIX_C_SOURCE >= 200112L,
 * 	or _XOPEN_SOURCE >= 600.
 *
 * __POSIX_VISIBLE >= 200809
 * 	POSIX.1-2008; enabled by default, with _POSIX_C_SOURCE >= 200809L,
 * 	or _XOPEN_SOURCE >= 700.
 *
 * __XSI_VISIBLE
 *	XPG4 XSI extensions; enabled with any version of _XOPEN_SOURCE.
 *
 * __XSI_VISIBLE >= 4
 *	SUSv1 XSI extensions; enabled with both _XOPEN_SOURCE and
 * 	_XOPEN_SOURCE_EXTENDED together.
 *
 * __XSI_VISIBLE >= 500
 *	SUSv2 XSI extensions; enabled with _XOPEN_SOURCE >= 500.
 *
 * __XSI_VISIBLE >= 600
 *	SUSv3 XSI extensions; enabled with _XOPEN_SOURCE >= 600.
 *
 * __XSI_VISIBLE >= 700
 *	SUSv4 XSI extensions; enabled with _XOPEN_SOURCE >= 700.
 *
 * __ISO_C_VISIBLE >= 1999
 * 	ISO C99; enabled with gcc -std=c99 or newer (on by default since GCC 5),
 * 	any version of C++, or with _ISOC99_SOURCE, _POSIX_C_SOURCE >= 200112L,
 * 	or _XOPEN_SOURCE >= 600.
 *
 * __ISO_C_VISIBLE >= 2011
 * 	ISO C11; enabled with gcc -std=c11 or newer (on by default since GCC 5),
 * 	g++ -std=c++11 or newer (on by default since GCC 6), or with
 * 	_ISOC11_SOURCE.
 *
 * __ATFILE_VISIBLE
 *	"at" functions; enabled by default, with _ATFILE_SOURCE,
 * 	_POSIX_C_SOURCE >= 200809L, or _XOPEN_SOURCE >= 700.
 *
 * __LARGEFILE_VISIBLE
 *	fseeko, ftello; enabled with _LARGEFILE_SOURCE or _XOPEN_SOURCE >= 500.
 *
 * __BSD_VISIBLE
 * 	BSD extensions; enabled by default, or with _BSD_SOURCE.
 *
 * __SVID_VISIBLE
 * 	SVr4 extensions; enabled by default, or with _SVID_SOURCE.
 *
 * __MISC_VISIBLE
 * 	Extensions found in both BSD and SVr4 (shorthand for
 * 	(__BSD_VISIBLE || __SVID_VISIBLE)), or newlib-specific
 * 	extensions; enabled by default.
 *
 * __GNU_VISIBLE
 * 	GNU extensions; enabled with _GNU_SOURCE.
 *
 * __SSP_FORTIFY_LEVEL
 * 	Object Size Checking; defined to 0 (off), 1, or 2.
 *
 * In all cases above, "enabled by default" means either by defining
 * _DEFAULT_SOURCE, or by not defining any of the public feature test macros.
 */

#ifdef _ATFILE_SOURCE
#define	__ATFILE_VISIBLE	1
#else
# 249 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define	__ATFILE_VISIBLE	0
#endif
# 251 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3

#ifdef _DEFAULT_SOURCE
#define	__BSD_VISIBLE		1
#else
# 255 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define	__BSD_VISIBLE		0
#endif
# 257 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3

#ifdef _GNU_SOURCE
#define	__GNU_VISIBLE		1
#else
# 261 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define	__GNU_VISIBLE		0
#endif
# 263 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3

#if defined(_ISOC11_SOURCE) || \
  (__STDC_VERSION__ - 0) >= 201112L || (__cplusplus - 0) >= 201103L
#define	__ISO_C_VISIBLE		2011
#elif defined(_ISOC99_SOURCE) || (_POSIX_C_SOURCE - 0) >= 200112L || \
  (__STDC_VERSION__ - 0) >= 199901L || defined(__cplusplus)
# 269 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define	__ISO_C_VISIBLE		1999
#else
# 271 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define	__ISO_C_VISIBLE		1990
#endif
# 273 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3

#if defined(_LARGEFILE_SOURCE) || (_XOPEN_SOURCE - 0) >= 500
#define	__LARGEFILE_VISIBLE	1
#else
# 277 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define	__LARGEFILE_VISIBLE	0
#endif
# 279 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3

#ifdef _DEFAULT_SOURCE
#define	__MISC_VISIBLE		1
#else
# 283 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define	__MISC_VISIBLE		0
#endif
# 285 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3

#if (_POSIX_C_SOURCE - 0) >= 200809L
#define	__POSIX_VISIBLE		200809
#elif (_POSIX_C_SOURCE - 0) >= 200112L
# 289 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define	__POSIX_VISIBLE		200112
#elif (_POSIX_C_SOURCE - 0) >= 199506L
# 291 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define	__POSIX_VISIBLE		199506
#elif (_POSIX_C_SOURCE - 0) >= 199309L
# 293 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define	__POSIX_VISIBLE		199309
#elif (_POSIX_C_SOURCE - 0) >= 2 || defined(_XOPEN_SOURCE)
# 295 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define	__POSIX_VISIBLE		199209
#elif defined(_POSIX_SOURCE) || defined(_POSIX_C_SOURCE)
# 297 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define	__POSIX_VISIBLE		199009
#else
# 299 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define	__POSIX_VISIBLE		0
#endif
# 301 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3

#ifdef _DEFAULT_SOURCE
#define	__SVID_VISIBLE		1
#else
# 305 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define	__SVID_VISIBLE		0
#endif
# 307 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3

#if (_XOPEN_SOURCE - 0) >= 700
#define	__XSI_VISIBLE		700
#elif (_XOPEN_SOURCE - 0) >= 600
# 311 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define	__XSI_VISIBLE		600
#elif (_XOPEN_SOURCE - 0) >= 500
# 313 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define	__XSI_VISIBLE		500
#elif defined(_XOPEN_SOURCE) && defined(_XOPEN_SOURCE_EXTENDED)
# 315 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define	__XSI_VISIBLE		4
#elif defined(_XOPEN_SOURCE)
# 317 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define	__XSI_VISIBLE		1
#else
# 319 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define	__XSI_VISIBLE		0
#endif
# 321 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3

#if _FORTIFY_SOURCE > 0 && !defined(__cplusplus) && !defined(__lint__) && \
   (__OPTIMIZE__ > 0 || defined(__clang__)) && __GNUC_PREREQ__(4, 1)
#  if _FORTIFY_SOURCE > 1
#    define __SSP_FORTIFY_LEVEL 2
#  else
# 327 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#    define __SSP_FORTIFY_LEVEL 1
#  endif
# 329 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#else
# 330 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#  define __SSP_FORTIFY_LEVEL 0
#endif
# 332 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3

/* RTEMS adheres to POSIX -- 1003.1b with some features from annexes.  */

#ifdef __rtems__
#define _POSIX_JOB_CONTROL     		1
#define _POSIX_SAVED_IDS       		1
#define _POSIX_VERSION			199309L
#define _POSIX_ASYNCHRONOUS_IO		1
#define _POSIX_FSYNC			1
#define _POSIX_MAPPED_FILES		1
#define _POSIX_MEMLOCK			1
#define _POSIX_MEMLOCK_RANGE		1
#define _POSIX_MEMORY_PROTECTION	1
#define _POSIX_MESSAGE_PASSING		1
#define _POSIX_MONOTONIC_CLOCK		200112L
#define _POSIX_CLOCK_SELECTION		200112L
#define _POSIX_PRIORITIZED_IO		1
#define _POSIX_PRIORITY_SCHEDULING	1
#define _POSIX_REALTIME_SIGNALS		1
#define _POSIX_SEMAPHORES		1
#define _POSIX_SHARED_MEMORY_OBJECTS	1
#define _POSIX_SYNCHRONIZED_IO		1
#define _POSIX_TIMERS			1
#define _POSIX_BARRIERS                 200112L
#define _POSIX_READER_WRITER_LOCKS      200112L
#define _POSIX_SPIN_LOCKS               200112L


/* In P1003.1b but defined by drafts at least as early as P1003.1c/D10  */
#define _POSIX_THREADS				1
#define _POSIX_THREAD_ATTR_STACKADDR		1
#define _POSIX_THREAD_ATTR_STACKSIZE		1
#define _POSIX_THREAD_PRIORITY_SCHEDULING	1
#define _POSIX_THREAD_PRIO_INHERIT		1
#define _POSIX_THREAD_PRIO_PROTECT		1
#define _POSIX_THREAD_PROCESS_SHARED		1
#define _POSIX_THREAD_SAFE_FUNCTIONS		1

/* P1003.4b/D8 defines the constants below this comment. */
#define _POSIX_SPAWN				1
#define _POSIX_TIMEOUTS				1
#define _POSIX_CPUTIME				1
#define _POSIX_THREAD_CPUTIME			1
#define _POSIX_SPORADIC_SERVER			1
#define _POSIX_THREAD_SPORADIC_SERVER		1
#define _POSIX_DEVICE_CONTROL			1
#define _POSIX_DEVCTL_DIRECTION			1
#define _POSIX_INTERRUPT_CONTROL		1
#define _POSIX_ADVISORY_INFO			1

/* UNIX98 added some new pthread mutex attributes */
#define _UNIX98_THREAD_MUTEX_ATTRIBUTES         1

/* POSIX 1003.26-2003 defined device control method */
#define _POSIX_26_VERSION			200312L

#endif
# 389 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3

/* XMK loosely adheres to POSIX -- 1003.1 */
#ifdef __XMK__
#define _POSIX_THREADS				1
#define _POSIX_THREAD_PRIORITY_SCHEDULING	1
#endif
# 395 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3


#ifdef __svr4__
# define _POSIX_JOB_CONTROL     1
# define _POSIX_SAVED_IDS       1
# define _POSIX_VERSION 199009L
#endif
# 402 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3

#ifdef __CYGWIN__

#if __POSIX_VISIBLE >= 200809
#define _POSIX_VERSION				200809L
#define _POSIX2_VERSION				200809L
#elif __POSIX_VISIBLE >= 200112
# 409 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define _POSIX_VERSION				200112L
#define _POSIX2_VERSION				200112L
#elif __POSIX_VISIBLE >= 199506
# 412 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define _POSIX_VERSION				199506L
#define _POSIX2_VERSION				199506L
#elif __POSIX_VISIBLE >= 199309
# 415 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define _POSIX_VERSION				199309L
#define _POSIX2_VERSION				199209L
#elif __POSIX_VISIBLE >= 199209
# 418 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define _POSIX_VERSION				199009L
#define _POSIX2_VERSION				199209L
#elif __POSIX_VISIBLE
# 421 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define _POSIX_VERSION				199009L
#endif
# 423 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#if __XSI_VISIBLE >= 4
#define _XOPEN_VERSION				__XSI_VISIBLE
#endif
# 426 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3

#define _POSIX_ADVISORY_INFO			200809L
/* #define _POSIX_ASYNCHRONOUS_IO		    -1 */
#define _POSIX_BARRIERS				200809L
#define _POSIX_CHOWN_RESTRICTED			     1
#define _POSIX_CLOCK_SELECTION			200809L
#define _POSIX_CPUTIME				200809L
#define _POSIX_FSYNC				200809L
#define _POSIX_IPV6				200809L
#define _POSIX_JOB_CONTROL			     1
#define _POSIX_MAPPED_FILES			200809L
/* #define _POSIX_MEMLOCK			    -1 */
#define _POSIX_MEMLOCK_RANGE			200809L
#define _POSIX_MEMORY_PROTECTION		200809L
#define _POSIX_MESSAGE_PASSING			200809L
#define _POSIX_MONOTONIC_CLOCK			200809L
#define _POSIX_NO_TRUNC				     1
/* #define _POSIX_PRIORITIZED_IO		    -1 */
#define _POSIX_PRIORITY_SCHEDULING		200809L
#define _POSIX_RAW_SOCKETS			200809L
#define _POSIX_READER_WRITER_LOCKS		200809L
#define _POSIX_REALTIME_SIGNALS			200809L
#define _POSIX_REGEXP				     1
#define _POSIX_SAVED_IDS			     1
#define _POSIX_SEMAPHORES			200809L
#define _POSIX_SHARED_MEMORY_OBJECTS		200809L
#define _POSIX_SHELL				     1
#define _POSIX_SPAWN				200809L
#define _POSIX_SPIN_LOCKS			200809L
/* #define _POSIX_SPORADIC_SERVER		    -1 */
#define _POSIX_SYNCHRONIZED_IO			200809L
#define _POSIX_THREAD_ATTR_STACKADDR		200809L
#define _POSIX_THREAD_ATTR_STACKSIZE		200809L
#define _POSIX_THREAD_CPUTIME			200809L
/* #define _POSIX_THREAD_PRIO_INHERIT		    -1 */
/* #define _POSIX_THREAD_PRIO_PROTECT		    -1 */
#define _POSIX_THREAD_PRIORITY_SCHEDULING	200809L
#define _POSIX_THREAD_PROCESS_SHARED		200809L
#define _POSIX_THREAD_SAFE_FUNCTIONS		200809L
/* #define _POSIX_THREAD_SPORADIC_SERVER	    -1 */
#define _POSIX_THREADS				200809L
#define _POSIX_TIMEOUTS				200809L
#define _POSIX_TIMERS				200809L
/* #define _POSIX_TRACE				    -1 */
/* #define _POSIX_TRACE_EVENT_FILTER		    -1 */
/* #define _POSIX_TRACE_INHERIT			    -1 */
/* #define _POSIX_TRACE_LOG			    -1 */
/* #define _POSIX_TYPED_MEMORY_OBJECTS		    -1 */
#define _POSIX_VDISABLE				   '\0'

#if __POSIX_VISIBLE >= 2
#define _POSIX2_C_VERSION			_POSIX2_VERSION
#define _POSIX2_C_BIND				_POSIX2_VERSION
#define _POSIX2_C_DEV				_POSIX2_VERSION
#define _POSIX2_CHAR_TERM			_POSIX2_VERSION
/* #define _POSIX2_FORT_DEV			    -1 */
/* #define _POSIX2_FORT_RUN			    -1 */
/* #define _POSIX2_LOCALEDEF			    -1 */
/* #define _POSIX2_PBS				    -1 */
/* #define _POSIX2_PBS_ACCOUNTING		    -1 */
/* #define _POSIX2_PBS_CHECKPOINT		    -1 */
/* #define _POSIX2_PBS_LOCATE			    -1 */
/* #define _POSIX2_PBS_MESSAGE			    -1 */
/* #define _POSIX2_PBS_TRACK			    -1 */
#define _POSIX2_SW_DEV				_POSIX2_VERSION
#define _POSIX2_UPE				_POSIX2_VERSION
#endif /* __POSIX_VISIBLE >= 2 */
# 493 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3

#define _POSIX_V6_ILP32_OFF32			    -1
#ifdef __LP64__
#define _POSIX_V6_ILP32_OFFBIG			    -1
#define _POSIX_V6_LP64_OFF64			     1
#define _POSIX_V6_LPBIG_OFFBIG			     1
#else
# 500 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define _POSIX_V6_ILP32_OFFBIG			     1
#define _POSIX_V6_LP64_OFF64			    -1
#define _POSIX_V6_LPBIG_OFFBIG			    -1
#endif
# 504 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#define _POSIX_V7_ILP32_OFF32			_POSIX_V6_ILP32_OFF32
#define _POSIX_V7_ILP32_OFFBIG			_POSIX_V6_ILP32_OFFBIG
#define _POSIX_V7_LP64_OFF64			_POSIX_V6_LP64_OFF64
#define _POSIX_V7_LPBIG_OFFBIG			_POSIX_V6_LPBIG_OFFBIG
#define _XBS5_ILP32_OFF32			_POSIX_V6_ILP32_OFF32
#define _XBS5_ILP32_OFFBIG			_POSIX_V6_ILP32_OFFBIG
#define _XBS5_LP64_OFF64			_POSIX_V6_LP64_OFF64
#define _XBS5_LPBIG_OFFBIG			_POSIX_V6_LPBIG_OFFBIG

#if __XSI_VISIBLE
#define _XOPEN_CRYPT				     1
#define _XOPEN_ENH_I18N				     1
/* #define _XOPEN_LEGACY			    -1 */
/* #define _XOPEN_REALTIME			    -1 */
/* #define _XOPEN_REALTIME_THREADS		    -1 */
#define _XOPEN_SHM				     1
/* #define _XOPEN_STREAMS			    -1 */
/* #define _XOPEN_UNIX				    -1 */
#endif /* __XSI_VISIBLE */
# 523 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3

/* The value corresponds to UNICODE version 5.2, which is the current
   state of newlib's wide char conversion functions. */
#define __STDC_ISO_10646__ 200910L

#endif /* __CYGWIN__ */
# 529 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3

#ifdef __cplusplus
}
#endif
# 533 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
#endif /* _SYS_FEATURES_H */
# 534 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/features.h" 3
# 6 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 2 3

#ifdef __aarch64__
#define MALLOC_ALIGNMENT 16
#endif
# 10 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

/* exceptions first */
#if defined(__H8500__) || defined(__W65__)
#define __SMALL_BITFIELDS
/* ???  This conditional is true for the h8500 and the w65, defining H8300
   in those cases probably isn't the right thing to do.  */
#define H8300 1
#endif
# 18 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

/* 16 bit integer machines */
#if defined(__Z8001__) || defined(__Z8002__) || defined(__H8500__) || defined(__W65__) || defined (__mn10200__) || defined (__AVR__)

#undef INT_MAX
#undef UINT_MAX
#define INT_MAX 32767
#define UINT_MAX 65535
#endif
# 27 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#if defined (__H8300__) || defined (__H8300H__) || defined(__H8300S__) || defined (__H8300SX__)
#define __SMALL_BITFIELDS
#define H8300 1
#undef INT_MAX
#undef UINT_MAX
#define INT_MAX __INT_MAX__
#define UINT_MAX (__INT_MAX__ * 2U + 1)
#endif
# 36 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#if (defined(__CR16__) || defined(__CR16C__) ||defined(__CR16CP__))
#ifndef __INT32__
#define __SMALL_BITFIELDS      
#undef INT_MAX
#undef UINT_MAX
#define INT_MAX 32767
#define UINT_MAX (__INT_MAX__ * 2U + 1)
#else /* INT32 */
# 45 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
#undef INT_MAX
#undef UINT_MAX
#define INT_MAX 2147483647
#define UINT_MAX (__INT_MAX__ * 2U + 1)
#endif /* INT32 */
# 50 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#endif /* CR16C */
# 52 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#if defined (__xc16x__) || defined (__xc16xL__) || defined (__xc16xS__)
#define __SMALL_BITFIELDS
#endif
# 56 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#ifdef __W65__
#define __SMALL_BITFIELDS
#endif
# 60 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#if defined(__D10V__)
#define __SMALL_BITFIELDS
#undef INT_MAX
#undef UINT_MAX
#define INT_MAX __INT_MAX__
#define UINT_MAX (__INT_MAX__ * 2U + 1)
#define _POINTER_INT short
#endif
# 69 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#if defined(__mc68hc11__) || defined(__mc68hc12__) || defined(__mc68hc1x__)
#undef INT_MAX
#undef UINT_MAX
#define INT_MAX __INT_MAX__
#define UINT_MAX (__INT_MAX__ * 2U + 1)
#define _POINTER_INT short
#endif
# 77 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#if defined(__m68k__) || defined(__mc68000__) || defined(__riscv)
#define _READ_WRITE_RETURN_TYPE _ssize_t
#endif
# 81 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#ifdef ___AM29K__
#define _FLOAT_RET double
#endif
# 85 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#ifdef __i386__
#ifndef __unix__
/* in other words, go32 */
#define _FLOAT_RET double
#endif
# 91 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
#if defined(__linux__) || defined(__RDOS__)
/* we want the reentrancy structure to be returned by a function */
#define __DYNAMIC_REENT__
#define HAVE_GETDATE
#define _READ_WRITE_RETURN_TYPE _ssize_t
#define __LARGE64_FILES 1
/* we use some glibc header files so turn on glibc large file feature */
#define _LARGEFILE64_SOURCE 1
#endif
# 100 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
#endif
# 101 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#ifdef __mn10200__
#define __SMALL_BITFIELDS
#endif
# 105 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#ifdef __AVR__
#define __SMALL_BITFIELDS
#define _POINTER_INT short
#endif
# 110 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#ifdef __v850
#define __ATTRIBUTE_IMPURE_PTR__ __attribute__((__sda__))
#endif
# 114 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

/* For the PowerPC eabi, force the _impure_ptr to be in .sdata */
#if defined(__PPC__)
#if defined(_CALL_SYSV)
#define __ATTRIBUTE_IMPURE_PTR__ __attribute__((__section__(".sdata")))
#endif
# 120 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
#ifdef __SPE__
#define _LONG_DOUBLE double
#endif
# 123 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
#endif
# 124 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

/* Configure small REENT structure for Xilinx MicroBlaze platforms */
#if defined (__MICROBLAZE__)
#ifndef _REENT_SMALL
#define _REENT_SMALL
#endif
# 130 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
/* Xilinx XMK uses Unix98 mutex */
#ifdef __XMK__
#define _UNIX98_THREAD_MUTEX_ATTRIBUTES
#endif
# 134 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
#endif
# 135 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#if defined(__mips__) && !defined(__rtems__)
#define __ATTRIBUTE_IMPURE_PTR__ __attribute__((__section__(".sdata")))
#endif
# 139 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#ifdef __xstormy16__
#define __SMALL_BITFIELDS
#undef INT_MAX
#undef UINT_MAX
#define INT_MAX __INT_MAX__
#define UINT_MAX (__INT_MAX__ * 2U + 1)
#define MALLOC_ALIGNMENT 8
#define _POINTER_INT short
#define __BUFSIZ__ 16
#define _REENT_SMALL
#endif
# 151 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#if defined __MSP430__
#ifndef _REENT_SMALL
#define _REENT_SMALL
#endif
# 156 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#define __BUFSIZ__ 256
#define __SMALL_BITFIELDS

#ifdef __MSP430X_LARGE__
#define _POINTER_INT long
#else
# 163 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
#define _POINTER_INT int
#endif
# 165 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
#endif
# 166 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#ifdef __m32c__
#define __SMALL_BITFIELDS
#undef INT_MAX
#undef UINT_MAX
#define INT_MAX __INT_MAX__
#define UINT_MAX (__INT_MAX__ * 2U + 1)
#define MALLOC_ALIGNMENT 8
#if defined(__r8c_cpu__) || defined(__m16c_cpu__)
#define _POINTER_INT short
#else
# 177 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
#define _POINTER_INT long
#endif
# 179 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
#define __BUFSIZ__ 16
#define _REENT_SMALL
#endif /* __m32c__ */
# 182 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#ifdef __SPU__
#define MALLOC_ALIGNMENT 16
#define __CUSTOM_FILE_IO__
#endif
# 187 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#if defined(__or1k__) || defined(__or1knd__)
#define __DYNAMIC_REENT__
#endif
# 191 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

/* This block should be kept in sync with GCC's limits.h.  The point
   of having these definitions here is to not include limits.h, which
   would pollute the user namespace, while still using types of the
   the correct widths when deciding how to define __int32_t and
   __int64_t.  */
#ifndef __INT_MAX__
# ifdef INT_MAX
#  define __INT_MAX__ INT_MAX
# else
# 201 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
#  define __INT_MAX__ 2147483647
# endif
# 203 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
#endif
# 204 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#ifndef __LONG_MAX__
# ifdef LONG_MAX
#  define __LONG_MAX__ LONG_MAX
# else
# 209 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
#  if defined (__alpha__) || (defined (__sparc__) && defined(__arch64__)) \
      || defined (__sparcv9)
#   define __LONG_MAX__ 9223372036854775807L
#  else
# 213 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
#   define __LONG_MAX__ 2147483647L
#  endif /* __alpha__ || sparc64 */
# 215 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
# endif
# 216 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
#endif
# 217 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
/* End of block that should be kept in sync with GCC's limits.h.  */

#ifndef _POINTER_INT
#define _POINTER_INT long
#endif
# 222 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#ifdef __frv__
#define __ATTRIBUTE_IMPURE_PTR__ __attribute__((__section__(".sdata")))
#endif
# 226 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
#undef __RAND_MAX
#if __INT_MAX__ == 32767
#define __RAND_MAX 32767
#else
# 230 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
#define __RAND_MAX 0x7fffffff
#endif
# 232 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#if defined(__CYGWIN__)
#if 0 /* expanded by -frewrite-includes */
#include <cygwin/config.h>
#endif /* expanded by -frewrite-includes */
# 234 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
# 235 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
#endif
# 236 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#if defined(__rtems__)
#define __FILENAME_MAX__ 255
#define _READ_WRITE_RETURN_TYPE _ssize_t
#define __DYNAMIC_REENT__
#define _REENT_GLOBAL_ATEXIT
#define _REENT_GLOBAL_STDIO_STREAMS
#endif
# 244 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#ifndef __EXPORT
#define __EXPORT
#endif
# 248 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#ifndef __IMPORT
#define __IMPORT
#endif
# 252 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

/* Define return type of read/write routines.  In POSIX, the return type
   for read()/write() is "ssize_t" but legacy newlib code has been using
   "int" for some time.  If not specified, "int" is defaulted.  */
#ifndef _READ_WRITE_RETURN_TYPE
#define _READ_WRITE_RETURN_TYPE int
#endif
# 259 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
/* Define `count' parameter of read/write routines.  In POSIX, the `count'
   parameter is "size_t" but legacy newlib code has been using "int" for some
   time.  If not specified, "int" is defaulted.  */
#ifndef _READ_WRITE_BUFSIZE_TYPE
#define _READ_WRITE_BUFSIZE_TYPE int
#endif
# 265 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#ifndef __WCHAR_MAX__
#if __INT_MAX__ == 32767 || defined (_WIN32)
#define __WCHAR_MAX__ 0xffffu
#endif
# 270 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
#endif
# 271 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

/* See if small reent asked for at configuration time and
   is not chosen by the platform by default.  */
#ifdef _WANT_REENT_SMALL
#ifndef _REENT_SMALL
#define _REENT_SMALL
#endif
# 278 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
#endif
# 279 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#ifdef _WANT_REENT_GLOBAL_STDIO_STREAMS
#ifndef _REENT_GLOBAL_STDIO_STREAMS
#define _REENT_GLOBAL_STDIO_STREAMS
#endif
# 284 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
#endif
# 285 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#ifdef _WANT_USE_LONG_TIME_T
#ifndef _USE_LONG_TIME_T
#define _USE_LONG_TIME_T
#endif
# 290 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
#endif
# 291 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

/* If _MB_EXTENDED_CHARSETS_ALL is set, we want all of the extended
   charsets.  The extended charsets add a few functions and a couple
   of tables of a few K each. */
#ifdef _MB_EXTENDED_CHARSETS_ALL
#define _MB_EXTENDED_CHARSETS_ISO 1
#define _MB_EXTENDED_CHARSETS_WINDOWS 1
#endif
# 299 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3

#endif /* __SYS_CONFIG_H__ */
# 301 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/config.h" 3
# 12 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/_ansi.h" 2 3

/*  ISO C++.  */

#ifdef __cplusplus
#if !(defined(_BEGIN_STD_C) && defined(_END_STD_C))
#ifdef _HAVE_STD_CXX
#define _BEGIN_STD_C namespace std { extern "C" {
#define _END_STD_C  } }
#else
# 21 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/_ansi.h" 3
#define _BEGIN_STD_C extern "C" {
#define _END_STD_C  }
#endif
# 24 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/_ansi.h" 3
#if __GNUC_PREREQ (3, 3)
#define _NOTHROW __attribute__ ((__nothrow__))
#else
# 27 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/_ansi.h" 3
#define _NOTHROW throw()
#endif
# 29 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/_ansi.h" 3
#endif
# 30 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/_ansi.h" 3
#else
# 31 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/_ansi.h" 3
#define _BEGIN_STD_C
#define _END_STD_C
#define _NOTHROW
#endif
# 35 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/_ansi.h" 3

#ifndef _LONG_DOUBLE
#define _LONG_DOUBLE long double
#endif
# 39 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/_ansi.h" 3

/* Support gcc's __attribute__ facility.  */

#ifdef __GNUC__
#define _ATTRIBUTE(attrs) __attribute__ (attrs)
#else
# 45 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/_ansi.h" 3
#define _ATTRIBUTE(attrs)
#endif
# 47 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/_ansi.h" 3

/*  The traditional meaning of 'extern inline' for GCC is not
  to emit the function body unless the address is explicitly
  taken.  However this behaviour is changing to match the C99
  standard, which uses 'extern inline' to indicate that the
  function body *must* be emitted.  Likewise, a function declared
  without either 'extern' or 'static' defaults to extern linkage
  (C99 6.2.2p5), and the compiler may choose whether to use the
  inline version or call the extern linkage version (6.7.4p6).
  If we are using GCC, but do not have the new behaviour, we need
  to use extern inline; if we are using a new GCC with the
  C99-compatible behaviour, or a non-GCC compiler (which we will
  have to hope is C99, since there is no other way to achieve the
  effect of omitting the function if it isn't referenced) we use
  'static inline', which c99 defines to mean more-or-less the same
  as the Gnu C 'extern inline'.  */
#if defined(__GNUC__) && !defined(__GNUC_STDC_INLINE__)
/* We're using GCC, but without the new C99-compatible behaviour.  */
#define _ELIDABLE_INLINE extern __inline__ _ATTRIBUTE ((__always_inline__))
#else
# 67 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/_ansi.h" 3
/* We're using GCC in C99 mode, or an unknown compiler which
  we just have to hope obeys the C99 semantics of inline.  */
#define _ELIDABLE_INLINE static __inline__
#endif
# 71 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/_ansi.h" 3

#if __GNUC_PREREQ (3, 1)
#define _NOINLINE		__attribute__ ((__noinline__))
#define _NOINLINE_STATIC	_NOINLINE static
#else
# 76 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/_ansi.h" 3
/* On non-GNU compilers and GCC prior to version 3.1 the compiler can't be
   trusted not to inline if it is static. */
#define _NOINLINE
#define _NOINLINE_STATIC
#endif
# 81 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/_ansi.h" 3

#endif /* _ANSIDECL_H_ */
# 83 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/_ansi.h" 3
# 14 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 14 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
# 1 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#if !defined(__STDDEF_H) || defined(__need_ptrdiff_t) ||                       \
    defined(__need_size_t) || defined(__need_wchar_t) ||                       \
    defined(__need_NULL) || defined(__need_wint_t)

#if !defined(__need_ptrdiff_t) && !defined(__need_size_t) &&                   \
    !defined(__need_wchar_t) && !defined(__need_NULL) &&                       \
    !defined(__need_wint_t)
/* Always define miscellaneous pieces when modules are available. */
#if !__has_feature(modules)
#define __STDDEF_H
#endif
# 37 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 44 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_ptrdiff_t)
#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 51 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 53 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 55 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_size_t)
#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 62 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 64 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 66 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 76 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 78 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif /* defined(__need_STDDEF_H_misc) */
# 79 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_wchar_t)
#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 89 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif
# 90 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 92 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif
# 93 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 95 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_NULL)
#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 102 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 104 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#else
# 105 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 107 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 112 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif
# 113 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 115 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 118 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
# 1 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/__stddef_max_align_t.h" 1 3 4
/*===---- __stddef_max_align_t.h - Definition of max_align_t for modules ---===
 *
 * Copyright (c) 2014 Chandler Carruth
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#ifndef __CLANG_MAX_ALIGN_T_DEFINED
#define __CLANG_MAX_ALIGN_T_DEFINED

#if defined(_MSC_VER)
typedef double max_align_t;
#elif defined(__APPLE__)
# 32 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/__stddef_max_align_t.h" 3 4
typedef long double max_align_t;
#else
# 34 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/__stddef_max_align_t.h" 3 4
// Define 'max_align_t' to match the GCC definition.
typedef struct {
  long long __clang_max_align_nonce1
      __attribute__((__aligned__(__alignof__(long long))));
  long double __clang_max_align_nonce2
      __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
#endif
# 42 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/__stddef_max_align_t.h" 3 4

#endif
# 44 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/__stddef_max_align_t.h" 3 4
# 119 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 2 3 4
#endif
# 120 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 123 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 132 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 134 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 136 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#endif
# 138 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
# 15 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_types.h>
#endif /* expanded by -frewrite-includes */
# 15 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 1 3
/* ANSI C namespace clean utility typedefs */

/* This file defines various typedefs needed by the system calls that support
   the C library.  Basically, they're just the POSIX versions with an '_'
   prepended.  Targets shall use <machine/_types.h> to define their own
   internal types if desired.

   There are three define patterns used for type definitions.  Lets assume
   xyz_t is a user type.

   The internal type definition uses __machine_xyz_t_defined.  It is defined by
   <machine/_types.h> to disable a default definition in <sys/_types.h>. It
   must not be used in other files.

   User type definitions are guarded by __xyz_t_defined in glibc and
   _XYZ_T_DECLARED in BSD compatible systems.
*/

#ifndef	_SYS__TYPES_H
#define _SYS__TYPES_H

#if 0 /* expanded by -frewrite-includes */
#include <newlib.h>
#endif /* expanded by -frewrite-includes */
# 22 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
# 23 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/config.h>
#endif /* expanded by -frewrite-includes */
# 23 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
# 24 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <machine/_types.h>
#endif /* expanded by -frewrite-includes */
# 24 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_types.h" 1 3
/*
 *  $Id$
 */

#ifndef _MACHINE__TYPES_H
#define _MACHINE__TYPES_H
#if 0 /* expanded by -frewrite-includes */
#include <machine/_default_types.h>
#endif /* expanded by -frewrite-includes */
# 7 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_types.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 1 3
/*
 *  $Id$
 */

#ifndef _MACHINE__DEFAULT_TYPES_H
#define _MACHINE__DEFAULT_TYPES_H

#if 0 /* expanded by -frewrite-includes */
#include <sys/features.h>
#endif /* expanded by -frewrite-includes */
# 8 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
# 9 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3

/*
 * Guess on types by examining *_MIN / *_MAX defines.
 */
#if __GNUC_PREREQ (3, 3)
/* GCC >= 3.3.0 has __<val>__ implicitly defined. */
#define __EXP(x) __##x##__
#else
# 17 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
/* Fall back to POSIX versions from <limits.h> */
#define __EXP(x) x
#if 0 /* expanded by -frewrite-includes */
#include <limits.h>
#endif /* expanded by -frewrite-includes */
# 19 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
# 20 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
#endif
# 21 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3

/* Check if "long long" is 64bit wide */
/* Modern GCCs provide __LONG_LONG_MAX__, SUSv3 wants LLONG_MAX */
#if ( defined(__LONG_LONG_MAX__) && (__LONG_LONG_MAX__ > 0x7fffffff) ) \
  || ( defined(LLONG_MAX) && (LLONG_MAX > 0x7fffffff) )
#define __have_longlong64 1
#endif
# 28 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3

/* Check if "long" is 64bit or 32bit wide */
#if __EXP(LONG_MAX) > 0x7fffffff
#define __have_long64 1
#elif __EXP(LONG_MAX) == 0x7fffffff && !defined(__SPU__)
# 33 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
#define __have_long32 1
#endif
# 35 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3

#ifdef __cplusplus
extern "C" {
#endif
# 39 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT8_TYPE__
typedef __INT8_TYPE__ __int8_t;
#ifdef __UINT8_TYPE__
typedef __UINT8_TYPE__ __uint8_t;
#else
# 45 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT8_TYPE__ __uint8_t;
#endif
# 47 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
#define ___int8_t_defined 1
#elif __EXP(SCHAR_MAX) == 0x7f
# 49 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef signed char __int8_t ;
typedef unsigned char __uint8_t ;
#define ___int8_t_defined 1
#endif
# 53 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT16_TYPE__
typedef __INT16_TYPE__ __int16_t;
#ifdef __UINT16_TYPE__
typedef __UINT16_TYPE__ __uint16_t;
#else
# 59 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT16_TYPE__ __uint16_t;
#endif
# 61 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
#define ___int16_t_defined 1
#elif __EXP(INT_MAX) == 0x7fff
# 63 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef signed int __int16_t;
typedef unsigned int __uint16_t;
#define ___int16_t_defined 1
#elif __EXP(SHRT_MAX) == 0x7fff
# 67 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef signed short __int16_t;
typedef unsigned short __uint16_t;
#define ___int16_t_defined 1
#elif __EXP(SCHAR_MAX) == 0x7fff
# 71 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef signed char __int16_t;
typedef unsigned char __uint16_t;
#define ___int16_t_defined 1
#endif
# 75 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT32_TYPE__
typedef __INT32_TYPE__ __int32_t;
#ifdef __UINT32_TYPE__
typedef __UINT32_TYPE__ __uint32_t;
#else
# 81 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT32_TYPE__ __uint32_t;
#endif
# 83 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
#define ___int32_t_defined 1
#elif __EXP(INT_MAX) == 0x7fffffffL
# 85 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
#define ___int32_t_defined 1
#elif __EXP(LONG_MAX) == 0x7fffffffL
# 89 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef signed long __int32_t;
typedef unsigned long __uint32_t;
#define ___int32_t_defined 1
#elif __EXP(SHRT_MAX) == 0x7fffffffL
# 93 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef signed short __int32_t;
typedef unsigned short __uint32_t;
#define ___int32_t_defined 1
#elif __EXP(SCHAR_MAX) == 0x7fffffffL
# 97 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef signed char __int32_t;
typedef unsigned char __uint32_t;
#define ___int32_t_defined 1
#endif
# 101 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT64_TYPE__
typedef __INT64_TYPE__ __int64_t;
#ifdef __UINT64_TYPE__
typedef __UINT64_TYPE__ __uint64_t;
#else
# 107 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT64_TYPE__ __uint64_t;
#endif
# 109 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
#define ___int64_t_defined 1
#elif __EXP(LONG_MAX) > 0x7fffffff
# 111 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef signed long __int64_t;
typedef unsigned long __uint64_t;
#define ___int64_t_defined 1

/* GCC has __LONG_LONG_MAX__ */
#elif  defined(__LONG_LONG_MAX__) && (__LONG_LONG_MAX__ > 0x7fffffff)
# 117 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef signed long long __int64_t;
typedef unsigned long long __uint64_t;
#define ___int64_t_defined 1

/* POSIX mandates LLONG_MAX in <limits.h> */
#elif  defined(LLONG_MAX) && (LLONG_MAX > 0x7fffffff)
# 123 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef signed long long __int64_t;
typedef unsigned long long __uint64_t;
#define ___int64_t_defined 1

#elif  __EXP(INT_MAX) > 0x7fffffff
# 128 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef signed int __int64_t;
typedef unsigned int __uint64_t;
#define ___int64_t_defined 1
#endif
# 132 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT_LEAST8_TYPE__
typedef __INT_LEAST8_TYPE__ __int_least8_t;
#ifdef __UINT_LEAST8_TYPE__
typedef __UINT_LEAST8_TYPE__ __uint_least8_t;
#else
# 138 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT_LEAST8_TYPE__ __uint_least8_t;
#endif
# 140 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
#define ___int_least8_t_defined 1
#elif defined(___int8_t_defined)
# 142 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
#define ___int_least8_t_defined 1
#elif defined(___int16_t_defined)
# 146 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef __int16_t __int_least8_t;
typedef __uint16_t __uint_least8_t;
#define ___int_least8_t_defined 1
#elif defined(___int32_t_defined)
# 150 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef __int32_t __int_least8_t;
typedef __uint32_t __uint_least8_t;
#define ___int_least8_t_defined 1
#elif defined(___int64_t_defined)
# 154 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef __int64_t __int_least8_t;
typedef __uint64_t __uint_least8_t;
#define ___int_least8_t_defined 1
#endif
# 158 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT_LEAST16_TYPE__
typedef __INT_LEAST16_TYPE__ __int_least16_t;
#ifdef __UINT_LEAST16_TYPE__
typedef __UINT_LEAST16_TYPE__ __uint_least16_t;
#else
# 164 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT_LEAST16_TYPE__ __uint_least16_t;
#endif
# 166 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
#define ___int_least16_t_defined 1
#elif defined(___int16_t_defined)
# 168 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
#define ___int_least16_t_defined 1
#elif defined(___int32_t_defined)
# 172 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef __int32_t __int_least16_t;
typedef __uint32_t __uint_least16_t;
#define ___int_least16_t_defined 1
#elif defined(___int64_t_defined)
# 176 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef __int64_t __int_least16_t;
typedef __uint64_t __uint_least16_t;
#define ___int_least16_t_defined 1
#endif
# 180 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT_LEAST32_TYPE__
typedef __INT_LEAST32_TYPE__ __int_least32_t;
#ifdef __UINT_LEAST32_TYPE__
typedef __UINT_LEAST32_TYPE__ __uint_least32_t;
#else
# 186 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT_LEAST32_TYPE__ __uint_least32_t;
#endif
# 188 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
#define ___int_least32_t_defined 1
#elif defined(___int32_t_defined)
# 190 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
#define ___int_least32_t_defined 1
#elif defined(___int64_t_defined)
# 194 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef __int64_t __int_least32_t;
typedef __uint64_t __uint_least32_t;
#define ___int_least32_t_defined 1
#endif
# 198 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT_LEAST64_TYPE__
typedef __INT_LEAST64_TYPE__ __int_least64_t;
#ifdef __UINT_LEAST64_TYPE__
typedef __UINT_LEAST64_TYPE__ __uint_least64_t;
#else
# 204 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT_LEAST64_TYPE__ __uint_least64_t;
#endif
# 206 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
#define ___int_least64_t_defined 1
#elif defined(___int64_t_defined)
# 208 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;
#define ___int_least64_t_defined 1
#endif
# 212 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3

#if defined(__INTMAX_TYPE__)
typedef __INTMAX_TYPE__ __intmax_t;
#elif __have_longlong64
# 216 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef signed long long __intmax_t;
#else
# 218 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef signed long __intmax_t;
#endif
# 220 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3

#if defined(__UINTMAX_TYPE__)
typedef __UINTMAX_TYPE__ __uintmax_t;
#elif __have_longlong64
# 224 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned long long __uintmax_t;
#else
# 226 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned long __uintmax_t;
#endif
# 228 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INTPTR_TYPE__
typedef __INTPTR_TYPE__ __intptr_t;
#ifdef __UINTPTR_TYPE__
typedef __UINTPTR_TYPE__ __uintptr_t;
#else
# 234 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INTPTR_TYPE__ __uintptr_t;
#endif
# 236 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
#elif defined(__PTRDIFF_TYPE__)
# 237 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef __PTRDIFF_TYPE__ __intptr_t;
typedef unsigned __PTRDIFF_TYPE__ __uintptr_t;
#else
# 240 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef long __intptr_t;
typedef unsigned long __uintptr_t;
#endif
# 243 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3

#undef __EXP

#ifdef __cplusplus
}
#endif
# 249 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3

#endif /* _MACHINE__DEFAULT_TYPES_H */
# 251 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_default_types.h" 3
# 8 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_types.h" 2 3
#endif
# 9 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_types.h" 3
# 25 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/lock.h>
#endif /* expanded by -frewrite-includes */
# 25 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/lock.h" 1 3
#ifndef __SYS_LOCK_H__
#define __SYS_LOCK_H__

/* dummy lock routines for single-threaded aps */

#if 0 /* expanded by -frewrite-includes */
#include <newlib.h>
#endif /* expanded by -frewrite-includes */
# 6 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/lock.h" 3
# 7 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/lock.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <_ansi.h>
#endif /* expanded by -frewrite-includes */
# 7 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/lock.h" 3
# 8 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/lock.h" 3

#if !defined(_RETARGETABLE_LOCKING)

typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;

#define __LOCK_INIT(class,lock) static int lock = 0;
#define __LOCK_INIT_RECURSIVE(class,lock) static int lock = 0;
#define __lock_init(lock) ((void) 0)
#define __lock_init_recursive(lock) ((void) 0)
#define __lock_close(lock) ((void) 0)
#define __lock_close_recursive(lock) ((void) 0)
#define __lock_acquire(lock) ((void) 0)
#define __lock_acquire_recursive(lock) ((void) 0)
#define __lock_try_acquire(lock) ((void) 0)
#define __lock_try_acquire_recursive(lock) ((void) 0)
#define __lock_release(lock) ((void) 0)
#define __lock_release_recursive(lock) ((void) 0)

#else
# 28 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/lock.h" 3

#ifdef __cplusplus
extern "C" {
#endif
# 32 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/lock.h" 3

struct __lock;
typedef struct __lock * _LOCK_T;
#define _LOCK_RECURSIVE_T _LOCK_T

#define __LOCK_INIT(class,lock) extern struct __lock __lock_ ## lock; \
	class _LOCK_T lock = &__lock_ ## lock
#define __LOCK_INIT_RECURSIVE(class,lock) __LOCK_INIT(class,lock)

extern void __retarget_lock_init(_LOCK_T *lock);
#define __lock_init(lock) __retarget_lock_init(&lock)
extern void __retarget_lock_init_recursive(_LOCK_T *lock);
#define __lock_init_recursive(lock) __retarget_lock_init_recursive(&lock)
extern void __retarget_lock_close(_LOCK_T lock);
#define __lock_close(lock) __retarget_lock_close(lock)
extern void __retarget_lock_close_recursive(_LOCK_T lock);
#define __lock_close_recursive(lock) __retarget_lock_close_recursive(lock)
extern void __retarget_lock_acquire(_LOCK_T lock);
#define __lock_acquire(lock) __retarget_lock_acquire(lock)
extern void __retarget_lock_acquire_recursive(_LOCK_T lock);
#define __lock_acquire_recursive(lock) __retarget_lock_acquire_recursive(lock)
extern int __retarget_lock_try_acquire(_LOCK_T lock);
#define __lock_try_acquire(lock) __retarget_lock_try_acquire(lock)
extern int __retarget_lock_try_acquire_recursive(_LOCK_T lock);
#define __lock_try_acquire_recursive(lock) \
  __retarget_lock_try_acquire_recursive(lock)
extern void __retarget_lock_release(_LOCK_T lock);
#define __lock_release(lock) __retarget_lock_release(lock)
extern void __retarget_lock_release_recursive(_LOCK_T lock);
#define __lock_release_recursive(lock) __retarget_lock_release_recursive(lock)

#ifdef __cplusplus
}
#endif
# 66 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/lock.h" 3

#endif /* !defined(_RETARGETABLE_LOCKING) */
# 68 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/lock.h" 3

#endif /* __SYS_LOCK_H__ */
# 70 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/lock.h" 3
# 26 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 2 3

#ifndef __machine_blkcnt_t_defined
typedef long __blkcnt_t;
#endif
# 30 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_blksize_t_defined
typedef long __blksize_t;
#endif
# 34 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_fsblkcnt_t_defined
typedef __uint64_t __fsblkcnt_t;
#endif
# 38 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_fsfilcnt_t_defined
typedef __uint32_t __fsfilcnt_t;
#endif
# 42 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_off_t_defined
typedef long _off_t;
#endif
# 46 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

#if defined(__XMK__)
typedef signed char __pid_t;
#else
# 50 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
typedef int __pid_t;
#endif
# 52 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_dev_t_defined
typedef short __dev_t;
#endif
# 56 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_uid_t_defined
typedef unsigned short __uid_t;
#endif
# 60 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
#ifndef __machine_gid_t_defined
typedef unsigned short __gid_t;
#endif
# 63 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_id_t_defined
typedef __uint32_t __id_t;
#endif
# 67 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_ino_t_defined
#if (defined(__i386__) && (defined(GO32) || defined(__MSDOS__))) || \
    defined(__sparc__) || defined(__SPU__)
typedef unsigned long __ino_t;
#else
# 73 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
typedef unsigned short __ino_t;
#endif
# 75 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
#endif
# 76 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_mode_t_defined
#if defined(__i386__) && (defined(GO32) || defined(__MSDOS__))
typedef int __mode_t;
#else
# 81 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
#if defined(__sparc__) && !defined(__sparc_v9__)
#ifdef __svr4__
typedef unsigned long __mode_t;
#else
# 85 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
typedef unsigned short __mode_t;
#endif
# 87 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
#else
# 88 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
typedef __uint32_t __mode_t;
#endif
# 90 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
#endif
# 91 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
#endif
# 92 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_off64_t_defined
__extension__ typedef long long _off64_t;
#endif
# 96 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

#if defined(__CYGWIN__) && !defined(__LP64__)
typedef _off64_t __off_t;
#else
# 100 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
typedef _off_t __off_t;
#endif
# 102 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

typedef _off64_t __loff_t;

#ifndef __machine_key_t_defined
typedef long __key_t;
#endif
# 108 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

/*
 * We need fpos_t for the following, but it doesn't have a leading "_",
 * so we use _fpos_t instead.
 */
#ifndef __machine_fpos_t_defined
typedef long _fpos_t;		/* XXX must match off_t in <sys/types.h> */
				/* (and must be `long' for now) */
#endif
# 117 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

#ifdef __LARGE64_FILES
#ifndef __machine_fpos64_t_defined
typedef _off64_t _fpos64_t;
#endif
# 122 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
#endif
# 123 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

/* Defined by GCC provided <stddef.h> */
#undef __size_t

#ifndef __machine_size_t_defined
#ifdef __SIZE_TYPE__
typedef __SIZE_TYPE__ __size_t;
#else
# 131 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
#if defined(__INT_MAX__) && __INT_MAX__ == 2147483647
typedef unsigned int __size_t;
#else
# 134 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
typedef unsigned long __size_t;
#endif
# 136 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
#endif
# 137 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
#endif
# 138 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_ssize_t_defined
#ifdef __SIZE_TYPE__
/* If __SIZE_TYPE__ is defined (gcc) we define ssize_t based on size_t.
   We simply change "unsigned" to "signed" for this single definition
   to make sure ssize_t and size_t only differ by their signedness. */
#define unsigned signed
typedef __SIZE_TYPE__ _ssize_t;
#undef unsigned
#else
# 148 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
#if defined(__INT_MAX__) && __INT_MAX__ == 2147483647
typedef int _ssize_t;
#else
# 151 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
typedef long _ssize_t;
#endif
# 153 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
#endif
# 154 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
#endif
# 155 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

typedef _ssize_t __ssize_t;

#define __need_wint_t
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 159 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
# 1 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#if !defined(__STDDEF_H) || defined(__need_ptrdiff_t) ||                       \
    defined(__need_size_t) || defined(__need_wchar_t) ||                       \
    defined(__need_NULL) || defined(__need_wint_t)

#if !defined(__need_ptrdiff_t) && !defined(__need_size_t) &&                   \
    !defined(__need_wchar_t) && !defined(__need_NULL) &&                       \
    !defined(__need_wint_t)
/* Always define miscellaneous pieces when modules are available. */
#if !__has_feature(modules)
#define __STDDEF_H
#endif
# 37 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 44 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_ptrdiff_t)
#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 51 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 53 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 55 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_size_t)
#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 62 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 64 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 66 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 76 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 78 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif /* defined(__need_STDDEF_H_misc) */
# 79 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_wchar_t)
#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 89 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif
# 90 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 92 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif
# 93 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 95 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_NULL)
#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 102 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 104 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#else
# 105 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 107 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 112 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif
# 113 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 115 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 118 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
# 119 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif
# 120 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 123 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 132 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 134 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 136 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#endif
# 138 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
# 160 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 2 3

#ifndef __machine_mbstate_t_defined
/* Conversion state information.  */
typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;		/* Value so far.  */
} _mbstate_t;
#endif
# 173 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_flock_t_defined
typedef _LOCK_RECURSIVE_T _flock_t;
#endif
# 177 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_iconv_t_defined
/* Iconv descriptor type */
typedef void *_iconv_t;
#endif
# 182 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_clock_t_defined
#define	_CLOCK_T_	unsigned long	/* clock() */
#endif
# 186 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

typedef	_CLOCK_T_	__clock_t;

#if defined(_USE_LONG_TIME_T) || __LONG_MAX__ > 0x7fffffffL
#define	_TIME_T_ long
#else
# 192 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
#define	_TIME_T_ __int_least64_t
#endif
# 194 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
typedef	_TIME_T_	__time_t;

#define	_CLOCKID_T_ 	unsigned long
typedef	_CLOCKID_T_	__clockid_t;

#define	_TIMER_T_	unsigned long
typedef	_TIMER_T_	__timer_t;

#ifndef __machine_sa_family_t_defined
typedef	__uint8_t	__sa_family_t;
#endif
# 205 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_socklen_t_defined
typedef	__uint32_t	__socklen_t;
#endif
# 209 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

typedef	unsigned short	__nlink_t;
typedef	long		__suseconds_t;	/* microseconds (signed) */
typedef	unsigned long	__useconds_t;	/* microseconds (unsigned) */

#ifdef __GNUCLIKE_BUILTIN_VARARGS
typedef	__builtin_va_list	__va_list;
#else
# 217 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
typedef	char *			__va_list;
#endif /* __GNUCLIKE_BUILTIN_VARARGS */
# 219 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3

#endif	/* _SYS__TYPES_H */
# 221 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_types.h" 3
# 16 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 2 3

#define _NULL 0

#ifndef __Long
#if __LONG_MAX__ == 2147483647L
#define __Long long
typedef unsigned __Long __ULong;
#elif __INT_MAX__ == 2147483647
# 24 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
#define __Long int
typedef unsigned __Long __ULong;
#endif
# 27 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
#endif
# 28 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3

#if !defined( __Long)
#if 0 /* expanded by -frewrite-includes */
#include <sys/types.h>
#endif /* expanded by -frewrite-includes */
# 30 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
# 31 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
#endif
# 32 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3

#ifndef __Long
#define __Long __int32_t
typedef __uint32_t __ULong;
#endif
# 37 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3

struct _reent;

struct __locale_t;

/*
 * If _REENT_SMALL is defined, we make struct _reent as small as possible,
 * by having nearly everything possible allocated at first use.
 */

struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};

/* needed by reentrant structure */
struct __tm
{
  int   __tm_sec;
  int   __tm_min;
  int   __tm_hour;
  int   __tm_mday;
  int   __tm_mon;
  int   __tm_year;
  int   __tm_wday;
  int   __tm_yday;
  int   __tm_isdst;
};

/*
 * atexit() support.
 */

#define	_ATEXIT_SIZE 32	/* must be at least 32 to guarantee ANSI conformance */

struct _on_exit_args {
	void *  _fnargs[_ATEXIT_SIZE];	        /* user fn args */
	void *	_dso_handle[_ATEXIT_SIZE];
	/* Bitmask is set if user function takes arguments.  */
	__ULong _fntypes;           	        /* type of exit routine -
				   Must have at least _ATEXIT_SIZE bits */
	/* Bitmask is set if function was registered via __cxa_atexit.  */
	__ULong _is_cxa;
};

#ifdef _REENT_SMALL
struct _atexit {
	struct	_atexit *_next;			/* next in list */
	int	_ind;				/* next index in this table */
	void	(*_fns[_ATEXIT_SIZE])(void);	/* the table itself */
        struct _on_exit_args * _on_exit_args_ptr;
};
# define _ATEXIT_INIT {_NULL, 0, {_NULL}, _NULL}
#else
# 93 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
struct _atexit {
	struct	_atexit *_next;			/* next in list */
	int	_ind;				/* next index in this table */
	/* Some entries may already have been called, and will be NULL.  */
	void	(*_fns[_ATEXIT_SIZE])(void);	/* the table itself */
        struct _on_exit_args _on_exit_args;
};
# define _ATEXIT_INIT {_NULL, 0, {_NULL}, {{_NULL}, {_NULL}, 0, 0}}
#endif
# 102 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3

#ifdef _REENT_GLOBAL_ATEXIT
# define _REENT_INIT_ATEXIT
#else
# 106 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
# define _REENT_INIT_ATEXIT \
  _NULL, _ATEXIT_INIT,
#endif
# 109 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3

/*
 * Stdio buffers.
 *
 * This and __FILE are defined here because we need them for struct _reent,
 * but we don't want stdio.h included when stdlib.h is.
 */

struct __sbuf {
	unsigned char *_base;
	int	_size;
};

/*
 * Stdio state variables.
 *
 * The following always hold:
 *
 *	if (_flags&(__SLBF|__SWR)) == (__SLBF|__SWR),
 *		_lbfsize is -_bf._size, else _lbfsize is 0
 *	if _flags&__SRD, _w is 0
 *	if _flags&__SWR, _r is 0
 *
 * This ensures that the getc and putc macros (or inline functions) never
 * try to write or read from a file that is in `read' or `write' mode.
 * (Moreover, they can, and do, automatically switch from read mode to
 * write mode, and back, on "r+" and "w+" files.)
 *
 * _lbfsize is used only to make the inline line-buffered output stream
 * code as compact as possible.
 *
 * _ub, _up, and _ur are used when ungetc() pushes back more characters
 * than fit in the current _bf, or when ungetc() pushes back a character
 * that does not match the previous one in _bf.  When this happens,
 * _ub._base becomes non-nil (i.e., a stream has ungetc() data iff
 * _ub._base!=NULL) and _up and _ur save the current values of _p and _r.
 */

#ifdef _REENT_SMALL
/*
 * struct __sFILE_fake is the start of a struct __sFILE, with only the
 * minimal fields allocated.  In __sinit() we really allocate the 3
 * standard streams, etc., and point away from this fake.
 */
struct __sFILE_fake {
  unsigned char *_p;	/* current position in (some) buffer */
  int	_r;		/* read space left for getc() */
  int	_w;		/* write space left for putc() */
  short	_flags;		/* flags, below; this FILE is free if 0 */
  short	_file;		/* fileno, if Unix descriptor, else -1 */
  struct __sbuf _bf;	/* the buffer (at least 1 byte, if !NULL) */
  int	_lbfsize;	/* 0 or -_bf._size, for inline putc */

  struct _reent *_data;
};

/* Following is needed both in libc/stdio and libc/stdlib so we put it
 * here instead of libc/stdio/local.h where it was previously. */

extern void   __sinit (struct _reent *);

# define _REENT_SMALL_CHECK_INIT(ptr)		\
  do						\
    {						\
      if ((ptr) && !(ptr)->__sdidinit)		\
	__sinit (ptr);				\
    }						\
  while (0)
#else
# 178 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
# define _REENT_SMALL_CHECK_INIT(ptr) /* nothing */
#endif
# 180 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3

struct __sFILE {
  unsigned char *_p;	/* current position in (some) buffer */
  int	_r;		/* read space left for getc() */
  int	_w;		/* write space left for putc() */
  short	_flags;		/* flags, below; this FILE is free if 0 */
  short	_file;		/* fileno, if Unix descriptor, else -1 */
  struct __sbuf _bf;	/* the buffer (at least 1 byte, if !NULL) */
  int	_lbfsize;	/* 0 or -_bf._size, for inline putc */

#ifdef _REENT_SMALL
  struct _reent *_data;
#endif
# 193 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3

  /* operations */
  void *	_cookie;	/* cookie passed to io functions */

  _READ_WRITE_RETURN_TYPE (*_read) (struct _reent *, void *,
					   char *, _READ_WRITE_BUFSIZE_TYPE);
  _READ_WRITE_RETURN_TYPE (*_write) (struct _reent *, void *,
					    const char *,
					    _READ_WRITE_BUFSIZE_TYPE);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);

  /* separate buffer for long sequences of ungetc() */
  struct __sbuf _ub;	/* ungetc buffer */
  unsigned char *_up;	/* saved _p when _p is doing ungetc data */
  int	_ur;		/* saved _r when _r is counting ungetc data */

  /* tricks to meet minimum requirements even when malloc() fails */
  unsigned char _ubuf[3];	/* guarantee an ungetc() buffer */
  unsigned char _nbuf[1];	/* guarantee a getc() buffer */

  /* separate buffer for fgetline() when line crosses buffer boundary */
  struct __sbuf _lb;	/* buffer for fgetline() */

  /* Unix stdio files get aligned to block boundaries on fseek() */
  int	_blksize;	/* stat.st_blksize (may be != _bf._size) */
  _off_t _offset;	/* current lseek offset */

#ifndef _REENT_SMALL
  struct _reent *_data;	/* Here for binary compatibility? Remove? */
#endif
# 224 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3

#ifndef __SINGLE_THREAD__
  _flock_t _lock;	/* for thread-safety locking */
#endif
# 228 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
  _mbstate_t _mbstate;	/* for wide char stdio functions. */
  int   _flags2;        /* for future use */
};

#ifdef __CUSTOM_FILE_IO__

/* Get custom _FILE definition.  */
#if 0 /* expanded by -frewrite-includes */
#include <sys/custom_file.h>
#endif /* expanded by -frewrite-includes */
# 235 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
# 236 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3

#else /* !__CUSTOM_FILE_IO__ */
# 238 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
#ifdef __LARGE64_FILES
struct __sFILE64 {
  unsigned char *_p;	/* current position in (some) buffer */
  int	_r;		/* read space left for getc() */
  int	_w;		/* write space left for putc() */
  short	_flags;		/* flags, below; this FILE is free if 0 */
  short	_file;		/* fileno, if Unix descriptor, else -1 */
  struct __sbuf _bf;	/* the buffer (at least 1 byte, if !NULL) */
  int	_lbfsize;	/* 0 or -_bf._size, for inline putc */

  struct _reent *_data;

  /* operations */
  void *	_cookie;	/* cookie passed to io functions */

  _READ_WRITE_RETURN_TYPE (*_read) (struct _reent *, void *,
					   char *, _READ_WRITE_BUFSIZE_TYPE);
  _READ_WRITE_RETURN_TYPE (*_write) (struct _reent *, void *,
					    const char *,
					    _READ_WRITE_BUFSIZE_TYPE);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);

  /* separate buffer for long sequences of ungetc() */
  struct __sbuf _ub;	/* ungetc buffer */
  unsigned char *_up;	/* saved _p when _p is doing ungetc data */
  int	_ur;		/* saved _r when _r is counting ungetc data */

  /* tricks to meet minimum requirements even when malloc() fails */
  unsigned char _ubuf[3];	/* guarantee an ungetc() buffer */
  unsigned char _nbuf[1];	/* guarantee a getc() buffer */

  /* separate buffer for fgetline() when line crosses buffer boundary */
  struct __sbuf _lb;	/* buffer for fgetline() */

  /* Unix stdio files get aligned to block boundaries on fseek() */
  int	_blksize;	/* stat.st_blksize (may be != _bf._size) */
  int   _flags2;        /* for future use */

  _off64_t _offset;     /* current lseek offset */
  _fpos64_t (*_seek64) (struct _reent *, void *, _fpos64_t, int);

#ifndef __SINGLE_THREAD__
  _flock_t _lock;	/* for thread-safety locking */
#endif
# 283 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
  _mbstate_t _mbstate;	/* for wide char stdio functions. */
};
typedef struct __sFILE64 __FILE;
#else
# 287 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
typedef struct __sFILE   __FILE;
#endif /* __LARGE64_FILES */
# 289 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
#endif /* !__CUSTOM_FILE_IO__ */
# 290 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3

struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};

/*
 * rand48 family support
 *
 * Copyright (c) 1993 Martin Birgmeier
 * All rights reserved.
 *
 * You may redistribute unmodified or modified versions of this source
 * code provided that the above copyright notice and this and the
 * following conditions are retained.
 *
 * This software is provided ``as is'', and comes with no warranties
 * of any kind. I shall in no event be liable for anything that happens
 * to anyone/anything when using this software.
 */
#define        _RAND48_SEED_0  (0x330e)
#define        _RAND48_SEED_1  (0xabcd)
#define        _RAND48_SEED_2  (0x1234)
#define        _RAND48_MULT_0  (0xe66d)
#define        _RAND48_MULT_1  (0xdeec)
#define        _RAND48_MULT_2  (0x0005)
#define        _RAND48_ADD     (0x000b)
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
#ifdef _REENT_SMALL
  /* Put this in here as well, for good luck.  */
  __extension__ unsigned long long _rand_next;
#endif
# 327 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
};

/* How big the some arrays are.  */
#define _REENT_EMERGENCY_SIZE 25
#define _REENT_ASCTIME_SIZE 26
#define _REENT_SIGNAL_SIZE 24

/*
 * struct _reent
 *
 * This structure contains *all* globals needed by the library.
 * It's raison d'etre is to facilitate threads by making all library routines
 * reentrant.  IE: All state information is contained here.
 */

#ifdef _REENT_SMALL

struct _mprec
{
  /* used by mprec routines */
  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;
};


struct _misc_reent
{
  /* miscellaneous reentrant data */
  char *_strtok_last;
  _mbstate_t _mblen_state;
  _mbstate_t _wctomb_state;
  _mbstate_t _mbtowc_state;
  char _l64a_buf[8];
  int _getdate_err;
  _mbstate_t _mbrlen_state;
  _mbstate_t _mbrtowc_state;
  _mbstate_t _mbsrtowcs_state;
  _mbstate_t _wcrtomb_state;
  _mbstate_t _wcsrtombs_state;
};

/* This version of _reent is laid out with "int"s in pairs, to help
 * ports with 16-bit int's but 32-bit pointers, align nicely.  */
struct _reent
{
  /* As an exception to the above put _errno first for binary
     compatibility with non _REENT_SMALL targets.  */
  int _errno;			/* local copy of errno */

  /* FILE is a big struct and may change over time.  To try to achieve binary
     compatibility with future versions, put stdin,stdout,stderr here.
     These are pointers into member __sf defined below.  */
  __FILE *_stdin, *_stdout, *_stderr;	/* XXX */

  int  _inc;			/* used by tmpnam */

  char *_emergency;

  int __sdidinit;		/* 1 means stdio has been init'd */

  int _unspecified_locale_info;	/* unused, reserved for locale stuff */
  struct __locale_t *_locale;/* per-thread locale */

  struct _mprec *_mp;

  void (*__cleanup) (struct _reent *);

  int _gamma_signgam;

  /* used by some fp conversion routines */
  int _cvtlen;			/* should be size_t */
  char *_cvtbuf;

  struct _rand48 *_r48;
  struct __tm *_localtime_buf;
  char *_asctime_buf;

  /* signal info */
  void (**(_sig_func))(int);

# ifndef _REENT_GLOBAL_ATEXIT
  /* atexit stuff */
  struct _atexit *_atexit;
  struct _atexit _atexit0;
# endif
# 414 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3

  struct _glue __sglue;			/* root of glue chain */
  __FILE *__sf;			        /* file descriptors */
  struct _misc_reent *_misc;            /* strtok, multibyte states */
  char *_signal_buf;                    /* strsignal */
};

extern const struct __sFILE_fake __sf_fake_stdin;
extern const struct __sFILE_fake __sf_fake_stdout;
extern const struct __sFILE_fake __sf_fake_stderr;

# define _REENT_INIT(var) \
  { 0, \
    (__FILE *)&__sf_fake_stdin, \
    (__FILE *)&__sf_fake_stdout, \
    (__FILE *)&__sf_fake_stderr, \
    0, \
    _NULL, \
    0, \
    0, \
    _NULL, \
    _NULL, \
    _NULL, \
    0, \
    0, \
    _NULL, \
    _NULL, \
    _NULL, \
    _NULL, \
    _NULL, \
    _REENT_INIT_ATEXIT \
    {_NULL, 0, _NULL}, \
    _NULL, \
    _NULL, \
    _NULL \
  }

#define _REENT_INIT_PTR_ZEROED(var) \
  { (var)->_stdin = (__FILE *)&__sf_fake_stdin; \
    (var)->_stdout = (__FILE *)&__sf_fake_stdout; \
    (var)->_stderr = (__FILE *)&__sf_fake_stderr; \
  }

/* Only add assert() calls if we are specified to debug.  */
#ifdef _REENT_CHECK_DEBUG
#if 0 /* expanded by -frewrite-includes */
#include <assert.h>
#endif /* expanded by -frewrite-includes */
# 459 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
# 460 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
#define __reent_assert(x) assert(x)
#else
# 462 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
#define __reent_assert(x) ((void)0)
#endif
# 464 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3

#ifdef __CUSTOM_FILE_IO__
#error Custom FILE I/O and _REENT_SMALL not currently supported.
#endif
# 468 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3

/* Generic _REENT check macro.  */
#define _REENT_CHECK(var, what, type, size, init) do { \
  struct _reent *_r = (var); \
  if (_r->what == NULL) { \
    _r->what = (type)malloc(size); \
    __reent_assert(_r->what); \
    init; \
  } \
} while (0)

#define _REENT_CHECK_TM(var) \
  _REENT_CHECK(var, _localtime_buf, struct __tm *, sizeof *((var)->_localtime_buf), \
    /* nothing */)

#define _REENT_CHECK_ASCTIME_BUF(var) \
  _REENT_CHECK(var, _asctime_buf, char *, _REENT_ASCTIME_SIZE, \
    memset((var)->_asctime_buf, 0, _REENT_ASCTIME_SIZE))

/* Handle the dynamically allocated rand48 structure. */
#define _REENT_INIT_RAND48(var) do { \
  struct _reent *_r = (var); \
  _r->_r48->_seed[0] = _RAND48_SEED_0; \
  _r->_r48->_seed[1] = _RAND48_SEED_1; \
  _r->_r48->_seed[2] = _RAND48_SEED_2; \
  _r->_r48->_mult[0] = _RAND48_MULT_0; \
  _r->_r48->_mult[1] = _RAND48_MULT_1; \
  _r->_r48->_mult[2] = _RAND48_MULT_2; \
  _r->_r48->_add = _RAND48_ADD; \
  _r->_r48->_rand_next = 1; \
} while (0)
#define _REENT_CHECK_RAND48(var) \
  _REENT_CHECK(var, _r48, struct _rand48 *, sizeof *((var)->_r48), _REENT_INIT_RAND48((var)))

#define _REENT_INIT_MP(var) do { \
  struct _reent *_r = (var); \
  _r->_mp->_result_k = 0; \
  _r->_mp->_result = _r->_mp->_p5s = _NULL; \
  _r->_mp->_freelist = _NULL; \
} while (0)
#define _REENT_CHECK_MP(var) \
  _REENT_CHECK(var, _mp, struct _mprec *, sizeof *((var)->_mp), _REENT_INIT_MP(var))

#define _REENT_CHECK_EMERGENCY(var) \
  _REENT_CHECK(var, _emergency, char *, _REENT_EMERGENCY_SIZE, /* nothing */)

#define _REENT_INIT_MISC(var) do { \
  struct _reent *_r = (var); \
  _r->_misc->_strtok_last = _NULL; \
  _r->_misc->_mblen_state.__count = 0; \
  _r->_misc->_mblen_state.__value.__wch = 0; \
  _r->_misc->_wctomb_state.__count = 0; \
  _r->_misc->_wctomb_state.__value.__wch = 0; \
  _r->_misc->_mbtowc_state.__count = 0; \
  _r->_misc->_mbtowc_state.__value.__wch = 0; \
  _r->_misc->_mbrlen_state.__count = 0; \
  _r->_misc->_mbrlen_state.__value.__wch = 0; \
  _r->_misc->_mbrtowc_state.__count = 0; \
  _r->_misc->_mbrtowc_state.__value.__wch = 0; \
  _r->_misc->_mbsrtowcs_state.__count = 0; \
  _r->_misc->_mbsrtowcs_state.__value.__wch = 0; \
  _r->_misc->_wcrtomb_state.__count = 0; \
  _r->_misc->_wcrtomb_state.__value.__wch = 0; \
  _r->_misc->_wcsrtombs_state.__count = 0; \
  _r->_misc->_wcsrtombs_state.__value.__wch = 0; \
  _r->_misc->_l64a_buf[0] = '\0'; \
  _r->_misc->_getdate_err = 0; \
} while (0)
#define _REENT_CHECK_MISC(var) \
  _REENT_CHECK(var, _misc, struct _misc_reent *, sizeof *((var)->_misc), _REENT_INIT_MISC(var))

#define _REENT_CHECK_SIGNAL_BUF(var) \
  _REENT_CHECK(var, _signal_buf, char *, _REENT_SIGNAL_SIZE, /* nothing */)

#define _REENT_SIGNGAM(ptr)	((ptr)->_gamma_signgam)
#define _REENT_RAND_NEXT(ptr)	((ptr)->_r48->_rand_next)
#define _REENT_RAND48_SEED(ptr)	((ptr)->_r48->_seed)
#define _REENT_RAND48_MULT(ptr)	((ptr)->_r48->_mult)
#define _REENT_RAND48_ADD(ptr)	((ptr)->_r48->_add)
#define _REENT_MP_RESULT(ptr)	((ptr)->_mp->_result)
#define _REENT_MP_RESULT_K(ptr)	((ptr)->_mp->_result_k)
#define _REENT_MP_P5S(ptr)	((ptr)->_mp->_p5s)
#define _REENT_MP_FREELIST(ptr)	((ptr)->_mp->_freelist)
#define _REENT_ASCTIME_BUF(ptr)	((ptr)->_asctime_buf)
#define _REENT_TM(ptr)		((ptr)->_localtime_buf)
#define _REENT_EMERGENCY(ptr)	((ptr)->_emergency)
#define _REENT_STRTOK_LAST(ptr)	((ptr)->_misc->_strtok_last)
#define _REENT_MBLEN_STATE(ptr)	((ptr)->_misc->_mblen_state)
#define _REENT_MBTOWC_STATE(ptr)((ptr)->_misc->_mbtowc_state)
#define _REENT_WCTOMB_STATE(ptr)((ptr)->_misc->_wctomb_state)
#define _REENT_MBRLEN_STATE(ptr) ((ptr)->_misc->_mbrlen_state)
#define _REENT_MBRTOWC_STATE(ptr) ((ptr)->_misc->_mbrtowc_state)
#define _REENT_MBSRTOWCS_STATE(ptr) ((ptr)->_misc->_mbsrtowcs_state)
#define _REENT_WCRTOMB_STATE(ptr) ((ptr)->_misc->_wcrtomb_state)
#define _REENT_WCSRTOMBS_STATE(ptr) ((ptr)->_misc->_wcsrtombs_state)
#define _REENT_L64A_BUF(ptr)    ((ptr)->_misc->_l64a_buf)
#define _REENT_GETDATE_ERR_P(ptr) (&((ptr)->_misc->_getdate_err))
#define _REENT_SIGNAL_BUF(ptr)  ((ptr)->_signal_buf)

#else /* !_REENT_SMALL */
# 568 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3

struct _reent
{
  int _errno;			/* local copy of errno */

  /* FILE is a big struct and may change over time.  To try to achieve binary
     compatibility with future versions, put stdin,stdout,stderr here.
     These are pointers into member __sf defined below.  */
  __FILE *_stdin, *_stdout, *_stderr;

  int  _inc;			/* used by tmpnam */
  char _emergency[_REENT_EMERGENCY_SIZE];

  /* TODO */
  int _unspecified_locale_info;	/* unused, reserved for locale stuff */
  struct __locale_t *_locale;/* per-thread locale */

  int __sdidinit;		/* 1 means stdio has been init'd */

  void (*__cleanup) (struct _reent *);

  /* used by mprec routines */
  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;

  /* used by some fp conversion routines */
  int _cvtlen;			/* should be size_t */
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[_REENT_ASCTIME_SIZE];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[_REENT_SIGNAL_SIZE];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
	  int _h_errno;
        } _reent;
  /* Two next two fields were once used by malloc.  They are no longer
     used. They are used to preserve the space used before so as to
     allow addition of new reent fields and keep binary compatibility.   */
      struct
        {
#define _N_LISTS 30
          unsigned char * _nextf[_N_LISTS];
          unsigned int _nmalloc[_N_LISTS];
        } _unused;
    } _new;

# ifndef _REENT_GLOBAL_ATEXIT
  /* atexit stuff */
  struct _atexit *_atexit;	/* points to head of LIFO stack */
  struct _atexit _atexit0;	/* one guaranteed table, required by ANSI */
# endif
# 639 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3

  /* signal info */
  void (**(_sig_func))(int);

  /* These are here last so that __FILE can grow without changing the offsets
     of the above members (on the off chance that future binary compatibility
     would be broken otherwise).  */
  struct _glue __sglue;		/* root of glue chain */
# ifndef _REENT_GLOBAL_STDIO_STREAMS
  __FILE __sf[3];  		/* first three file descriptors */
# endif
# 650 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
};

#ifdef _REENT_GLOBAL_STDIO_STREAMS
extern __FILE __sf[3];
#define _REENT_STDIO_STREAM(var, index) &__sf[index]
#else
# 656 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
#define _REENT_STDIO_STREAM(var, index) &(var)->__sf[index]
#endif
# 658 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3

#define _REENT_INIT(var) \
  { 0, \
    _REENT_STDIO_STREAM(&(var), 0), \
    _REENT_STDIO_STREAM(&(var), 1), \
    _REENT_STDIO_STREAM(&(var), 2), \
    0, \
    "", \
    0, \
    _NULL, \
    0, \
    _NULL, \
    _NULL, \
    0, \
    _NULL, \
    _NULL, \
    0, \
    _NULL, \
    { \
      { \
        0, \
        _NULL, \
        "", \
        {0, 0, 0, 0, 0, 0, 0, 0, 0}, \
        0, \
        1, \
        { \
          {_RAND48_SEED_0, _RAND48_SEED_1, _RAND48_SEED_2}, \
          {_RAND48_MULT_0, _RAND48_MULT_1, _RAND48_MULT_2}, \
          _RAND48_ADD \
        }, \
        {0, {0}}, \
        {0, {0}}, \
        {0, {0}}, \
        "", \
        "", \
        0, \
        {0, {0}}, \
        {0, {0}}, \
        {0, {0}}, \
        {0, {0}}, \
        {0, {0}} \
      } \
    }, \
    _REENT_INIT_ATEXIT \
    _NULL, \
    {_NULL, 0, _NULL} \
  }

#define _REENT_INIT_PTR_ZEROED(var) \
  { (var)->_stdin = _REENT_STDIO_STREAM(var, 0); \
    (var)->_stdout = _REENT_STDIO_STREAM(var, 1); \
    (var)->_stderr = _REENT_STDIO_STREAM(var, 2); \
    (var)->_new._reent._rand_next = 1; \
    (var)->_new._reent._r48._seed[0] = _RAND48_SEED_0; \
    (var)->_new._reent._r48._seed[1] = _RAND48_SEED_1; \
    (var)->_new._reent._r48._seed[2] = _RAND48_SEED_2; \
    (var)->_new._reent._r48._mult[0] = _RAND48_MULT_0; \
    (var)->_new._reent._r48._mult[1] = _RAND48_MULT_1; \
    (var)->_new._reent._r48._mult[2] = _RAND48_MULT_2; \
    (var)->_new._reent._r48._add = _RAND48_ADD; \
  }

#define _REENT_CHECK_RAND48(ptr)	/* nothing */
#define _REENT_CHECK_MP(ptr)		/* nothing */
#define _REENT_CHECK_TM(ptr)		/* nothing */
#define _REENT_CHECK_ASCTIME_BUF(ptr)	/* nothing */
#define _REENT_CHECK_EMERGENCY(ptr)	/* nothing */
#define _REENT_CHECK_MISC(ptr)	        /* nothing */
#define _REENT_CHECK_SIGNAL_BUF(ptr)	/* nothing */

#define _REENT_SIGNGAM(ptr)	((ptr)->_new._reent._gamma_signgam)
#define _REENT_RAND_NEXT(ptr)	((ptr)->_new._reent._rand_next)
#define _REENT_RAND48_SEED(ptr)	((ptr)->_new._reent._r48._seed)
#define _REENT_RAND48_MULT(ptr)	((ptr)->_new._reent._r48._mult)
#define _REENT_RAND48_ADD(ptr)	((ptr)->_new._reent._r48._add)
#define _REENT_MP_RESULT(ptr)	((ptr)->_result)
#define _REENT_MP_RESULT_K(ptr)	((ptr)->_result_k)
#define _REENT_MP_P5S(ptr)	((ptr)->_p5s)
#define _REENT_MP_FREELIST(ptr)	((ptr)->_freelist)
#define _REENT_ASCTIME_BUF(ptr)	((ptr)->_new._reent._asctime_buf)
#define _REENT_TM(ptr)		(&(ptr)->_new._reent._localtime_buf)
#define _REENT_EMERGENCY(ptr)	((ptr)->_emergency)
#define _REENT_STRTOK_LAST(ptr)	((ptr)->_new._reent._strtok_last)
#define _REENT_MBLEN_STATE(ptr)	((ptr)->_new._reent._mblen_state)
#define _REENT_MBTOWC_STATE(ptr)((ptr)->_new._reent._mbtowc_state)
#define _REENT_WCTOMB_STATE(ptr)((ptr)->_new._reent._wctomb_state)
#define _REENT_MBRLEN_STATE(ptr)((ptr)->_new._reent._mbrlen_state)
#define _REENT_MBRTOWC_STATE(ptr)((ptr)->_new._reent._mbrtowc_state)
#define _REENT_MBSRTOWCS_STATE(ptr)((ptr)->_new._reent._mbsrtowcs_state)
#define _REENT_WCRTOMB_STATE(ptr)((ptr)->_new._reent._wcrtomb_state)
#define _REENT_WCSRTOMBS_STATE(ptr)((ptr)->_new._reent._wcsrtombs_state)
#define _REENT_L64A_BUF(ptr)    ((ptr)->_new._reent._l64a_buf)
#define _REENT_SIGNAL_BUF(ptr)  ((ptr)->_new._reent._signal_buf)
#define _REENT_GETDATE_ERR_P(ptr) (&((ptr)->_new._reent._getdate_err))

#endif /* !_REENT_SMALL */
# 755 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3

#define _REENT_INIT_PTR(var) \
  { memset((var), 0, sizeof(*(var))); \
    _REENT_INIT_PTR_ZEROED(var); \
  }

/* This value is used in stdlib/misc.c.  reent/reent.c has to know it
   as well to make sure the freelist is correctly free'd.  Therefore
   we define it here, rather than in stdlib/misc.c, as before. */
#define _Kmax (sizeof (size_t) << 3)

/*
 * All references to struct _reent are via this pointer.
 * Internally, newlib routines that need to reference it should use _REENT.
 */

#ifndef __ATTRIBUTE_IMPURE_PTR__
#define __ATTRIBUTE_IMPURE_PTR__
#endif
# 774 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3

extern struct _reent *_impure_ptr __ATTRIBUTE_IMPURE_PTR__;
extern struct _reent *const _global_impure_ptr __ATTRIBUTE_IMPURE_PTR__;

void _reclaim_reent (struct _reent *);

/* #define _REENT_ONLY define this to get only reentrant routines */

#if defined(__DYNAMIC_REENT__) && !defined(__SINGLE_THREAD__)
#ifndef __getreent
  struct _reent * __getreent (void);
#endif
# 786 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
# define _REENT (__getreent())
#else /* __SINGLE_THREAD__ || !__DYNAMIC_REENT__ */
# 788 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
# define _REENT _impure_ptr
#endif /* __SINGLE_THREAD__ || !__DYNAMIC_REENT__ */
# 790 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3

#define _GLOBAL_REENT _global_impure_ptr

#ifdef _REENT_GLOBAL_ATEXIT
extern struct _atexit *_global_atexit; /* points to head of LIFO stack */
# define _GLOBAL_ATEXIT _global_atexit
#else
# 797 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
# define _GLOBAL_ATEXIT (_GLOBAL_REENT->_atexit)
#endif
# 799 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3

#ifdef __cplusplus
}
#endif
# 803 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
#endif /* _SYS_REENT_H_ */
# 804 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/reent.h" 3
# 12 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/errno.h" 2 3

#ifndef _REENT_ONLY
#define errno (*__errno())
extern int *__errno (void);
#endif
# 17 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/errno.h" 3

/* Please don't use these variables directly.
   Use strerror instead. */
extern __IMPORT const char * const _sys_errlist[];
extern __IMPORT int _sys_nerr;
#ifdef __CYGWIN__
extern __IMPORT const char * const sys_errlist[];
extern __IMPORT int sys_nerr;
extern __IMPORT char *program_invocation_name;
extern __IMPORT char *program_invocation_short_name;
#endif
# 28 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/errno.h" 3

#define __errno_r(ptr) ((ptr)->_errno)

#define	EPERM 1		/* Not owner */
#define	ENOENT 2	/* No such file or directory */
#define	ESRCH 3		/* No such process */
#define	EINTR 4		/* Interrupted system call */
#define	EIO 5		/* I/O error */
#define	ENXIO 6		/* No such device or address */
#define	E2BIG 7		/* Arg list too long */
#define	ENOEXEC 8	/* Exec format error */
#define	EBADF 9		/* Bad file number */
#define	ECHILD 10	/* No children */
#define	EAGAIN 11	/* No more processes */
#define	ENOMEM 12	/* Not enough space */
#define	EACCES 13	/* Permission denied */
#define	EFAULT 14	/* Bad address */
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define	ENOTBLK 15	/* Block device required */
#endif
# 48 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/errno.h" 3
#define	EBUSY 16	/* Device or resource busy */
#define	EEXIST 17	/* File exists */
#define	EXDEV 18	/* Cross-device link */
#define	ENODEV 19	/* No such device */
#define	ENOTDIR 20	/* Not a directory */
#define	EISDIR 21	/* Is a directory */
#define	EINVAL 22	/* Invalid argument */
#define	ENFILE 23	/* Too many open files in system */
#define	EMFILE 24	/* File descriptor value too large */
#define	ENOTTY 25	/* Not a character device */
#define	ETXTBSY 26	/* Text file busy */
#define	EFBIG 27	/* File too large */
#define	ENOSPC 28	/* No space left on device */
#define	ESPIPE 29	/* Illegal seek */
#define	EROFS 30	/* Read-only file system */
#define	EMLINK 31	/* Too many links */
#define	EPIPE 32	/* Broken pipe */
#define	EDOM 33		/* Mathematics argument out of domain of function */
#define	ERANGE 34	/* Result too large */
#define	ENOMSG 35	/* No message of desired type */
#define	EIDRM 36	/* Identifier removed */
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define	ECHRNG 37	/* Channel number out of range */
#define	EL2NSYNC 38	/* Level 2 not synchronized */
#define	EL3HLT 39	/* Level 3 halted */
#define	EL3RST 40	/* Level 3 reset */
#define	ELNRNG 41	/* Link number out of range */
#define	EUNATCH 42	/* Protocol driver not attached */
#define	ENOCSI 43	/* No CSI structure available */
#define	EL2HLT 44	/* Level 2 halted */
#endif
# 79 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/errno.h" 3
#define	EDEADLK 45	/* Deadlock */
#define	ENOLCK 46	/* No lock */
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define EBADE 50	/* Invalid exchange */
#define EBADR 51	/* Invalid request descriptor */
#define EXFULL 52	/* Exchange full */
#define ENOANO 53	/* No anode */
#define EBADRQC 54	/* Invalid request code */
#define EBADSLT 55	/* Invalid slot */
#define EDEADLOCK 56	/* File locking deadlock error */
#define EBFONT 57	/* Bad font file fmt */
#endif
# 91 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/errno.h" 3
#define ENOSTR 60	/* Not a stream */
#define ENODATA 61	/* No data (for no delay io) */
#define ETIME 62	/* Stream ioctl timeout */
#define ENOSR 63	/* No stream resources */
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define ENONET 64	/* Machine is not on the network */
#define ENOPKG 65	/* Package not installed */
#define EREMOTE 66	/* The object is remote */
#endif
# 100 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/errno.h" 3
#define ENOLINK 67	/* Virtual circuit is gone */
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define EADV 68		/* Advertise error */
#define ESRMNT 69	/* Srmount error */
#define	ECOMM 70	/* Communication error on send */
#endif
# 106 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/errno.h" 3
#define EPROTO 71	/* Protocol error */
#define	EMULTIHOP 74	/* Multihop attempted */
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define	ELBIN 75	/* Inode is remote (not really error) */
#define	EDOTDOT 76	/* Cross mount point (not really error) */
#endif
# 112 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/errno.h" 3
#define EBADMSG 77	/* Bad message */
#define EFTYPE 79	/* Inappropriate file type or format */
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define ENOTUNIQ 80	/* Given log. name not unique */
#define EBADFD 81	/* f.d. invalid for this operation */
#define EREMCHG 82	/* Remote address changed */
#define ELIBACC 83	/* Can't access a needed shared lib */
#define ELIBBAD 84	/* Accessing a corrupted shared lib */
#define ELIBSCN 85	/* .lib section in a.out corrupted */
#define ELIBMAX 86	/* Attempting to link in too many libs */
#define ELIBEXEC 87	/* Attempting to exec a shared library */
#endif
# 124 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/errno.h" 3
#define ENOSYS 88	/* Function not implemented */
#ifdef __CYGWIN__
#define ENMFILE 89      /* No more files */
#endif
# 128 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/errno.h" 3
#define ENOTEMPTY 90	/* Directory not empty */
#define ENAMETOOLONG 91	/* File or path name too long */
#define ELOOP 92	/* Too many symbolic links */
#define EOPNOTSUPP 95	/* Operation not supported on socket */
#define EPFNOSUPPORT 96 /* Protocol family not supported */
#define ECONNRESET 104  /* Connection reset by peer */
#define ENOBUFS 105	/* No buffer space available */
#define EAFNOSUPPORT 106 /* Address family not supported by protocol family */
#define EPROTOTYPE 107	/* Protocol wrong type for socket */
#define ENOTSOCK 108	/* Socket operation on non-socket */
#define ENOPROTOOPT 109	/* Protocol not available */
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define ESHUTDOWN 110	/* Can't send after socket shutdown */
#endif
# 142 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/errno.h" 3
#define ECONNREFUSED 111	/* Connection refused */
#define EADDRINUSE 112		/* Address already in use */
#define ECONNABORTED 113	/* Software caused connection abort */
#define ENETUNREACH 114		/* Network is unreachable */
#define ENETDOWN 115		/* Network interface is not configured */
#define ETIMEDOUT 116		/* Connection timed out */
#define EHOSTDOWN 117		/* Host is down */
#define EHOSTUNREACH 118	/* Host is unreachable */
#define EINPROGRESS 119		/* Connection already in progress */
#define EALREADY 120		/* Socket already connected */
#define EDESTADDRREQ 121	/* Destination address required */
#define EMSGSIZE 122		/* Message too long */
#define EPROTONOSUPPORT 123	/* Unknown protocol */
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define ESOCKTNOSUPPORT 124	/* Socket type not supported */
#endif
# 158 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/errno.h" 3
#define EADDRNOTAVAIL 125	/* Address not available */
#define ENETRESET 126		/* Connection aborted by network */
#define EISCONN 127		/* Socket is already connected */
#define ENOTCONN 128		/* Socket is not connected */
#define ETOOMANYREFS 129
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define EPROCLIM 130
#define EUSERS 131
#endif
# 167 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/errno.h" 3
#define EDQUOT 132
#define ESTALE 133
#define ENOTSUP 134		/* Not supported */
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define ENOMEDIUM 135   /* No medium (in tape drive) */
#endif
# 173 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/errno.h" 3
#ifdef __CYGWIN__
#define ENOSHARE 136    /* No such host or network path */
#define ECASECLASH 137  /* Filename exists with different case */
#endif
# 177 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/errno.h" 3
#define EILSEQ 138		/* Illegal byte sequence */
#define EOVERFLOW 139	/* Value too large for defined data type */
#define ECANCELED 140	/* Operation canceled */
#define ENOTRECOVERABLE 141	/* State not recoverable */
#define EOWNERDEAD 142	/* Previous owner died */
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define ESTRPIPE 143	/* Streams pipe error */
#endif
# 185 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/errno.h" 3
#define EWOULDBLOCK EAGAIN	/* Operation would block */

#define __ELASTERROR 2000	/* Users can add values starting here */

#ifdef __cplusplus
}
#endif
# 192 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/errno.h" 3
#endif /* _SYS_ERRNO_H */
# 193 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/errno.h" 3
# 10 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/errno.h" 2 3

#endif /* !__ERRNO_H__ */
# 12 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/errno.h" 3
# 8 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/argz/argz_replace.c" 2
#if 0 /* expanded by -frewrite-includes */
#include <sys/types.h>
#endif /* expanded by -frewrite-includes */
# 8 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/argz/argz_replace.c"
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 1 3
/* unified sys/types.h: 
   start with sef's sysvi386 version.
   merge go32 version -- a few ifdefs.
   h8300hms, h8300xray, and sysvnecv70 disagree on the following types:

   typedef int gid_t;
   typedef int uid_t;
   typedef int dev_t;
   typedef int ino_t;
   typedef int mode_t;
   typedef int caddr_t;

   however, these aren't "reasonable" values, the sysvi386 ones make far 
   more sense, and should work sufficiently well (in particular, h8300 
   doesn't have a stat, and the necv70 doesn't matter.) -- eichin
 */

#ifndef _SYS_TYPES_H

#if 0 /* expanded by -frewrite-includes */
#include <_ansi.h>
#endif /* expanded by -frewrite-includes */
# 20 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
# 21 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 21 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 1 3
/* libc/sys/linux/sys/cdefs.h - Helper macros for K&R vs. ANSI C compat. */

/* Written 2000 by Werner Almesberger */

/*-
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Berkeley Software Design, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)cdefs.h	8.8 (Berkeley) 1/9/95
 * $FreeBSD$
 */

#ifndef	_SYS_CDEFS_H_
#define	_SYS_CDEFS_H_

#if 0 /* expanded by -frewrite-includes */
#include <machine/_default_types.h>
#endif /* expanded by -frewrite-includes */
# 43 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
# 44 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/features.h>
#endif /* expanded by -frewrite-includes */
# 44 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
# 45 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 45 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
# 1 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#if !defined(__STDDEF_H) || defined(__need_ptrdiff_t) ||                       \
    defined(__need_size_t) || defined(__need_wchar_t) ||                       \
    defined(__need_NULL) || defined(__need_wint_t)

#if !defined(__need_ptrdiff_t) && !defined(__need_size_t) &&                   \
    !defined(__need_wchar_t) && !defined(__need_NULL) &&                       \
    !defined(__need_wint_t)
/* Always define miscellaneous pieces when modules are available. */
#if !__has_feature(modules)
#define __STDDEF_H
#endif
# 37 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 44 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_ptrdiff_t)
#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 51 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 53 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 55 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_size_t)
#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 62 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 64 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 66 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 76 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 78 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif /* defined(__need_STDDEF_H_misc) */
# 79 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_wchar_t)
#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 89 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif
# 90 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 92 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif
# 93 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 95 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_NULL)
#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 102 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 104 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#else
# 105 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 107 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 112 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif
# 113 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 115 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 118 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
# 119 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif
# 120 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 123 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 132 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 134 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 136 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#endif
# 138 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
# 46 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 2 3

#define __PMT(args)	args
#define __DOTS    	, ...
#define __THROW

#ifdef __GNUC__
# define __ASMNAME(cname)  __XSTRING (__USER_LABEL_PREFIX__) cname
#endif
# 54 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#define __ptr_t void *
#define __long_double_t  long double

#define __attribute_malloc__
#define __attribute_pure__
#define __attribute_format_strfmon__(a,b)
#define __flexarr      [0]

#ifndef __BOUNDED_POINTERS__
# define __bounded      /* nothing */
# define __unbounded    /* nothing */
# define __ptrvalue     /* nothing */
#endif
# 68 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

/*
 * Testing against Clang-specific extensions.
 */
#ifndef	__has_attribute
#define	__has_attribute(x)	0
#endif
# 75 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#ifndef	__has_extension
#define	__has_extension		__has_feature
#endif
# 78 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#ifndef	__has_feature
#define	__has_feature(x)	0
#endif
# 81 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#ifndef	__has_include
#define	__has_include(x)	0
#endif
# 84 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#ifndef	__has_builtin
#define	__has_builtin(x)	0
#endif
# 87 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#if defined(__cplusplus)
#define	__BEGIN_DECLS	extern "C" {
#define	__END_DECLS	}
#else
# 92 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__BEGIN_DECLS
#define	__END_DECLS
#endif
# 95 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

/*
 * This code has been put in place to help reduce the addition of
 * compiler specific defines in FreeBSD code.  It helps to aid in
 * having a compiler-agnostic source tree.
 */

#if defined(__GNUC__) || defined(__INTEL_COMPILER)

#if __GNUC__ >= 3 || defined(__INTEL_COMPILER)
#define	__GNUCLIKE_ASM 3
#define	__GNUCLIKE_MATH_BUILTIN_CONSTANTS
#else
# 108 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__GNUCLIKE_ASM 2
#endif
# 110 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__GNUCLIKE___TYPEOF 1
#define	__GNUCLIKE___OFFSETOF 1
#define	__GNUCLIKE___SECTION 1

#ifndef __INTEL_COMPILER
#define	__GNUCLIKE_CTOR_SECTION_HANDLING 1
#endif
# 117 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#define	__GNUCLIKE_BUILTIN_CONSTANT_P 1
#if defined(__INTEL_COMPILER) && defined(__cplusplus) && \
   __INTEL_COMPILER < 800
#undef __GNUCLIKE_BUILTIN_CONSTANT_P
#endif
# 123 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#if (__GNUC_MINOR__ > 95 || __GNUC__ >= 3)
#define	__GNUCLIKE_BUILTIN_VARARGS 1
#define	__GNUCLIKE_BUILTIN_STDARG 1
#define	__GNUCLIKE_BUILTIN_VAALIST 1
#endif
# 129 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#if defined(__GNUC__)
#define	__GNUC_VA_LIST_COMPATIBILITY 1
#endif
# 133 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

/*
 * Compiler memory barriers, specific to gcc and clang.
 */
#if defined(__GNUC__)
#define	__compiler_membar()	__asm __volatile(" " : : : "memory")
#endif
# 140 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#ifndef __INTEL_COMPILER
#define	__GNUCLIKE_BUILTIN_NEXT_ARG 1
#define	__GNUCLIKE_MATH_BUILTIN_RELOPS
#endif
# 145 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#define	__GNUCLIKE_BUILTIN_MEMCPY 1

/* XXX: if __GNUC__ >= 2: not tested everywhere originally, where replaced */
#define	__CC_SUPPORTS_INLINE 1
#define	__CC_SUPPORTS___INLINE 1
#define	__CC_SUPPORTS___INLINE__ 1

#define	__CC_SUPPORTS___FUNC__ 1
#define	__CC_SUPPORTS_WARNING 1

#define	__CC_SUPPORTS_VARADIC_XXX 1 /* see varargs.h */

#define	__CC_SUPPORTS_DYNAMIC_ARRAY_INIT 1

#endif /* __GNUC__ || __INTEL_COMPILER */
# 161 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

/*
 * The __CONCAT macro is used to concatenate parts of symbol names, e.g.
 * with "#define OLD(foo) __CONCAT(old,foo)", OLD(foo) produces oldfoo.
 * The __CONCAT macro is a bit tricky to use if it must work in non-ANSI
 * mode -- there must be no spaces between its arguments, and for nested
 * __CONCAT's, all the __CONCAT's must be at the left.  __CONCAT can also
 * concatenate double-quoted strings produced by the __STRING macro, but
 * this only works with ANSI C.
 *
 * __XSTRING is like __STRING, but it expands any macros in its argument
 * first.  It is only available with ANSI C.
 */
#if defined(__STDC__) || defined(__cplusplus)
#define	__P(protos)	protos		/* full-blown ANSI C */
#define	__CONCAT1(x,y)	x ## y
#define	__CONCAT(x,y)	__CONCAT1(x,y)
#define	__STRING(x)	#x		/* stringify without expanding x */
#define	__XSTRING(x)	__STRING(x)	/* expand x, then stringify */

#define	__const		const		/* define reserved names to standard */
#define	__signed	signed
#define	__volatile	volatile
#if defined(__cplusplus)
#define	__inline	inline		/* convert to C++ keyword */
#else
# 187 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#if !(defined(__CC_SUPPORTS___INLINE))
#define	__inline			/* delete GCC keyword */
#endif /* ! __CC_SUPPORTS___INLINE */
# 190 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#endif /* !__cplusplus */
# 191 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#else	/* !(__STDC__ || __cplusplus) */
# 193 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__P(protos)	()		/* traditional C preprocessor */
#define	__CONCAT(x,y)	x/**/y
#define	__STRING(x)	"x"

#if !defined(__CC_SUPPORTS___INLINE)
#define	__const				/* delete pseudo-ANSI C keywords */
#define	__inline
#define	__signed
#define	__volatile
/*
 * In non-ANSI C environments, new programs will want ANSI-only C keywords
 * deleted from the program and old programs will want them left alone.
 * When using a compiler other than gcc, programs using the ANSI C keywords
 * const, inline etc. as normal identifiers should define -DNO_ANSI_KEYWORDS.
 * When using "gcc -traditional", we assume that this is the intent; if
 * __GNUC__ is defined but __STDC__ is not, we leave the new keywords alone.
 */
#ifndef	NO_ANSI_KEYWORDS
#define	const				/* delete ANSI C keywords */
#define	inline
#define	signed
#define	volatile
#endif	/* !NO_ANSI_KEYWORDS */
# 216 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#endif	/* !__CC_SUPPORTS___INLINE */
# 217 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#endif	/* !(__STDC__ || __cplusplus) */
# 218 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

/*
 * Compiler-dependent macros to help declare dead (non-returning) and
 * pure (no side effects) functions, and unused variables.  They are
 * null except for versions of gcc that are known to support the features
 * properly (old versions of gcc-2 supported the dead and pure features
 * in a different (wrong) way).  If we do not provide an implementation
 * for a given compiler, let the compile fail if it is told to use
 * a feature that we cannot live without.
 */
#ifdef lint
#define	__dead2
#define	__pure2
#define	__unused
#define	__packed
#define	__aligned(x)
#define	__alloc_align(x)
#define	__alloc_size(x)
#define	__section(x)
#define	__weak_symbol
#else
# 239 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__weak_symbol	__attribute__((__weak__))
#if !__GNUC_PREREQ__(2, 5) && !defined(__INTEL_COMPILER)
#define	__dead2
#define	__pure2
#define	__unused
#endif
# 245 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#if __GNUC__ == 2 && __GNUC_MINOR__ >= 5 && __GNUC_MINOR__ < 7 && !defined(__INTEL_COMPILER)
#define	__dead2		__attribute__((__noreturn__))
#define	__pure2		__attribute__((__const__))
#define	__unused
/* XXX Find out what to do for __packed, __aligned and __section */
#endif
# 251 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#if __GNUC_PREREQ__(2, 7) || defined(__INTEL_COMPILER)
#define	__dead2		__attribute__((__noreturn__))
#define	__pure2		__attribute__((__const__))
#define	__unused	__attribute__((__unused__))
#define	__used		__attribute__((__used__))
#define	__packed	__attribute__((__packed__))
#define	__aligned(x)	__attribute__((__aligned__(x)))
#define	__section(x)	__attribute__((__section__(x)))
#endif
# 260 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#if __GNUC_PREREQ__(4, 3) || __has_attribute(__alloc_size__)
#define	__alloc_size(x)	__attribute__((__alloc_size__(x)))
#else
# 263 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__alloc_size(x)
#endif
# 265 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#if __GNUC_PREREQ__(4, 9) || __has_attribute(__alloc_align__)
#define	__alloc_align(x)	__attribute__((__alloc_align__(x)))
#else
# 268 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__alloc_align(x)
#endif
# 270 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#endif /* lint */
# 271 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#if !__GNUC_PREREQ__(2, 95)
#define	__alignof(x)	__offsetof(struct { char __a; x __b; }, __b)
#endif
# 275 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

/*
 * Keywords added in C11.
 */

#if !defined(__STDC_VERSION__) || __STDC_VERSION__ < 201112L || defined(lint)

#if !__has_extension(c_alignas)
#if (defined(__cplusplus) && __cplusplus >= 201103L) || \
    __has_extension(cxx_alignas)
#define	_Alignas(x)		alignas(x)
#else
# 287 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
/* XXX: Only emulates _Alignas(constant-expression); not _Alignas(type-name). */
#define	_Alignas(x)		__aligned(x)
#endif
# 290 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#endif
# 291 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#if defined(__cplusplus) && __cplusplus >= 201103L
#define	_Alignof(x)		alignof(x)
#else
# 295 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	_Alignof(x)		__alignof(x)
#endif
# 297 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#if !defined(__cplusplus) && !__has_extension(c_atomic) && \
    !__has_extension(cxx_atomic)
/*
 * No native support for _Atomic(). Place object in structure to prevent
 * most forms of direct non-atomic access.
 */
#define	_Atomic(T)		struct { T volatile __val; }
#endif
# 306 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#if defined(__cplusplus) && __cplusplus >= 201103L
#define	_Noreturn		[[noreturn]]
#else
# 310 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	_Noreturn		__dead2
#endif
# 312 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#if !__has_extension(c_static_assert)
#if (defined(__cplusplus) && __cplusplus >= 201103L) || \
    __has_extension(cxx_static_assert)
#define	_Static_assert(x, y)	static_assert(x, y)
#elif __GNUC_PREREQ__(4,6)
# 318 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
/* Nothing, gcc 4.6 and higher has _Static_assert built-in */
#elif defined(__COUNTER__)
# 320 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	_Static_assert(x, y)	__Static_assert(x, __COUNTER__)
#define	__Static_assert(x, y)	___Static_assert(x, y)
#define	___Static_assert(x, y)	typedef char __assert_ ## y[(x) ? 1 : -1] \
				__unused
#else
# 325 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	_Static_assert(x, y)	struct __hack
#endif
# 327 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#endif
# 328 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#if !__has_extension(c_thread_local)
/*
 * XXX: Some compilers (Clang 3.3, GCC 4.7) falsely announce C++11 mode
 * without actually supporting the thread_local keyword. Don't check for
 * the presence of C++11 when defining _Thread_local.
 */
#if /* (defined(__cplusplus) && __cplusplus >= 201103L) || */ \
    __has_extension(cxx_thread_local)
#define	_Thread_local		thread_local
#else
# 339 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	_Thread_local		__thread
#endif
# 341 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#endif
# 342 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#endif /* __STDC_VERSION__ || __STDC_VERSION__ < 201112L */
# 344 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

/*
 * Emulation of C11 _Generic().  Unlike the previously defined C11
 * keywords, it is not possible to implement this using exactly the same
 * syntax.  Therefore implement something similar under the name
 * __generic().  Unlike _Generic(), this macro can only distinguish
 * between a single type, so it requires nested invocations to
 * distinguish multiple cases.
 */

#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L) || \
    __has_extension(c_generic_selections)
#define	__generic(expr, t, yes, no)					\
	_Generic(expr, t: yes, default: no)
#elif __GNUC_PREREQ__(3, 1) && !defined(__cplusplus)
# 359 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__generic(expr, t, yes, no)					\
	__builtin_choose_expr(						\
	    __builtin_types_compatible_p(__typeof(expr), t), yes, no)
#endif
# 363 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

/*
 * C99 Static array indices in function parameter declarations.  Syntax such as:
 * void bar(int myArray[static 10]);
 * is allowed in C99 but not in C++.  Define __min_size appropriately so
 * headers using it can be compiled in either language.  Use like this:
 * void bar(int myArray[__min_size(10)]);
 */
#if !defined(__cplusplus) && \
    (defined(__clang__) || __GNUC_PREREQ__(4, 6)) && \
    (!defined(__STDC_VERSION__) || (__STDC_VERSION__ >= 199901))
#define __min_size(x)	static (x)
#else
# 376 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define __min_size(x)	(x)
#endif
# 378 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(2, 96)
#define	__malloc_like	__attribute__((__malloc__))
#define	__pure		__attribute__((__pure__))
#else
# 383 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__malloc_like
#define	__pure
#endif
# 386 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(3, 1) || (defined(__INTEL_COMPILER) && __INTEL_COMPILER >= 800)
#define	__always_inline	__inline__ __attribute__((__always_inline__))
#else
# 390 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__always_inline
#endif
# 392 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(3, 1)
#define	__noinline	__attribute__ ((__noinline__))
#else
# 396 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__noinline
#endif
# 398 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(3, 3)
#define	__nonnull(x)	__attribute__((__nonnull__ x))
#define	__nonnull_all	__attribute__((__nonnull__))
#else
# 403 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__nonnull(x)
#define	__nonnull_all
#endif
# 406 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(3, 4)
#define	__fastcall	__attribute__((__fastcall__))
#define	__result_use_check	__attribute__((__warn_unused_result__))
#else
# 411 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__fastcall
#define	__result_use_check
#endif
# 414 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(4, 1)
#define	__returns_twice	__attribute__((__returns_twice__))
#else
# 418 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__returns_twice
#endif
# 420 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(4, 6) || __has_builtin(__builtin_unreachable)
#define	__unreachable()	__builtin_unreachable()
#else
# 424 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__unreachable()	((void)0)
#endif
# 426 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

/* XXX: should use `#if __STDC_VERSION__ < 199901'. */
#if !__GNUC_PREREQ__(2, 7) && !defined(__INTEL_COMPILER)
#define	__func__	NULL
#endif
# 431 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

/*
 * GCC 2.95 provides `__restrict' as an extension to C90 to support the
 * C99-specific `restrict' type qualifier.  We happen to use `__restrict' as
 * a way to define the `restrict' type qualifier without disturbing older
 * software that is unaware of C99 keywords.
 */
#if !(__GNUC__ == 2 && __GNUC_MINOR__ == 95)
#if !defined(__STDC_VERSION__) || __STDC_VERSION__ < 199901 || defined(lint)
#define	__restrict
#else
# 442 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__restrict	restrict
#endif
# 444 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#endif
# 445 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

/*
 * GNU C version 2.96 adds explicit branch prediction so that
 * the CPU back-end can hint the processor and also so that
 * code blocks can be reordered such that the predicted path
 * sees a more linear flow, thus improving cache behavior, etc.
 *
 * The following two macros provide us with a way to utilize this
 * compiler feature.  Use __predict_true() if you expect the expression
 * to evaluate to true, and __predict_false() if you expect the
 * expression to evaluate to false.
 *
 * A few notes about usage:
 *
 *	* Generally, __predict_false() error condition checks (unless
 *	  you have some _strong_ reason to do otherwise, in which case
 *	  document it), and/or __predict_true() `no-error' condition
 *	  checks, assuming you want to optimize for the no-error case.
 *
 *	* Other than that, if you don't know the likelihood of a test
 *	  succeeding from empirical or other `hard' evidence, don't
 *	  make predictions.
 *
 *	* These are meant to be used in places that are run `a lot'.
 *	  It is wasteful to make predictions in code that is run
 *	  seldomly (e.g. at subsystem initialization time) as the
 *	  basic block reordering that this affects can often generate
 *	  larger code.
 */
#if __GNUC_PREREQ__(2, 96)
#define	__predict_true(exp)     __builtin_expect((exp), 1)
#define	__predict_false(exp)    __builtin_expect((exp), 0)
#else
# 478 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__predict_true(exp)     (exp)
#define	__predict_false(exp)    (exp)
#endif
# 481 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(4, 0)
#define	__null_sentinel	__attribute__((__sentinel__))
#define	__exported	__attribute__((__visibility__("default")))
/* Only default visibility is supported on PE/COFF targets. */
#ifndef __CYGWIN__
#define	__hidden	__attribute__((__visibility__("hidden")))
#else
# 489 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__hidden
#endif
# 491 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#else
# 492 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__null_sentinel
#define	__exported
#define	__hidden
#endif
# 496 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#define __offsetof(type, field)	offsetof(type, field)
#define	__rangeof(type, start, end) \
	(__offsetof(type, end) - __offsetof(type, start))

/*
 * Given the pointer x to the member m of the struct s, return
 * a pointer to the containing structure.  When using GCC, we first
 * assign pointer x to a local variable, to check that its type is
 * compatible with member m.
 */
#if __GNUC_PREREQ__(3, 1)
#define	__containerof(x, s, m) ({					\
	const volatile __typeof(((s *)0)->m) *__x = (x);		\
	__DEQUALIFY(s *, (const volatile char *)__x - __offsetof(s, m));\
})
#else
# 513 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__containerof(x, s, m)						\
	__DEQUALIFY(s *, (const volatile char *)(x) - __offsetof(s, m))
#endif
# 516 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

/*
 * Compiler-dependent macros to declare that functions take printf-like
 * or scanf-like arguments.  They are null except for versions of gcc
 * that are known to support the features properly (old versions of gcc-2
 * didn't permit keeping the keywords out of the application namespace).
 */
#if !__GNUC_PREREQ__(2, 7) && !defined(__INTEL_COMPILER)
#define	__printflike(fmtarg, firstvararg)
#define	__scanflike(fmtarg, firstvararg)
#define	__format_arg(fmtarg)
#define	__strfmonlike(fmtarg, firstvararg)
#define	__strftimelike(fmtarg, firstvararg)
#else
# 530 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__printflike(fmtarg, firstvararg) \
	    __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define	__scanflike(fmtarg, firstvararg) \
	    __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define	__format_arg(fmtarg)	__attribute__((__format_arg__ (fmtarg)))
#define	__strfmonlike(fmtarg, firstvararg) \
	    __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define	__strftimelike(fmtarg, firstvararg) \
	    __attribute__((__format__ (__strftime__, fmtarg, firstvararg)))
#endif
# 540 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

/* Compiler-dependent macros that rely on FreeBSD-specific extensions. */
#if defined(__FreeBSD_cc_version) && __FreeBSD_cc_version >= 300001 && \
    defined(__GNUC__) && !defined(__INTEL_COMPILER)
#define	__printf0like(fmtarg, firstvararg) \
	    __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#else
# 547 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__printf0like(fmtarg, firstvararg)
#endif
# 549 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#if defined(__GNUC__) || defined(__INTEL_COMPILER)
#ifndef __INTEL_COMPILER
#define	__strong_reference(sym,aliassym)	\
	extern __typeof (sym) aliassym __attribute__ ((__alias__ (#sym)))
#endif
# 555 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#ifdef __ELF__
#ifdef __STDC__
#define	__weak_reference(sym,alias)	\
	__asm__(".weak " #alias);	\
	__asm__(".equ "  #alias ", " #sym)
#define	__warn_references(sym,msg)	\
	__asm__(".section .gnu.warning." #sym);	\
	__asm__(".asciz \"" msg "\"");	\
	__asm__(".previous")
#define	__sym_compat(sym,impl,verid)	\
	__asm__(".symver " #impl ", " #sym "@" #verid)
#define	__sym_default(sym,impl,verid)	\
	__asm__(".symver " #impl ", " #sym "@@" #verid)
#else
# 569 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__weak_reference(sym,alias)	\
	__asm__(".weak alias");		\
	__asm__(".equ alias, sym")
#define	__warn_references(sym,msg)	\
	__asm__(".section .gnu.warning.sym"); \
	__asm__(".asciz \"msg\"");	\
	__asm__(".previous")
#define	__sym_compat(sym,impl,verid)	\
	__asm__(".symver impl, sym@verid")
#define	__sym_default(impl,sym,verid)	\
	__asm__(".symver impl, sym@@verid")
#endif	/* __STDC__ */
# 581 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#else	/* !__ELF__ */
# 582 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#ifdef __STDC__
#define	__weak_reference(sym,alias)	\
	__asm__(".stabs \"_" #alias "\",11,0,0,0");	\
	__asm__(".stabs \"_" #sym "\",1,0,0,0")
#define	__warn_references(sym,msg)	\
	__asm__(".stabs \"" msg "\",30,0,0,0");		\
	__asm__(".stabs \"_" #sym "\",1,0,0,0")
#else
# 590 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__weak_reference(sym,alias)	\
	__asm__(".stabs \"_/**/alias\",11,0,0,0");	\
	__asm__(".stabs \"_/**/sym\",1,0,0,0")
#define	__warn_references(sym,msg)	\
	__asm__(".stabs msg,30,0,0,0");			\
	__asm__(".stabs \"_/**/sym\",1,0,0,0")
#endif	/* __STDC__ */
# 597 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#endif	/* __ELF__ */
# 598 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#endif	/* __GNUC__ || __INTEL_COMPILER */
# 599 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__FBSDID
#define	__FBSDID(s)	struct __hack
#endif
# 603 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__RCSID
#define	__RCSID(s)	struct __hack
#endif
# 607 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__RCSID_SOURCE
#define	__RCSID_SOURCE(s)	struct __hack
#endif
# 611 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__SCCSID
#define	__SCCSID(s)	struct __hack
#endif
# 615 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__COPYRIGHT
#define	__COPYRIGHT(s)	struct __hack
#endif
# 619 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__DECONST
#define	__DECONST(type, var)	((type)(__uintptr_t)(const void *)(var))
#endif
# 623 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__DEVOLATILE
#define	__DEVOLATILE(type, var)	((type)(__uintptr_t)(volatile void *)(var))
#endif
# 627 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__DEQUALIFY
#define	__DEQUALIFY(type, var)	((type)(__uintptr_t)(const volatile void *)(var))
#endif
# 631 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

/*
 * Nullability qualifiers: currently only supported by Clang.
 */
#if !(defined(__clang__) && __has_feature(nullability))
#define	_Nonnull
#define	_Nullable
#define	_Null_unspecified
#define	__NULLABILITY_PRAGMA_PUSH
#define	__NULLABILITY_PRAGMA_POP
#else
# 642 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__NULLABILITY_PRAGMA_PUSH _Pragma("clang diagnostic push")	\
	_Pragma("clang diagnostic ignored \"-Wnullability-completeness\"")
#define	__NULLABILITY_PRAGMA_POP _Pragma("clang diagnostic pop")
#endif
# 646 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

/*
 * Type Safety Checking
 *
 * Clang provides additional attributes to enable checking type safety
 * properties that cannot be enforced by the C type system. 
 */

#if __has_attribute(__argument_with_type_tag__) && \
    __has_attribute(__type_tag_for_datatype__) && !defined(lint)
#define	__arg_type_tag(arg_kind, arg_idx, type_tag_idx) \
	    __attribute__((__argument_with_type_tag__(arg_kind, arg_idx, type_tag_idx)))
#define	__datatype_type_tag(kind, type) \
	    __attribute__((__type_tag_for_datatype__(kind, type)))
#else
# 661 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__arg_type_tag(arg_kind, arg_idx, type_tag_idx)
#define	__datatype_type_tag(kind, type)
#endif
# 664 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

/*
 * Lock annotations.
 *
 * Clang provides support for doing basic thread-safety tests at
 * compile-time, by marking which locks will/should be held when
 * entering/leaving a functions.
 *
 * Furthermore, it is also possible to annotate variables and structure
 * members to enforce that they are only accessed when certain locks are
 * held.
 */

#if __has_extension(c_thread_safety_attributes)
#define	__lock_annotate(x)	__attribute__((x))
#else
# 680 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
#define	__lock_annotate(x)
#endif
# 682 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3

/* Structure implements a lock. */
/* FIXME: Use __lockable__, etc. to avoid colliding with user namespace macros,
 * once clang is fixed: https://bugs.llvm.org/show_bug.cgi?id=34319 */
#define	__lockable		__lock_annotate(lockable)

/* Function acquires an exclusive or shared lock. */
#define	__locks_exclusive(...) \
	__lock_annotate(exclusive_lock_function(__VA_ARGS__))
#define	__locks_shared(...) \
	__lock_annotate(shared_lock_function(__VA_ARGS__))

/* Function attempts to acquire an exclusive or shared lock. */
#define	__trylocks_exclusive(...) \
	__lock_annotate(exclusive_trylock_function(__VA_ARGS__))
#define	__trylocks_shared(...) \
	__lock_annotate(shared_trylock_function(__VA_ARGS__))

/* Function releases a lock. */
#define	__unlocks(...)		__lock_annotate(unlock_function(__VA_ARGS__))

/* Function asserts that an exclusive or shared lock is held. */
#define	__asserts_exclusive(...) \
	__lock_annotate(assert_exclusive_lock(__VA_ARGS__))
#define	__asserts_shared(...) \
	__lock_annotate(assert_shared_lock(__VA_ARGS__))

/* Function requires that an exclusive or shared lock is or is not held. */
#define	__requires_exclusive(...) \
	__lock_annotate(exclusive_locks_required(__VA_ARGS__))
#define	__requires_shared(...) \
	__lock_annotate(shared_locks_required(__VA_ARGS__))
#define	__requires_unlocked(...) \
	__lock_annotate(locks_excluded(__VA_ARGS__))

/* Function should not be analyzed. */
#define	__no_lock_analysis	__lock_annotate(no_thread_safety_analysis)

/* Guard variables and structure members by lock. */
#define	__guarded_by(x)		__lock_annotate(guarded_by(x))
#define	__pt_guarded_by(x)	__lock_annotate(pt_guarded_by(x))

#endif /* !_SYS_CDEFS_H_ */
# 725 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/cdefs.h" 3
# 22 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <machine/_types.h>
#endif /* expanded by -frewrite-includes */
# 22 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
# 23 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

/* BSD types permitted by POSIX and always exposed as in Glibc.  Only provided
   for backward compatibility with BSD code.  The uintN_t standard types should
   be preferred in new code. */
#if ___int8_t_defined
typedef __uint8_t	u_int8_t;
#endif
# 30 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
#if ___int16_t_defined
typedef __uint16_t	u_int16_t;
#endif 
# 33 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
#if ___int32_t_defined
typedef __uint32_t	u_int32_t;
#endif
# 36 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
#if ___int64_t_defined
typedef __uint64_t	u_int64_t;
#endif
# 39 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
typedef int register_t;
#define __BIT_TYPES_DEFINED__ 1

#if defined(__rtems__) || defined(__XMK__)
/*
 *  The following section is RTEMS specific and is needed to more
 *  closely match the types defined in the BSD sys/types.h.
 *  This is needed to let the RTEMS/BSD TCP/IP stack compile.
 */

/* deprecated */
#if ___int64_t_defined
typedef	__uint64_t	u_quad_t;
typedef	__int64_t	quad_t;
typedef	quad_t *	qaddr_t;
#endif
# 55 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#endif /* __rtems__ || __XMK__ */
# 57 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#ifndef __need_inttypes

#define _SYS_TYPES_H
/* <stddef.h> must be before <sys/_types.h> for __size_t considerations */
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 62 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
# 1 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#if !defined(__STDDEF_H) || defined(__need_ptrdiff_t) ||                       \
    defined(__need_size_t) || defined(__need_wchar_t) ||                       \
    defined(__need_NULL) || defined(__need_wint_t)

#if !defined(__need_ptrdiff_t) && !defined(__need_size_t) &&                   \
    !defined(__need_wchar_t) && !defined(__need_NULL) &&                       \
    !defined(__need_wint_t)
/* Always define miscellaneous pieces when modules are available. */
#if !__has_feature(modules)
#define __STDDEF_H
#endif
# 37 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 44 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_ptrdiff_t)
#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 51 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 53 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 55 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_size_t)
#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 62 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 64 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 66 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 76 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 78 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif /* defined(__need_STDDEF_H_misc) */
# 79 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_wchar_t)
#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 89 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif
# 90 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 92 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif
# 93 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 95 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_NULL)
#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 102 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 104 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#else
# 105 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 107 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 112 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif
# 113 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 115 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 118 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
# 119 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif
# 120 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 123 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 132 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 134 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 136 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#endif
# 138 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
# 63 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_types.h>
#endif /* expanded by -frewrite-includes */
# 63 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
# 64 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_stdint.h>
#endif /* expanded by -frewrite-includes */
# 64 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_stdint.h" 1 3
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

#ifndef _SYS__STDINT_H
#define _SYS__STDINT_H

#if 0 /* expanded by -frewrite-includes */
#include <machine/_default_types.h>
#endif /* expanded by -frewrite-includes */
# 12 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_stdint.h" 3
# 13 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_stdint.h" 3

#ifdef __cplusplus
extern "C" {
#endif
# 17 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_stdint.h" 3

#ifdef ___int8_t_defined
#ifndef _INT8_T_DECLARED
typedef __int8_t int8_t ;
#define _INT8_T_DECLARED
#endif
# 23 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_stdint.h" 3
#ifndef _UINT8_T_DECLARED
typedef __uint8_t uint8_t ;
#define _UINT8_T_DECLARED
#endif
# 27 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_stdint.h" 3
#define __int8_t_defined 1
#endif /* ___int8_t_defined */
# 29 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_stdint.h" 3

#ifdef ___int16_t_defined
#ifndef _INT16_T_DECLARED
typedef __int16_t int16_t ;
#define _INT16_T_DECLARED
#endif
# 35 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_stdint.h" 3
#ifndef _UINT16_T_DECLARED
typedef __uint16_t uint16_t ;
#define _UINT16_T_DECLARED
#endif
# 39 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_stdint.h" 3
#define __int16_t_defined 1
#endif /* ___int16_t_defined */
# 41 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_stdint.h" 3

#ifdef ___int32_t_defined
#ifndef _INT32_T_DECLARED
typedef __int32_t int32_t ;
#define _INT32_T_DECLARED
#endif
# 47 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_stdint.h" 3
#ifndef _UINT32_T_DECLARED
typedef __uint32_t uint32_t ;
#define _UINT32_T_DECLARED
#endif
# 51 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_stdint.h" 3
#define __int32_t_defined 1
#endif /* ___int32_t_defined */
# 53 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_stdint.h" 3

#ifdef ___int64_t_defined
#ifndef _INT64_T_DECLARED
typedef __int64_t int64_t ;
#define _INT64_T_DECLARED
#endif
# 59 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_stdint.h" 3
#ifndef _UINT64_T_DECLARED
typedef __uint64_t uint64_t ;
#define _UINT64_T_DECLARED
#endif
# 63 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_stdint.h" 3
#define __int64_t_defined 1
#endif /* ___int64_t_defined */
# 65 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_stdint.h" 3

#ifndef _INTMAX_T_DECLARED
typedef __intmax_t intmax_t;
#define _INTMAX_T_DECLARED
#endif
# 70 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_stdint.h" 3

#ifndef _UINTMAX_T_DECLARED
typedef __uintmax_t uintmax_t;
#define _UINTMAX_T_DECLARED
#endif
# 75 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_stdint.h" 3

#ifndef _INTPTR_T_DECLARED
typedef __intptr_t intptr_t;
#define _INTPTR_T_DECLARED
#endif
# 80 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_stdint.h" 3

#ifndef _UINTPTR_T_DECLARED
typedef __uintptr_t uintptr_t;
#define _UINTPTR_T_DECLARED
#endif
# 85 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_stdint.h" 3

#ifdef __cplusplus
}
#endif
# 89 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_stdint.h" 3

#endif /* _SYS__STDINT_H */
# 91 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_stdint.h" 3
# 65 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 2 3

#if __BSD_VISIBLE
#if 0 /* expanded by -frewrite-includes */
#include <machine/endian.h>
#endif /* expanded by -frewrite-includes */
# 67 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/endian.h" 1 3
#ifndef __MACHINE_ENDIAN_H__
#define	__MACHINE_ENDIAN_H__

#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 4 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/endian.h" 3
# 5 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/endian.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_types.h>
#endif /* expanded by -frewrite-includes */
# 5 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/endian.h" 3
# 6 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/endian.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <machine/_endian.h>
#endif /* expanded by -frewrite-includes */
# 6 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/endian.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_endian.h" 1 3
#ifndef __MACHINE_ENDIAN_H__
#error "must be included via <machine/endian.h>"
#endif /* !__MACHINE_ENDIAN_H__ */
# 4 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_endian.h" 3

#if 0 /* expanded by -frewrite-includes */
#include <sys/config.h>
#endif /* expanded by -frewrite-includes */
# 5 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_endian.h" 3
# 6 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_endian.h" 3

#ifdef __PPC__
/* Get rid of GCC builtin defines on PowerPC */
#ifdef _BIG_ENDIAN
#undef _BIG_ENDIAN
#endif
# 12 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_endian.h" 3
#ifdef _LITTLE_ENDIAN
#undef _LITTLE_ENDIAN
#endif
# 15 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_endian.h" 3
#endif /* __PPC__ */
# 16 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_endian.h" 3

#ifndef _LITTLE_ENDIAN
#define	_LITTLE_ENDIAN	1234
#endif
# 20 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_endian.h" 3

#ifndef _BIG_ENDIAN
#define	_BIG_ENDIAN	4321
#endif
# 24 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_endian.h" 3

#ifndef _PDP_ENDIAN
#define	_PDP_ENDIAN	3412
#endif
# 28 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_endian.h" 3

#ifndef _BYTE_ORDER
#if defined(__IEEE_LITTLE_ENDIAN) || defined(__IEEE_BYTES_LITTLE_ENDIAN)
#define	_BYTE_ORDER	_LITTLE_ENDIAN
#else
# 33 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_endian.h" 3
#define	_BYTE_ORDER	_BIG_ENDIAN
#endif
# 35 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_endian.h" 3
#endif
# 36 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/_endian.h" 3
# 7 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/endian.h" 2 3

#if _BYTE_ORDER == _LITTLE_ENDIAN
#define	_QUAD_HIGHWORD	1
#define	_QUAD_LOWWORD	0
#else
# 12 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/endian.h" 3
#define	_QUAD_HIGHWORD	0
#define	_QUAD_LOWWORD	1
#endif
# 15 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/endian.h" 3

#if __BSD_VISIBLE
#define	LITTLE_ENDIAN	_LITTLE_ENDIAN
#define	BIG_ENDIAN	_BIG_ENDIAN
#define	PDP_ENDIAN	_PDP_ENDIAN
#define	BYTE_ORDER	_BYTE_ORDER
#endif
# 22 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/endian.h" 3

#ifdef __GNUC__
#define	__bswap16(_x)	__builtin_bswap16(_x)
#define	__bswap32(_x)	__builtin_bswap32(_x)
#define	__bswap64(_x)	__builtin_bswap64(_x)
#else /* __GNUC__ */
# 28 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/endian.h" 3
static __inline __uint16_t
__bswap16(__uint16_t _x)
{

	return ((__uint16_t)((_x >> 8) | ((_x << 8) & 0xff00)));
}

static __inline __uint32_t
__bswap32(__uint32_t _x)
{

	return ((__uint32_t)((_x >> 24) | ((_x >> 8) & 0xff00) |
	    ((_x << 8) & 0xff0000) | ((_x << 24) & 0xff000000)));
}

static __inline __uint64_t
__bswap64(__uint64_t _x)
{

	return ((__uint64_t)((_x >> 56) | ((_x >> 40) & 0xff00) |
	    ((_x >> 24) & 0xff0000) | ((_x >> 8) & 0xff000000) |
	    ((_x << 8) & ((__uint64_t)0xff << 32)) |
	    ((_x << 24) & ((__uint64_t)0xff << 40)) |
	    ((_x << 40) & ((__uint64_t)0xff << 48)) | ((_x << 56))));
}
#endif /* !__GNUC__ */
# 54 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/endian.h" 3

#ifndef __machine_host_to_from_network_defined
#if _BYTE_ORDER == _LITTLE_ENDIAN
#define	__htonl(_x)	__bswap32(_x)
#define	__htons(_x)	__bswap16(_x)
#define	__ntohl(_x)	__bswap32(_x)
#define	__ntohs(_x)	__bswap16(_x)
#else
# 62 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/endian.h" 3
#define	__htonl(_x)	((__uint32_t)(_x))
#define	__htons(_x)	((__uint16_t)(_x))
#define	__ntohl(_x)	((__uint32_t)(_x))
#define	__ntohs(_x)	((__uint16_t)(_x))
#endif
# 67 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/endian.h" 3
#endif /* __machine_host_to_from_network_defined */
# 68 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/endian.h" 3

#endif /* __MACHINE_ENDIAN_H__ */
# 70 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/endian.h" 3
# 68 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/select.h>
#endif /* expanded by -frewrite-includes */
# 68 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/select.h" 1 3
#ifndef _SYS_SELECT_H
#define _SYS_SELECT_H

/* We don't define fd_set and friends if we are compiling POSIX
   source, or if we have included (or may include as indicated
   by __USE_W32_SOCKETS) the W32api winsock[2].h header which
   defines Windows versions of them.   Note that a program which
   includes the W32api winsock[2].h header must know what it is doing;
   it must not call the Cygwin select function.
*/
# if !(defined (_WINSOCK_H) || defined (_WINSOCKAPI_) || defined (__USE_W32_SOCKETS))

#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 13 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/select.h" 3
# 14 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/select.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_sigset.h>
#endif /* expanded by -frewrite-includes */
# 14 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/select.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_sigset.h" 1 3
/*-
 * Copyright (c) 1982, 1986, 1989, 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 * (c) UNIX System Laboratories, Inc.
 * All or some portions of this file are derived from material licensed
 * to the University of California by American Telephone and Telegraph
 * Co. or Unix System Laboratories, Inc. and are reproduced herein with
 * the permission of UNIX System Laboratories, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)signal.h	8.4 (Berkeley) 5/4/95
 * $FreeBSD$
 */

#ifndef _SYS__SIGSET_H_
#define	_SYS__SIGSET_H_

typedef unsigned long __sigset_t;

#endif /* !_SYS__SIGSET_H_ */
# 44 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_sigset.h" 3
# 15 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/select.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_timeval.h>
#endif /* expanded by -frewrite-includes */
# 15 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/select.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_timeval.h" 1 3
/*-
 * Copyright (c) 2002 Mike Barcroft <mike@FreeBSD.org>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD$
 */

#ifndef _SYS__TIMEVAL_H_
#define _SYS__TIMEVAL_H_

#if 0 /* expanded by -frewrite-includes */
#include <sys/_types.h>
#endif /* expanded by -frewrite-includes */
# 32 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_timeval.h" 3
# 33 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_timeval.h" 3

#ifndef _SUSECONDS_T_DECLARED
typedef	__suseconds_t	suseconds_t;
#define	_SUSECONDS_T_DECLARED
#endif
# 38 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_timeval.h" 3

#if !defined(__time_t_defined) && !defined(_TIME_T_DECLARED)
typedef	_TIME_T_	time_t;
#define	__time_t_defined
#define	_TIME_T_DECLARED
#endif
# 44 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_timeval.h" 3

/* This define is also used outside of Newlib, e.g. in MinGW-w64 */
#ifndef _TIMEVAL_DEFINED
#define _TIMEVAL_DEFINED

/*
 * Structure returned by gettimeofday(2) system call, and used in other calls.
 */
struct timeval {
	time_t		tv_sec;		/* seconds */
	suseconds_t	tv_usec;	/* and microseconds */
};

#if __BSD_VISIBLE
#ifndef _KERNEL			/* NetBSD/OpenBSD compatible interfaces */

#define	timerclear(tvp)		((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define	timerisset(tvp)		((tvp)->tv_sec || (tvp)->tv_usec)
#define	timercmp(tvp, uvp, cmp)					\
	(((tvp)->tv_sec == (uvp)->tv_sec) ?				\
	    ((tvp)->tv_usec cmp (uvp)->tv_usec) :			\
	    ((tvp)->tv_sec cmp (uvp)->tv_sec))
#define	timeradd(tvp, uvp, vvp)						\
	do {								\
		(vvp)->tv_sec = (tvp)->tv_sec + (uvp)->tv_sec;		\
		(vvp)->tv_usec = (tvp)->tv_usec + (uvp)->tv_usec;	\
		if ((vvp)->tv_usec >= 1000000) {			\
			(vvp)->tv_sec++;				\
			(vvp)->tv_usec -= 1000000;			\
		}							\
	} while (0)
#define	timersub(tvp, uvp, vvp)						\
	do {								\
		(vvp)->tv_sec = (tvp)->tv_sec - (uvp)->tv_sec;		\
		(vvp)->tv_usec = (tvp)->tv_usec - (uvp)->tv_usec;	\
		if ((vvp)->tv_usec < 0) {				\
			(vvp)->tv_sec--;				\
			(vvp)->tv_usec += 1000000;			\
		}							\
	} while (0)
#endif
# 85 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_timeval.h" 3
#endif /* __BSD_VISIBLE */
# 86 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_timeval.h" 3

#endif /* _TIMEVAL_DEFINED */
# 88 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_timeval.h" 3

#endif /* !_SYS__TIMEVAL_H_ */
# 90 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_timeval.h" 3
# 16 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/select.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/timespec.h>
#endif /* expanded by -frewrite-includes */
# 16 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/select.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/timespec.h" 1 3
/*-
 * Copyright (c) 1982, 1986, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)time.h	8.5 (Berkeley) 5/4/95
 * from: FreeBSD: src/sys/sys/time.h,v 1.43 2000/03/20 14:09:05 phk Exp
 *	$FreeBSD$
 */

#ifndef _SYS_TIMESPEC_H_
#define _SYS_TIMESPEC_H_

#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 37 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/timespec.h" 3
# 38 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/timespec.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_timespec.h>
#endif /* expanded by -frewrite-includes */
# 38 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/timespec.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_timespec.h" 1 3
/*-
 * Copyright (c) 1982, 1986, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)time.h	8.5 (Berkeley) 5/4/95
 * from: FreeBSD: src/sys/sys/time.h,v 1.43 2000/03/20 14:09:05 phk Exp
 *	$FreeBSD$
 */

#ifndef _SYS__TIMESPEC_H_
#define	_SYS__TIMESPEC_H_

#if 0 /* expanded by -frewrite-includes */
#include <sys/_types.h>
#endif /* expanded by -frewrite-includes */
# 37 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_timespec.h" 3
# 38 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_timespec.h" 3

#if !defined(__time_t_defined) && !defined(_TIME_T_DECLARED)
typedef	_TIME_T_	time_t;
#define	__time_t_defined
#define	_TIME_T_DECLARED
#endif
# 44 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_timespec.h" 3

struct timespec {
	time_t	tv_sec;		/* seconds */
	long	tv_nsec;	/* and nanoseconds */
};

#endif /* !_SYS__TIMESPEC_H_ */
# 51 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_timespec.h" 3
# 39 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/timespec.h" 2 3

#if __BSD_VISIBLE
#define	TIMEVAL_TO_TIMESPEC(tv, ts)					\
	do {								\
		(ts)->tv_sec = (tv)->tv_sec;				\
		(ts)->tv_nsec = (tv)->tv_usec * 1000;			\
	} while (0)
#define	TIMESPEC_TO_TIMEVAL(tv, ts)					\
	do {								\
		(tv)->tv_sec = (ts)->tv_sec;				\
		(tv)->tv_usec = (ts)->tv_nsec / 1000;			\
	} while (0)

#endif /* __BSD_VISIBLE */
# 53 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/timespec.h" 3

/*
 * Structure defined by POSIX.1b to be like a itimerval, but with
 * timespecs. Used in the timer_*() system calls.
 */
struct itimerspec {
	struct timespec  it_interval;
	struct timespec  it_value;
};

#endif /* _SYS_TIMESPEC_H_ */
# 64 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/timespec.h" 3
# 17 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/select.h" 2 3

#if !defined(_SIGSET_T_DECLARED)
#define	_SIGSET_T_DECLARED
typedef	__sigset_t	sigset_t;
#endif
# 22 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/select.h" 3

#  define _SYS_TYPES_FD_SET
/*
 * Select uses bit masks of file descriptors in longs.
 * These macros manipulate such bit fields (the filesystem macros use chars).
 * FD_SETSIZE may be defined by the user, but the default here
 * should be >= NOFILE (param.h).
 */
#  ifndef	FD_SETSIZE
#	define	FD_SETSIZE	64
#  endif
# 33 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/select.h" 3

typedef	unsigned long	fd_mask;
#  define	NFDBITS	(sizeof (fd_mask) * 8)	/* bits per mask */
#  ifndef	_howmany
#	define	_howmany(x,y)	(((x)+((y)-1))/(y))
#  endif
# 39 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/select.h" 3

/* We use a macro for fd_set so that including Sockets.h afterwards
   can work.  */
typedef	struct _types_fd_set {
	fd_mask	fds_bits[_howmany(FD_SETSIZE, NFDBITS)];
} _types_fd_set;

#define fd_set _types_fd_set

#  define	FD_SET(n, p)	((p)->fds_bits[(n)/NFDBITS] |= (1L << ((n) % NFDBITS)))
#  define	FD_CLR(n, p)	((p)->fds_bits[(n)/NFDBITS] &= ~(1L << ((n) % NFDBITS)))
#  define	FD_ISSET(n, p)	((p)->fds_bits[(n)/NFDBITS] & (1L << ((n) % NFDBITS)))
#  define	FD_ZERO(p)	(__extension__ (void)({ \
     size_t __i; \
     char *__tmp = (char *)p; \
     for (__i = 0; __i < sizeof (*(p)); ++__i) \
       *__tmp++ = 0; \
}))

#if !defined (__INSIDE_CYGWIN_NET__)

__BEGIN_DECLS

int select __P ((int __n, fd_set *__readfds, fd_set *__writefds,
		 fd_set *__exceptfds, struct timeval *__timeout));
#if __POSIX_VISIBLE >= 200112
int pselect __P ((int __n, fd_set *__readfds, fd_set *__writefds,
		  fd_set *__exceptfds, const struct timespec *__timeout,
		  const sigset_t *__set));
#endif
# 69 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/select.h" 3

__END_DECLS

#endif /* !__INSIDE_CYGWIN_NET__ */
# 73 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/select.h" 3

#endif /* !(_WINSOCK_H || _WINSOCKAPI_ || __USE_W32_SOCKETS) */
# 75 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/select.h" 3

#endif /* sys/select.h */
# 77 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/select.h" 3
# 69 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 2 3
#  define	physadr		physadr_t
#  define	quad		quad_t

#ifndef _IN_ADDR_T_DECLARED
typedef	__uint32_t	in_addr_t;	/* base type for internet address */
#define	_IN_ADDR_T_DECLARED
#endif
# 76 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#ifndef _IN_PORT_T_DECLARED
typedef	__uint16_t	in_port_t;
#define	_IN_PORT_T_DECLARED
#endif
# 81 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
#endif /* __BSD_VISIBLE */
# 82 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#if __MISC_VISIBLE
#ifndef _BSDTYPES_DEFINED
/* also defined in mingw/gmon.h and in w32api/winsock[2].h */
#ifndef __u_char_defined
typedef	unsigned char	u_char;
#define __u_char_defined
#endif
# 90 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
#ifndef __u_short_defined
typedef	unsigned short	u_short;
#define __u_short_defined
#endif
# 94 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
#ifndef __u_int_defined
typedef	unsigned int	u_int;
#define __u_int_defined
#endif
# 98 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
#ifndef __u_long_defined
typedef	unsigned long	u_long;
#define __u_long_defined
#endif
# 102 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
#define _BSDTYPES_DEFINED
#endif
# 104 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
#endif	/*__BSD_VISIBLE || __CYGWIN__ */
# 105 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#if __MISC_VISIBLE
typedef	unsigned short	ushort;		/* System V compatibility */
typedef	unsigned int	uint;		/* System V compatibility */
typedef	unsigned long	ulong;		/* System V compatibility */
#endif
# 111 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#ifndef _BLKCNT_T_DECLARED
typedef	__blkcnt_t	blkcnt_t;
#define	_BLKCNT_T_DECLARED
#endif
# 116 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#ifndef _BLKSIZE_T_DECLARED
typedef	__blksize_t	blksize_t;
#define	_BLKSIZE_T_DECLARED
#endif
# 121 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#if !defined(__clock_t_defined) && !defined(_CLOCK_T_DECLARED)
typedef	_CLOCK_T_	clock_t;
#define	__clock_t_defined
#define	_CLOCK_T_DECLARED
#endif
# 127 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#if !defined(__time_t_defined) && !defined(_TIME_T_DECLARED)
typedef	_TIME_T_	time_t;
#define	__time_t_defined
#define	_TIME_T_DECLARED
#endif
# 133 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#ifndef __daddr_t_defined
typedef	long	daddr_t;
#define __daddr_t_defined
#endif
# 138 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
#ifndef __caddr_t_defined
typedef	char *	caddr_t;
#define __caddr_t_defined
#endif
# 142 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#ifndef _FSBLKCNT_T_DECLARED		/* for statvfs() */
typedef	__fsblkcnt_t	fsblkcnt_t;
typedef	__fsfilcnt_t	fsfilcnt_t;
#define	_FSBLKCNT_T_DECLARED
#endif
# 148 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#ifndef _ID_T_DECLARED
typedef	__id_t		id_t;		/* can hold a uid_t or pid_t */
#define	_ID_T_DECLARED
#endif
# 153 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#ifndef _INO_T_DECLARED
typedef	__ino_t		ino_t;		/* inode number */
#define	_INO_T_DECLARED
#endif
# 158 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#if defined(__i386__) && (defined(GO32) || defined(__MSDOS__))
typedef	char *		addr_t;
typedef unsigned long vm_offset_t;
typedef unsigned long vm_size_t;
#endif /* __i386__ && (GO32 || __MSDOS__) */
# 164 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

/*
 * All these should be machine specific - right now they are all broken.
 * However, for all of Cygnus' embedded targets, we want them to all be
 * the same.  Otherwise things like sizeof (struct stat) might depend on
 * how the file was compiled (e.g. -mint16 vs -mint32, etc.).
 */

#ifndef _OFF_T_DECLARED
typedef	__off_t		off_t;		/* file offset */
#define	_OFF_T_DECLARED
#endif
# 176 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
#ifndef _DEV_T_DECLARED
typedef	__dev_t		dev_t;		/* device number or struct cdev */
#define	_DEV_T_DECLARED
#endif
# 180 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
#ifndef _UID_T_DECLARED
typedef	__uid_t		uid_t;		/* user id */
#define	_UID_T_DECLARED
#endif
# 184 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
#ifndef _GID_T_DECLARED
typedef	__gid_t		gid_t;		/* group id */
#define	_GID_T_DECLARED
#endif
# 188 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#ifndef _PID_T_DECLARED
typedef	__pid_t		pid_t;		/* process id */
#define	_PID_T_DECLARED
#endif
# 193 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#ifndef _KEY_T_DECLARED
typedef	__key_t		key_t;		/* IPC key */
#define	_KEY_T_DECLARED
#endif
# 198 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#ifndef _SSIZE_T_DECLARED
typedef _ssize_t ssize_t;
#define	_SSIZE_T_DECLARED
#endif
# 203 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#ifndef _MODE_T_DECLARED
typedef	__mode_t	mode_t;		/* permissions */
#define	_MODE_T_DECLARED
#endif
# 208 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#ifndef _NLINK_T_DECLARED
typedef	__nlink_t	nlink_t;	/* link count */
#define	_NLINK_T_DECLARED
#endif
# 213 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#if !defined(__clockid_t_defined) && !defined(_CLOCKID_T_DECLARED)
typedef	__clockid_t	clockid_t;
#define	__clockid_t_defined
#define	_CLOCKID_T_DECLARED
#endif
# 219 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#if !defined(__timer_t_defined) && !defined(_TIMER_T_DECLARED)
typedef	__timer_t	timer_t;
#define	__timer_t_defined
#define	_TIMER_T_DECLARED
#endif
# 225 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#ifndef _USECONDS_T_DECLARED
typedef	__useconds_t	useconds_t;	/* microseconds (unsigned) */
#define	_USECONDS_T_DECLARED
#endif
# 230 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#ifndef _SUSECONDS_T_DECLARED
typedef	__suseconds_t	suseconds_t;
#define	_SUSECONDS_T_DECLARED
#endif
# 235 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

typedef	__int64_t	sbintime_t;

#if 0 /* expanded by -frewrite-includes */
#include <sys/features.h>
#endif /* expanded by -frewrite-includes */
# 238 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
# 239 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_pthreadtypes.h>
#endif /* expanded by -frewrite-includes */
# 239 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 1 3
/*
 *  Written by Joel Sherrill <joel.sherrill@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2013, 2015.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 */

#ifndef _SYS__PTHREADTYPES_H_
#define	_SYS__PTHREADTYPES_H_

#if defined(_POSIX_THREADS) || __POSIX_VISIBLE >= 199506

#if 0 /* expanded by -frewrite-includes */
#include <sys/sched.h>
#endif /* expanded by -frewrite-includes */
# 23 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/sched.h" 1 3
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2010.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */


#ifndef _SYS_SCHED_H_
#define _SYS_SCHED_H_

#if 0 /* expanded by -frewrite-includes */
#include <sys/_timespec.h>
#endif /* expanded by -frewrite-includes */
# 24 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/sched.h" 3
# 25 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/sched.h" 3

#ifdef __cplusplus
extern "C" {
#endif
# 29 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/sched.h" 3

/* Scheduling Policies */
/* Open Group Specifications Issue 6 */
#if defined(__CYGWIN__)
#define SCHED_OTHER    3
#else
# 35 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/sched.h" 3
#define SCHED_OTHER    0
#endif
# 37 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/sched.h" 3

#define SCHED_FIFO     1
#define SCHED_RR       2

#if defined(_POSIX_SPORADIC_SERVER)
#define SCHED_SPORADIC 4
#endif
# 44 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/sched.h" 3

/* Scheduling Parameters */
/* Open Group Specifications Issue 6 */

struct sched_param {
  int sched_priority;           /* Process execution scheduling priority */

#if defined(_POSIX_SPORADIC_SERVER) || defined(_POSIX_THREAD_SPORADIC_SERVER)
  int sched_ss_low_priority;    /* Low scheduling priority for sporadic */
                                /*   server */
  struct timespec sched_ss_repl_period;
                                /* Replenishment period for sporadic server */
  struct timespec sched_ss_init_budget;
                               /* Initial budget for sporadic server */
  int sched_ss_max_repl;       /* Maximum pending replenishments for */
                               /* sporadic server */
#endif
# 61 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/sched.h" 3
};

#ifdef __cplusplus
}
#endif
# 66 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/sched.h" 3

#endif
# 68 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/sched.h" 3
/* end of include file */

# 24 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 2 3

/*
 *  2.5 Primitive System Data Types,  P1003.1c/D10, p. 19.
 */

#if defined(__XMK__)
typedef unsigned int pthread_t;          /* identify a thread */
#else
# 32 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3
typedef __uint32_t pthread_t;            /* identify a thread */
#endif
# 34 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3

/* P1003.1c/D10, p. 118-119 */
#define PTHREAD_SCOPE_PROCESS 0
#define PTHREAD_SCOPE_SYSTEM  1

/* P1003.1c/D10, p. 111 */
#define PTHREAD_INHERIT_SCHED  1      /* scheduling policy and associated */
                                      /*   attributes are inherited from */
                                      /*   the calling thread. */
#define PTHREAD_EXPLICIT_SCHED 2      /* set from provided attribute object */

/* P1003.1c/D10, p. 141 */
#define PTHREAD_CREATE_DETACHED 0
#define PTHREAD_CREATE_JOINABLE  1

#if defined(__XMK__)
typedef struct pthread_attr_s {
  int contentionscope;
  struct sched_param schedparam;
  int  detachstate;
  void *stackaddr;
  size_t stacksize;
} pthread_attr_t;

#define PTHREAD_STACK_MIN       200

#else /* !defined(__XMK__) */
# 61 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3
typedef struct {
  int is_initialized;
  void *stackaddr;
  int stacksize;
  int contentionscope;
  int inheritsched;
  int schedpolicy;
  struct sched_param schedparam;

  /* P1003.4b/D8, p. 54 adds cputime_clock_allowed attribute.  */
#if defined(_POSIX_THREAD_CPUTIME)
  int  cputime_clock_allowed;  /* see time.h */
#endif
# 74 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3
  int  detachstate;
} pthread_attr_t;

#endif /* !defined(__XMK__) */
# 78 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3

#if defined(_POSIX_THREAD_PROCESS_SHARED)
/* NOTE: P1003.1c/D10, p. 81 defines following values for process_shared.  */

#define PTHREAD_PROCESS_PRIVATE 0 /* visible within only the creating process */
#define PTHREAD_PROCESS_SHARED  1 /* visible too all processes with access to */
                                  /*   the memory where the resource is */
                                  /*   located */
#endif
# 87 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3

#if defined(_POSIX_THREAD_PRIO_PROTECT)
/* Mutexes */

/* Values for blocking protocol. */

#define PTHREAD_PRIO_NONE    0
#define PTHREAD_PRIO_INHERIT 1
#define PTHREAD_PRIO_PROTECT 2
#endif
# 97 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3

#if defined(_UNIX98_THREAD_MUTEX_ATTRIBUTES)

/* Values for mutex type */

/* The following defines are part of the X/Open System Interface (XSI). */

/*
 * This type of mutex does not detect deadlock. A thread attempting to
 * relock this mutex without first unlocking it shall deadlock. Attempting
 * to unlock a mutex locked by a different thread results in undefined
 * behavior.  Attempting to unlock an unlocked mutex results in undefined
 * behavior.
 */
#define PTHREAD_MUTEX_NORMAL     0

/*
 * A thread attempting to relock this mutex without first unlocking
 * it shall succeed in locking the mutex.  The relocking deadlock which
 * can occur with mutexes of type PTHREAD_MUTEX_NORMAL cannot occur with
 * this type of mutex.  Multiple locks of this mutex shall require the
 * same number of unlocks to release the mutex before another thread can
 * acquire the mutex. A thread attempting to unlock a mutex which another
 * thread has locked shall return with an error.  A thread attempting to
 * unlock an unlocked mutex shall return with an error.
 */
#define PTHREAD_MUTEX_RECURSIVE  1

/*
 * This type of mutex provides error checking. A thread attempting
 * to relock this mutex without first unlocking it shall return with an
 * error. A thread attempting to unlock a mutex which another thread has
 * locked shall return with an error. A thread attempting to unlock an
 * unlocked mutex shall return with an error.
 */
#define PTHREAD_MUTEX_ERRORCHECK 2

/*
 * Attempting to recursively lock a mutex of this type results
 * in undefined behavior. Attempting to unlock a mutex of this type
 * which was not locked by the calling thread results in undefined
 * behavior. Attempting to unlock a mutex of this type which is not locked
 * results in undefined behavior. An implementation may map this mutex to
 * one of the other mutex types.
 */
#define PTHREAD_MUTEX_DEFAULT    3

#endif /* !defined(_UNIX98_THREAD_MUTEX_ATTRIBUTES) */
# 145 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3

#if defined(__XMK__)
typedef unsigned int pthread_mutex_t;    /* identify a mutex */

typedef struct {
  int type;
} pthread_mutexattr_t;

#else /* !defined(__XMK__) */
# 154 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3
typedef __uint32_t pthread_mutex_t;      /* identify a mutex */

typedef struct {
  int   is_initialized;
#if defined(_POSIX_THREAD_PROCESS_SHARED)
  int   process_shared;  /* allow mutex to be shared amongst processes */
#endif
# 161 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3
#if defined(_POSIX_THREAD_PRIO_PROTECT)
  int   prio_ceiling;
  int   protocol;
#endif
# 165 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3
#if defined(_UNIX98_THREAD_MUTEX_ATTRIBUTES)
  int type;
#endif
# 168 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3
  int   recursive;
} pthread_mutexattr_t;
#endif /* !defined(__XMK__) */
# 171 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3

#define _PTHREAD_MUTEX_INITIALIZER ((pthread_mutex_t) 0xFFFFFFFF)

/* Condition Variables */

typedef __uint32_t pthread_cond_t;       /* identify a condition variable */

#define _PTHREAD_COND_INITIALIZER ((pthread_cond_t) 0xFFFFFFFF)

typedef struct {
  int      is_initialized;
  clock_t  clock;             /* specifiy clock for timeouts */
#if defined(_POSIX_THREAD_PROCESS_SHARED)
  int      process_shared;    /* allow this to be shared amongst processes */
#endif
# 186 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3
} pthread_condattr_t;         /* a condition attribute object */

/* Keys */

typedef __uint32_t pthread_key_t;        /* thread-specific data keys */

typedef struct {
  int   is_initialized;  /* is this structure initialized? */
  int   init_executed;   /* has the initialization routine been run? */
} pthread_once_t;       /* dynamic package initialization */

#define _PTHREAD_ONCE_INIT  { 1, 0 }  /* is initialized and not run */
#endif /* defined(_POSIX_THREADS) || __POSIX_VISIBLE >= 199506 */
# 199 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3

/* POSIX Barrier Types */

#if defined(_POSIX_BARRIERS)
typedef __uint32_t pthread_barrier_t;        /* POSIX Barrier Object */
typedef struct {
  int   is_initialized;  /* is this structure initialized? */
#if defined(_POSIX_THREAD_PROCESS_SHARED)
  int   process_shared;       /* allow this to be shared amongst processes */
#endif
# 209 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3
} pthread_barrierattr_t;
#endif /* defined(_POSIX_BARRIERS) */
# 211 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3

/* POSIX Spin Lock Types */

#if defined(_POSIX_SPIN_LOCKS)
typedef __uint32_t pthread_spinlock_t;        /* POSIX Spin Lock Object */
#endif /* defined(_POSIX_SPIN_LOCKS) */
# 217 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3

/* POSIX Reader/Writer Lock Types */

#if defined(_POSIX_READER_WRITER_LOCKS)
typedef __uint32_t pthread_rwlock_t;         /* POSIX RWLock Object */

#define _PTHREAD_RWLOCK_INITIALIZER ((pthread_rwlock_t) 0xFFFFFFFF)

typedef struct {
  int   is_initialized;       /* is this structure initialized? */
#if defined(_POSIX_THREAD_PROCESS_SHARED)
  int   process_shared;       /* allow this to be shared amongst processes */
#endif
# 230 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3
} pthread_rwlockattr_t;
#endif /* defined(_POSIX_READER_WRITER_LOCKS) */
# 232 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3

#endif /* ! _SYS__PTHREADTYPES_H_ */
# 234 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3
# 240 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <machine/types.h>
#endif /* expanded by -frewrite-includes */
# 240 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/types.h" 1 3
/*
 * Newlib targets may provide an own version of this file in their machine
 * directory to add custom user types for <sys/types.h>.
 */
#ifndef _SYS_TYPES_H
#error "must be included via <sys/types.h>"
#endif /* !_SYS_TYPES_H */
# 8 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/types.h" 3
# 241 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 2 3

#endif  /* !__need_inttypes */
# 243 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3

#undef __need_inttypes

#endif	/* _SYS_TYPES_H */
# 247 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/types.h" 3
# 9 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/argz/argz_replace.c" 2
#if 0 /* expanded by -frewrite-includes */
#include <string.h>
#endif /* expanded by -frewrite-includes */
# 9 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/argz/argz_replace.c"
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 1 3
/*
 * string.h
 *
 * Definitions for memory and string functions.
 */

#ifndef _STRING_H_
#define	_STRING_H_

#if 0 /* expanded by -frewrite-includes */
#include "_ansi.h"
#endif /* expanded by -frewrite-includes */
# 10 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
# 11 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/reent.h>
#endif /* expanded by -frewrite-includes */
# 11 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
# 12 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 12 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
# 13 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/features.h>
#endif /* expanded by -frewrite-includes */
# 13 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
# 14 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3

#define __need_size_t
#define __need_NULL
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 17 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
# 1 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#if !defined(__STDDEF_H) || defined(__need_ptrdiff_t) ||                       \
    defined(__need_size_t) || defined(__need_wchar_t) ||                       \
    defined(__need_NULL) || defined(__need_wint_t)

#if !defined(__need_ptrdiff_t) && !defined(__need_size_t) &&                   \
    !defined(__need_wchar_t) && !defined(__need_NULL) &&                       \
    !defined(__need_wint_t)
/* Always define miscellaneous pieces when modules are available. */
#if !__has_feature(modules)
#define __STDDEF_H
#endif
# 37 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 44 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_ptrdiff_t)
#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 51 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 53 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 55 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_size_t)
#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 62 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 64 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 66 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 76 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 78 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif /* defined(__need_STDDEF_H_misc) */
# 79 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_wchar_t)
#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 89 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif
# 90 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 92 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif
# 93 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 95 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_NULL)
#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 102 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 104 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#else
# 105 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 107 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 112 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif
# 113 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 115 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 118 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
# 119 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif
# 120 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 123 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 132 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 134 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 136 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#endif
# 138 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
# 18 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 2 3

#if __POSIX_VISIBLE >= 200809
#if 0 /* expanded by -frewrite-includes */
#include <xlocale.h>
#endif /* expanded by -frewrite-includes */
# 20 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/xlocale.h" 1 3
/* Definition of opaque POSIX-1.2008 type locale_t for userspace. */

#ifndef	_XLOCALE_H
#define _XLOCALE_H

#if 0 /* expanded by -frewrite-includes */
#include <newlib.h>
#endif /* expanded by -frewrite-includes */
# 6 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/xlocale.h" 3
# 7 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/xlocale.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/config.h>
#endif /* expanded by -frewrite-includes */
# 7 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/xlocale.h" 3
# 8 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/xlocale.h" 3

struct __locale_t;
typedef struct __locale_t *locale_t;

#endif	/* _XLOCALE_H */
# 13 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/xlocale.h" 3
# 21 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 2 3
#endif
# 22 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3

#if __BSD_VISIBLE
#if 0 /* expanded by -frewrite-includes */
#include <strings.h>
#endif /* expanded by -frewrite-includes */
# 24 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/strings.h" 1 3
/*-
 * Copyright (c) 2002 Mike Barcroft <mike@FreeBSD.org>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD: head/include/strings.h 272673 2014-10-07 04:54:11Z delphij $
 */

#ifndef _STRINGS_H_
#define	_STRINGS_H_

#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 32 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/strings.h" 3
# 33 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/strings.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_types.h>
#endif /* expanded by -frewrite-includes */
# 33 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/strings.h" 3
# 34 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/strings.h" 3

#if __POSIX_VISIBLE >= 200809
#if 0 /* expanded by -frewrite-includes */
#include <xlocale.h>
#endif /* expanded by -frewrite-includes */
# 36 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/strings.h" 3
# 37 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/strings.h" 3
#endif
# 38 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/strings.h" 3

#ifndef _SIZE_T_DECLARED
typedef	__size_t	size_t;
#define	_SIZE_T_DECLARED
#endif
# 43 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/strings.h" 3

__BEGIN_DECLS
#if __BSD_VISIBLE || __POSIX_VISIBLE <= 200112
int	 bcmp(const void *, const void *, size_t) __pure;	/* LEGACY */
void	 bcopy(const void *, void *, size_t);			/* LEGACY */
void	 bzero(void *, size_t);					/* LEGACY */
#endif
# 50 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/strings.h" 3
#if __BSD_VISIBLE
void	 explicit_bzero(void *, size_t);
#endif
# 53 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/strings.h" 3
#if __MISC_VISIBLE || __POSIX_VISIBLE < 200809 || __XSI_VISIBLE >= 700
int	 ffs(int) __pure2;
#endif
# 56 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/strings.h" 3
#if __BSD_VISIBLE
int	 ffsl(long) __pure2;
int	 ffsll(long long) __pure2;
int	 fls(int) __pure2;
int	 flsl(long) __pure2;
int	 flsll(long long) __pure2;
#endif
# 63 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/strings.h" 3
#if __BSD_VISIBLE || __POSIX_VISIBLE <= 200112
char	*index(const char *, int) __pure;			/* LEGACY */
char	*rindex(const char *, int) __pure;			/* LEGACY */
#endif
# 67 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/strings.h" 3
int	 strcasecmp(const char *, const char *) __pure;
int	 strncasecmp(const char *, const char *, size_t) __pure;

#if __POSIX_VISIBLE >= 200809
int	 strcasecmp_l (const char *, const char *, locale_t);
int	 strncasecmp_l (const char *, const char *, size_t, locale_t);
#endif
# 74 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/strings.h" 3
__END_DECLS

#if __SSP_FORTIFY_LEVEL > 0
#if 0 /* expanded by -frewrite-includes */
#include <ssp/strings.h>
#endif /* expanded by -frewrite-includes */
# 77 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/strings.h" 3
# 78 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/strings.h" 3
#endif
# 79 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/strings.h" 3

#endif /* _STRINGS_H_ */
# 81 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/strings.h" 3
# 25 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 2 3
#endif
# 26 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3

_BEGIN_STD_C

void *	 memchr (const void *, int, size_t);
int 	 memcmp (const void *, const void *, size_t);
void *	 memcpy (void *__restrict, const void *__restrict, size_t);
void *	 memmove (void *, const void *, size_t);
void *	 memset (void *, int, size_t);
char 	*strcat (char *__restrict, const char *__restrict);
char 	*strchr (const char *, int);
int	 strcmp (const char *, const char *);
int	 strcoll (const char *, const char *);
char 	*strcpy (char *__restrict, const char *__restrict);
size_t	 strcspn (const char *, const char *);
char 	*strerror (int);
size_t	 strlen (const char *);
char 	*strncat (char *__restrict, const char *__restrict, size_t);
int	 strncmp (const char *, const char *, size_t);
char 	*strncpy (char *__restrict, const char *__restrict, size_t);
char 	*strpbrk (const char *, const char *);
char 	*strrchr (const char *, int);
size_t	 strspn (const char *, const char *);
char 	*strstr (const char *, const char *);
#ifndef _REENT_ONLY
char 	*strtok (char *__restrict, const char *__restrict);
#endif
# 52 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
size_t	 strxfrm (char *__restrict, const char *__restrict, size_t);

#if __POSIX_VISIBLE >= 200809
int	 strcoll_l (const char *, const char *, locale_t);
char	*strerror_l (int, locale_t);
size_t	 strxfrm_l (char *__restrict, const char *__restrict, size_t, locale_t);
#endif
# 59 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
#if __MISC_VISIBLE || __POSIX_VISIBLE
char 	*strtok_r (char *__restrict, const char *__restrict, char **__restrict);
#endif
# 62 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
#if __BSD_VISIBLE
int	 timingsafe_bcmp (const void *, const void *, size_t);
int	 timingsafe_memcmp (const void *, const void *, size_t);
#endif
# 66 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
#if __MISC_VISIBLE || __POSIX_VISIBLE
void *	 memccpy (void *__restrict, const void *__restrict, int, size_t);
#endif
# 69 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
#if __GNU_VISIBLE
void *	 mempcpy (void *, const void *, size_t);
void *	 memmem (const void *, size_t, const void *, size_t);
void *	 memrchr (const void *, int, size_t);
void *	 rawmemchr (const void *, int);
#endif
# 75 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
#if __POSIX_VISIBLE >= 200809
char 	*stpcpy (char *__restrict, const char *__restrict);
char 	*stpncpy (char *__restrict, const char *__restrict, size_t);
#endif
# 79 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
#if __GNU_VISIBLE
char	*strcasestr (const char *, const char *);
char 	*strchrnul (const char *, int);
#endif
# 83 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
#if __MISC_VISIBLE || __POSIX_VISIBLE >= 200809 || __XSI_VISIBLE >= 4
char 	*strdup (const char *);
#endif
# 86 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
char 	*_strdup_r (struct _reent *, const char *);
#if __POSIX_VISIBLE >= 200809
char 	*strndup (const char *, size_t);
#endif
# 90 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
char 	*_strndup_r (struct _reent *, const char *, size_t);

/* There are two common strerror_r variants.  If you request
   _GNU_SOURCE, you get the GNU version; otherwise you get the POSIX
   version.  POSIX requires that #undef strerror_r will still let you
   invoke the underlying function, but that requires gcc support.  */
#if __GNU_VISIBLE
char	*strerror_r (int, char *, size_t);
#elif __POSIX_VISIBLE >= 200112
# 99 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
# ifdef __GNUC__
int	strerror_r (int, char *, size_t)
#ifdef __ASMNAME
             __asm__ (__ASMNAME ("__xpg_strerror_r"))
#endif
# 104 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
  ;
# else
# 106 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
int	__xpg_strerror_r (int, char *, size_t);
#  define strerror_r __xpg_strerror_r
# endif
# 109 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
#endif
# 110 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3

/* Reentrant version of strerror.  */
char *	_strerror_r (struct _reent *, int, int, int *);

#if __BSD_VISIBLE
size_t	strlcat (char *, const char *, size_t);
size_t	strlcpy (char *, const char *, size_t);
#endif
# 118 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
#if __POSIX_VISIBLE >= 200809
size_t	 strnlen (const char *, size_t);
#endif
# 121 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
#if __BSD_VISIBLE
char 	*strsep (char **, const char *);
#endif
# 124 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
#if __BSD_VISIBLE
char    *strnstr(const char *, const char *, size_t) __pure;
#endif
# 127 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3

#if __MISC_VISIBLE
char	*strlwr (char *);
char	*strupr (char *);
#endif
# 132 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3

#ifndef DEFS_H	/* Kludge to work around problem compiling in gdb */
char	*strsignal (int __signo);
#endif
# 136 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3

#ifdef __CYGWIN__
int	strtosigno (const char *__name);
#endif
# 140 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3

#if __GNU_VISIBLE
int	 strverscmp (const char *, const char *);
#endif
# 144 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3

#if __GNU_VISIBLE && defined(__GNUC__)
#define strdupa(__s) \
	(__extension__ ({const char *__sin = (__s); \
			 size_t __len = strlen (__sin) + 1; \
			 char * __sout = (char *) __builtin_alloca (__len); \
			 (char *) memcpy (__sout, __sin, __len);}))
#define strndupa(__s, __n) \
	(__extension__ ({const char *__sin = (__s); \
			 size_t __len = strnlen (__sin, (__n)) + 1; \
			 char *__sout = (char *) __builtin_alloca (__len); \
			 __sout[__len-1] = '\0'; \
			 (char *) memcpy (__sout, __sin, __len-1);}))
#endif /* __GNU_VISIBLE && __GNUC__ */
# 158 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3

/* There are two common basename variants.  If you do NOT #include <libgen.h>
   and you do

     #define _GNU_SOURCE
     #include <string.h>

   you get the GNU version.  Otherwise you get the POSIX versionfor which you
   should #include <libgen.h>i for the function prototype.  POSIX requires that
   #undef basename will still let you invoke the underlying function.  However,
   this also implies that the POSIX version is used in this case.  That's made
   sure here. */
#if __GNU_VISIBLE && !defined(basename)
# define basename basename
char	*__nonnull ((1)) basename (const char *) __asm__(__ASMNAME("__gnu_basename"));
#endif
# 174 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3

#if 0 /* expanded by -frewrite-includes */
#include <sys/string.h>
#endif /* expanded by -frewrite-includes */
# 175 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/sys/string.h" 1 3
/* This is a dummy <sys/string.h> used as a placeholder for
   systems that need to have a special header file.  */
# 176 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 2 3

_END_STD_C

#if __SSP_FORTIFY_LEVEL > 0
#if 0 /* expanded by -frewrite-includes */
#include <ssp/string.h>
#endif /* expanded by -frewrite-includes */
# 180 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
# 181 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
#endif
# 182 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3

#endif /* _STRING_H_ */
# 184 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/string.h" 3
# 10 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/argz/argz_replace.c" 2
#if 0 /* expanded by -frewrite-includes */
#include <stdlib.h>
#endif /* expanded by -frewrite-includes */
# 10 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/argz/argz_replace.c"
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 1 3
/*
 * stdlib.h
 *
 * Definitions for common types, variables, and functions.
 */

#ifndef _STDLIB_H_
#define _STDLIB_H_

#if 0 /* expanded by -frewrite-includes */
#include <machine/ieeefp.h>
#endif /* expanded by -frewrite-includes */
# 10 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 1 3
#ifndef __IEEE_BIG_ENDIAN
#ifndef __IEEE_LITTLE_ENDIAN

/* This file can define macros to choose variations of the IEEE float
   format:

   _FLT_LARGEST_EXPONENT_IS_NORMAL

	Defined if the float format uses the largest exponent for finite
	numbers rather than NaN and infinity representations.  Such a
	format cannot represent NaNs or infinities at all, but it's FLT_MAX
	is twice the IEEE value.

   _FLT_NO_DENORMALS

	Defined if the float format does not support IEEE denormals.  Every
	float with a zero exponent is taken to be a zero representation.
 
   ??? At the moment, there are no equivalent macros above for doubles and
   the macros are not fully supported by --enable-newlib-hw-fp.

   __IEEE_BIG_ENDIAN

        Defined if the float format is big endian.  This is mutually exclusive
        with __IEEE_LITTLE_ENDIAN.

   __IEEE_LITTLE_ENDIAN
 
        Defined if the float format is little endian.  This is mutually exclusive
        with __IEEE_BIG_ENDIAN.

   Note that one of __IEEE_BIG_ENDIAN or __IEEE_LITTLE_ENDIAN must be specified for a
   platform or error will occur.

   __IEEE_BYTES_LITTLE_ENDIAN

        This flag is used in conjunction with __IEEE_BIG_ENDIAN to describe a situation 
	whereby multiple words of an IEEE floating point are in big endian order, but the
	words themselves are little endian with respect to the bytes.

   _DOUBLE_IS_32BITS 

        This is used on platforms that support double by using the 32-bit IEEE
        float type.

   _FLOAT_ARG

        This represents what type a float arg is passed as.  It is used when the type is
        not promoted to double.
	

   __OBSOLETE_MATH_DEFAULT

	Default value for __OBSOLETE_MATH if that's not set by the user.
	It should be set here based on predefined feature macros.

   __OBSOLETE_MATH

	If set to 1 then some new math code will be disabled and older libm
	code will be used instead.  This is necessary because the new math
	code does not support all targets, it assumes that the toolchain has
	ISO C99 support (hexfloat literals, standard fenv semantics), the
	target has IEEE-754 conforming binary32 float and binary64 double
	(not mixed endian) representation, standard SNaN representation,
	double and single precision arithmetics has similar latency and it
	has no legacy SVID matherr support, only POSIX errno and fenv
	exception based error handling.
*/

#if (defined(__arm__) || defined(__thumb__)) && !defined(__MAVERICK__)
/* ARM traditionally used big-endian words; and within those words the
   byte ordering was big or little endian depending upon the target.
   Modern floating-point formats are naturally ordered; in this case
   __VFP_FP__ will be defined, even if soft-float.  */
#ifdef __VFP_FP__
# ifdef __ARMEL__
#  define __IEEE_LITTLE_ENDIAN
# else
# 79 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#  define __IEEE_BIG_ENDIAN
# endif
# 81 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
# if __ARM_FP & 0x8
#  define __OBSOLETE_MATH_DEFAULT 0
# endif
# 84 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#else
# 85 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
# define __IEEE_BIG_ENDIAN
# ifdef __ARMEL__
#  define __IEEE_BYTES_LITTLE_ENDIAN
# endif
# 89 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 90 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 91 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#if defined (__aarch64__)
#if defined (__AARCH64EL__)
#define __IEEE_LITTLE_ENDIAN
#else
# 96 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 98 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __OBSOLETE_MATH_DEFAULT 0
#endif
# 100 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __epiphany__
#define __IEEE_LITTLE_ENDIAN
#define Sudden_Underflow 1
#endif
# 105 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __hppa__
#define __IEEE_BIG_ENDIAN
#endif
# 109 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __nds32__
#ifdef __big_endian__
#define __IEEE_BIG_ENDIAN
#else
# 114 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 116 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 117 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __SPU__
#define __IEEE_BIG_ENDIAN

#define isfinite(__y) \
	(__extension__ ({int __cy; \
		(sizeof (__y) == sizeof (float))  ? (1) : \
		(__cy = fpclassify(__y)) != FP_INFINITE && __cy != FP_NAN;}))

#define isinf(__x) ((sizeof (__x) == sizeof (float))  ?  (0) : __isinfd(__x))
#define isnan(__x) ((sizeof (__x) == sizeof (float))  ?  (0) : __isnand(__x))

/*
 * Macros for use in ieeefp.h. We can't just define the real ones here
 * (like those above) as we have name space issues when this is *not*
 * included via generic the ieeefp.h.
 */
#define __ieeefp_isnanf(x)	0
#define __ieeefp_isinff(x)	0
#define __ieeefp_finitef(x)	1
#endif
# 138 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __sparc__
#ifdef __LITTLE_ENDIAN_DATA__
#define __IEEE_LITTLE_ENDIAN
#else
# 143 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 145 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 146 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__m68k__) || defined(__mc68000__)
#define __IEEE_BIG_ENDIAN
#endif
# 150 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__mc68hc11__) || defined(__mc68hc12__) || defined(__mc68hc1x__)
#define __IEEE_BIG_ENDIAN
#ifdef __HAVE_SHORT_DOUBLE__
# define _DOUBLE_IS_32BITS
#endif
# 156 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 157 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#if defined (__H8300__) || defined (__H8300H__) || defined (__H8300S__) || defined (__H8500__) || defined (__H8300SX__)
#define __IEEE_BIG_ENDIAN
#define _FLOAT_ARG float
#define _DOUBLE_IS_32BITS
#endif
# 163 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#if defined (__xc16x__) || defined (__xc16xL__) || defined (__xc16xS__)
#define __IEEE_LITTLE_ENDIAN
#define _FLOAT_ARG float
#define _DOUBLE_IS_32BITS
#endif
# 169 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3


#ifdef __sh__
#ifdef __LITTLE_ENDIAN__
#define __IEEE_LITTLE_ENDIAN
#else
# 175 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 177 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#if defined(__SH2E__) || defined(__SH3E__) || defined(__SH4_SINGLE_ONLY__) || defined(__SH2A_SINGLE_ONLY__)
#define _DOUBLE_IS_32BITS
#endif
# 180 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 181 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef _AM29K
#define __IEEE_BIG_ENDIAN
#endif
# 185 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef _WIN32
#define __IEEE_LITTLE_ENDIAN
#endif
# 189 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __i386__
#define __IEEE_LITTLE_ENDIAN
#endif
# 193 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __riscv
#define __IEEE_LITTLE_ENDIAN
#endif
# 197 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __i960__
#define __IEEE_LITTLE_ENDIAN
#endif
# 201 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __lm32__
#define __IEEE_BIG_ENDIAN
#endif
# 205 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __M32R__
#define __IEEE_BIG_ENDIAN
#endif
# 209 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#if defined(_C4x) || defined(_C3x)
#define __IEEE_BIG_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 214 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __TMS320C6X__
#ifdef _BIG_ENDIAN
#define __IEEE_BIG_ENDIAN
#else
# 219 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 221 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 222 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __TIC80__
#define __IEEE_LITTLE_ENDIAN
#endif
# 226 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MIPSEL__
#define __IEEE_LITTLE_ENDIAN
#endif
# 230 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#ifdef __MIPSEB__
#define __IEEE_BIG_ENDIAN
#endif
# 233 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MMIX__
#define __IEEE_BIG_ENDIAN
#endif
# 237 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __D30V__
#define __IEEE_BIG_ENDIAN
#endif
# 241 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

/* necv70 was __IEEE_LITTLE_ENDIAN. */

#ifdef __W65__
#define __IEEE_LITTLE_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 248 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__Z8001__) || defined(__Z8002__)
#define __IEEE_BIG_ENDIAN
#endif
# 252 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __m88k__
#define __IEEE_BIG_ENDIAN
#endif
# 256 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mn10300__
#define __IEEE_LITTLE_ENDIAN
#endif
# 260 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mn10200__
#define __IEEE_LITTLE_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 265 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __v800
#define __IEEE_LITTLE_ENDIAN
#endif
# 269 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __v850
#define __IEEE_LITTLE_ENDIAN
#endif
# 273 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __D10V__
#define __IEEE_BIG_ENDIAN
#if __DOUBLE__ == 32
#define _DOUBLE_IS_32BITS
#endif
# 279 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 280 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __PPC__
#if (defined(_BIG_ENDIAN) && _BIG_ENDIAN) || (defined(_AIX) && _AIX)
#define __IEEE_BIG_ENDIAN
#else
# 285 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#if (defined(_LITTLE_ENDIAN) && _LITTLE_ENDIAN) || (defined(__sun__) && __sun__) || (defined(_WIN32) && _WIN32)
#define __IEEE_LITTLE_ENDIAN
#endif
# 288 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 289 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 290 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __xstormy16__
#define __IEEE_LITTLE_ENDIAN
#endif
# 294 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __arc__
#ifdef __big_endian__
#define __IEEE_BIG_ENDIAN
#else
# 299 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 301 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 302 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __CRX__
#define __IEEE_LITTLE_ENDIAN
#endif
# 306 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __fr30__
#define __IEEE_BIG_ENDIAN
#endif
# 310 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __FT32__
#define __IEEE_LITTLE_ENDIAN
#endif
# 314 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mcore__
#define __IEEE_BIG_ENDIAN
#endif
# 318 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mt__
#define __IEEE_BIG_ENDIAN
#endif
# 322 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __frv__
#define __IEEE_BIG_ENDIAN
#endif
# 326 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __moxie__
#ifdef __MOXIE_BIG_ENDIAN__
#define __IEEE_BIG_ENDIAN
#else
# 331 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 333 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 334 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __ia64__
#ifdef __BIG_ENDIAN__
#define __IEEE_BIG_ENDIAN
#else
# 339 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 341 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 342 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __AVR__
#define __IEEE_LITTLE_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 347 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__or1k__) || defined(__OR1K__) || defined(__OR1KND__)
#define __IEEE_BIG_ENDIAN
#endif
# 351 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __IP2K__
#define __IEEE_BIG_ENDIAN
#define __SMALL_BITFIELDS
#define _DOUBLE_IS_32BITS
#endif
# 357 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __iq2000__
#define __IEEE_BIG_ENDIAN
#endif
# 361 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MAVERICK__
#ifdef __ARMEL__
#  define __IEEE_LITTLE_ENDIAN
#else  /* must be __ARMEB__ */
# 366 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#  define __IEEE_BIG_ENDIAN
#endif /* __ARMEL__ */
# 368 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif /* __MAVERICK__ */
# 369 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __m32c__
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS
#endif
# 374 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __CRIS__
#define __IEEE_LITTLE_ENDIAN
#endif
# 378 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __BFIN__
#define __IEEE_LITTLE_ENDIAN
#endif
# 382 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __x86_64__
#define __IEEE_LITTLE_ENDIAN
#endif
# 386 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mep__
#ifdef __LITTLE_ENDIAN__
#define __IEEE_LITTLE_ENDIAN
#else
# 391 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 393 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 394 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MICROBLAZE__
#ifndef __MICROBLAZEEL__
#define __IEEE_BIG_ENDIAN
#else
# 399 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 401 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 402 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MSP430__
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS	/* 16 Bit INT */
#endif
# 407 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __RL78__
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS	/* 16 Bit INT */
#ifndef __RL78_64BIT_DOUBLES__
#define _DOUBLE_IS_32BITS
#endif
# 414 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 415 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __RX__

#ifdef __RX_BIG_ENDIAN__
#define __IEEE_BIG_ENDIAN
#else
# 421 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 423 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifndef __RX_64BIT_DOUBLES__
#define _DOUBLE_IS_32BITS
#endif
# 427 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __RX_16BIT_INTS__
#define __SMALL_BITFIELDS
#endif
# 431 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#endif
# 433 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#if (defined(__CR16__) || defined(__CR16C__) ||defined(__CR16CP__))
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS	/* 16 Bit INT */
#endif
# 438 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __NIOS2__
# ifdef __nios2_big_endian__
#  define __IEEE_BIG_ENDIAN
# else
# 443 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#  define __IEEE_LITTLE_ENDIAN
# endif
# 445 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 446 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __VISIUM__
#define __IEEE_BIG_ENDIAN
#endif
# 450 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifndef __OBSOLETE_MATH_DEFAULT
/* Use old math code by default.  */
#define __OBSOLETE_MATH_DEFAULT 1
#endif
# 455 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#ifndef __OBSOLETE_MATH
#define __OBSOLETE_MATH __OBSOLETE_MATH_DEFAULT
#endif
# 458 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#ifndef __IEEE_BIG_ENDIAN
#ifndef __IEEE_LITTLE_ENDIAN
#error Endianess not declared!!
#endif /* not __IEEE_LITTLE_ENDIAN */
# 463 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif /* not __IEEE_BIG_ENDIAN */
# 464 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

#endif /* not __IEEE_LITTLE_ENDIAN */
# 466 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3
#endif /* not __IEEE_BIG_ENDIAN */
# 467 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/ieeefp.h" 3

# 11 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include "_ansi.h"
#endif /* expanded by -frewrite-includes */
# 11 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
# 12 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3

#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 16 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
# 1 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#if !defined(__STDDEF_H) || defined(__need_ptrdiff_t) ||                       \
    defined(__need_size_t) || defined(__need_wchar_t) ||                       \
    defined(__need_NULL) || defined(__need_wint_t)

#if !defined(__need_ptrdiff_t) && !defined(__need_size_t) &&                   \
    !defined(__need_wchar_t) && !defined(__need_NULL) &&                       \
    !defined(__need_wint_t)
/* Always define miscellaneous pieces when modules are available. */
#if !__has_feature(modules)
#define __STDDEF_H
#endif
# 37 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 44 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_ptrdiff_t)
#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 51 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 53 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 55 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_size_t)
#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 62 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 64 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 66 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 76 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 78 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif /* defined(__need_STDDEF_H_misc) */
# 79 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_wchar_t)
#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 89 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif
# 90 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 92 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif
# 93 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 95 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_NULL)
#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 102 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 104 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#else
# 105 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 107 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 112 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif
# 113 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 115 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 118 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
# 119 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#endif
# 120 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 123 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 132 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 134 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 136 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4

#endif
# 138 "/srv/bfbuild/hypervisor-super/multicompiler/tools/lib/clang/7.0.0/include/stddef.h" 3 4
# 17 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 2 3

#if 0 /* expanded by -frewrite-includes */
#include <sys/reent.h>
#endif /* expanded by -frewrite-includes */
# 18 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
# 19 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 19 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
# 20 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <machine/stdlib.h>
#endif /* expanded by -frewrite-includes */
# 20 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/stdlib.h" 1 3
#ifndef	_MACHSTDLIB_H_
#define	_MACHSTDLIB_H_

/* place holder so platforms may add stdlib.h extensions */

#endif	/* _MACHSTDLIB_H_ */
# 7 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/machine/stdlib.h" 3


# 21 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 2 3
#ifndef __STRICT_ANSI__
#if 0 /* expanded by -frewrite-includes */
#include <alloca.h>
#endif /* expanded by -frewrite-includes */
# 22 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/alloca.h" 1 3
/* libc/include/alloca.h - Allocate memory on stack */

/* Written 2000 by Werner Almesberger */
/* Rearranged for general inclusion by stdlib.h.
   2001, Corinna Vinschen <vinschen@redhat.com> */

#ifndef _NEWLIB_ALLOCA_H
#define _NEWLIB_ALLOCA_H

#if 0 /* expanded by -frewrite-includes */
#include "_ansi.h"
#endif /* expanded by -frewrite-includes */
# 10 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/alloca.h" 3
# 11 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/alloca.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/reent.h>
#endif /* expanded by -frewrite-includes */
# 11 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/alloca.h" 3
# 12 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/alloca.h" 3

#undef alloca

#ifdef __GNUC__
#define alloca(size) __builtin_alloca(size)
#else
# 18 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/alloca.h" 3
void * alloca (size_t);
#endif
# 20 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/alloca.h" 3

#endif
# 22 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/alloca.h" 3
# 23 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 2 3
#endif
# 24 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3

#ifdef __CYGWIN__
#if 0 /* expanded by -frewrite-includes */
#include <cygwin/stdlib.h>
#endif /* expanded by -frewrite-includes */
# 26 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
# 27 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#endif
# 28 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3

#if __GNU_VISIBLE
#if 0 /* expanded by -frewrite-includes */
#include <xlocale.h>
#endif /* expanded by -frewrite-includes */
# 30 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
# 31 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#endif
# 32 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3

_BEGIN_STD_C

typedef struct 
{
  int quot; /* quotient */
  int rem; /* remainder */
} div_t;

typedef struct 
{
  long quot; /* quotient */
  long rem; /* remainder */
} ldiv_t;

#if __ISO_C_VISIBLE >= 1999
typedef struct
{
  long long int quot; /* quotient */
  long long int rem; /* remainder */
} lldiv_t;
#endif
# 54 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3

#ifndef __compar_fn_t_defined
#define __compar_fn_t_defined
typedef int (*__compar_fn_t) (const void *, const void *);
#endif
# 59 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

#define RAND_MAX __RAND_MAX

int	__locale_mb_cur_max (void);

#define MB_CUR_MAX __locale_mb_cur_max()

void	abort (void) _ATTRIBUTE ((__noreturn__));
int	abs (int);
#if __BSD_VISIBLE
__uint32_t arc4random (void);
__uint32_t arc4random_uniform (__uint32_t);
void    arc4random_buf (void *, size_t);
#endif
# 76 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
int	atexit (void (*__func)(void));
double	atof (const char *__nptr);
#if __MISC_VISIBLE
float	atoff (const char *__nptr);
#endif
# 81 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
int	atoi (const char *__nptr);
int	_atoi_r (struct _reent *, const char *__nptr);
long	atol (const char *__nptr);
long	_atol_r (struct _reent *, const char *__nptr);
void *	bsearch (const void *__key,
		       const void *__base,
		       size_t __nmemb,
		       size_t __size,
		       __compar_fn_t _compar);
void *	calloc (size_t __nmemb, size_t __size) _NOTHROW;
div_t	div (int __numer, int __denom);
void	exit (int __status) _ATTRIBUTE ((__noreturn__));
void	free (void *) _NOTHROW;
char *  getenv (const char *__string);
char *	_getenv_r (struct _reent *, const char *__string);
char *	_findenv (const char *, int *);
char *	_findenv_r (struct _reent *, const char *, int *);
#if __POSIX_VISIBLE >= 200809
extern char *suboptarg;			/* getsubopt(3) external variable */
int	getsubopt (char **, char * const *, char **);
#endif
# 102 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
long	labs (long);
ldiv_t	ldiv (long __numer, long __denom);
void *	malloc (size_t __size) _NOTHROW;
int	mblen (const char *, size_t);
int	_mblen_r (struct _reent *, const char *, size_t, _mbstate_t *);
int	mbtowc (wchar_t *__restrict, const char *__restrict, size_t);
int	_mbtowc_r (struct _reent *, wchar_t *__restrict, const char *__restrict, size_t, _mbstate_t *);
int	wctomb (char *, wchar_t);
int	_wctomb_r (struct _reent *, char *, wchar_t, _mbstate_t *);
size_t	mbstowcs (wchar_t *__restrict, const char *__restrict, size_t);
size_t	_mbstowcs_r (struct _reent *, wchar_t *__restrict, const char *__restrict, size_t, _mbstate_t *);
size_t	wcstombs (char *__restrict, const wchar_t *__restrict, size_t);
size_t	_wcstombs_r (struct _reent *, char *__restrict, const wchar_t *__restrict, size_t, _mbstate_t *);
#ifndef _REENT_ONLY
#if __BSD_VISIBLE || __POSIX_VISIBLE >= 200809
char *	mkdtemp (char *);
#endif
# 119 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#if __GNU_VISIBLE
int	mkostemp (char *, int);
int	mkostemps (char *, int, int);
#endif
# 123 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#if __MISC_VISIBLE || __POSIX_VISIBLE >= 200112 || __XSI_VISIBLE >= 4
int	mkstemp (char *);
#endif
# 126 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#if __MISC_VISIBLE
int	mkstemps (char *, int);
#endif
# 129 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#if __BSD_VISIBLE || (__XSI_VISIBLE >= 4 && __POSIX_VISIBLE < 200112)
char *	mktemp (char *) _ATTRIBUTE ((__deprecated__("the use of `mktemp' is dangerous; use `mkstemp' instead")));
#endif
# 132 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#endif /* !_REENT_ONLY */
# 133 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
char *	_mkdtemp_r (struct _reent *, char *);
int	_mkostemp_r (struct _reent *, char *, int);
int	_mkostemps_r (struct _reent *, char *, int, int);
int	_mkstemp_r (struct _reent *, char *);
int	_mkstemps_r (struct _reent *, char *, int);
char *	_mktemp_r (struct _reent *, char *) _ATTRIBUTE ((__deprecated__("the use of `mktemp' is dangerous; use `mkstemp' instead")));
void	qsort (void *__base, size_t __nmemb, size_t __size, __compar_fn_t _compar);
int	rand (void);
void *	realloc (void *__r, size_t __size) _NOTHROW;
#if __BSD_VISIBLE
void	*reallocarray(void *, size_t, size_t) __result_use_check __alloc_size(2)
	    __alloc_size(3);
void *	reallocf (void *__r, size_t __size);
#endif
# 147 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#if __BSD_VISIBLE || __XSI_VISIBLE >= 4
char *	realpath (const char *__restrict path, char *__restrict resolved_path);
#endif
# 150 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#if __BSD_VISIBLE
int	rpmatch (const char *response);
#endif
# 153 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#if __XSI_VISIBLE
void	setkey (const char *__key);
#endif
# 156 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
void	srand (unsigned __seed);
double	strtod (const char *__restrict __n, char **__restrict __end_PTR);
double	_strtod_r (struct _reent *,const char *__restrict __n, char **__restrict __end_PTR);
#if __ISO_C_VISIBLE >= 1999
float	strtof (const char *__restrict __n, char **__restrict __end_PTR);
#endif
# 162 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#if __MISC_VISIBLE
/* the following strtodf interface is deprecated...use strtof instead */
# ifndef strtodf
#  define strtodf strtof
# endif
# 167 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#endif
# 168 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
long	strtol (const char *__restrict __n, char **__restrict __end_PTR, int __base);
long	_strtol_r (struct _reent *,const char *__restrict __n, char **__restrict __end_PTR, int __base);
unsigned long strtoul (const char *__restrict __n, char **__restrict __end_PTR, int __base);
unsigned long _strtoul_r (struct _reent *,const char *__restrict __n, char **__restrict __end_PTR, int __base);

#if __GNU_VISIBLE
double	strtod_l (const char *__restrict, char **__restrict, locale_t);
float	strtof_l (const char *__restrict, char **__restrict, locale_t);
#ifdef _HAVE_LONG_DOUBLE
extern long double strtold_l (const char *__restrict, char **__restrict,
			      locale_t);
#endif /* _HAVE_LONG_DOUBLE */
# 180 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
long	strtol_l (const char *__restrict, char **__restrict, int, locale_t);
unsigned long strtoul_l (const char *__restrict, char **__restrict, int,
			 locale_t __loc);
long long strtoll_l (const char *__restrict, char **__restrict, int, locale_t);
unsigned long long strtoull_l (const char *__restrict, char **__restrict, int,
			       locale_t __loc);
#endif
# 187 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3

int	system (const char *__string);

#if __SVID_VISIBLE || __XSI_VISIBLE >= 4
long    a64l (const char *__input);
char *  l64a (long __input);
char *  _l64a_r (struct _reent *,long __input);
#endif
# 195 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#if __MISC_VISIBLE
int	on_exit (void (*__func)(int, void *),void *__arg);
#endif
# 198 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#if __ISO_C_VISIBLE >= 1999
void	_Exit (int __status) _ATTRIBUTE ((__noreturn__));
#endif
# 201 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#if __SVID_VISIBLE || __XSI_VISIBLE
int	putenv (char *__string);
#endif
# 204 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
int	_putenv_r (struct _reent *, char *__string);
void *	_reallocf_r (struct _reent *, void *, size_t);
#if __BSD_VISIBLE || __POSIX_VISIBLE >= 200112
int	setenv (const char *__string, const char *__value, int __overwrite);
#endif
# 209 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
int	_setenv_r (struct _reent *, const char *__string, const char *__value, int __overwrite);

#if __XSI_VISIBLE >= 4 && __POSIX_VISIBLE < 200112
char *	gcvt (double,int,char *);
char *	gcvtf (float,int,char *);
char *	fcvt (double,int,int *,int *);
char *	fcvtf (float,int,int *,int *);
char *	ecvt (double,int,int *,int *);
char *	ecvtbuf (double, int, int*, int*, char *);
char *	fcvtbuf (double, int, int*, int*, char *);
char *	ecvtf (float,int,int *,int *);
#endif
# 221 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
char *	__itoa (int, char *, int);
char *	__utoa (unsigned, char *, int);
#if __MISC_VISIBLE
char *	itoa (int, char *, int);
char *	utoa (unsigned, char *, int);
#endif
# 227 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#if __POSIX_VISIBLE
int	rand_r (unsigned *__seed);
#endif
# 230 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3

#if __SVID_VISIBLE || __XSI_VISIBLE
double drand48 (void);
double _drand48_r (struct _reent *);
double erand48 (unsigned short [3]);
double _erand48_r (struct _reent *, unsigned short [3]);
long   jrand48 (unsigned short [3]);
long   _jrand48_r (struct _reent *, unsigned short [3]);
void  lcong48 (unsigned short [7]);
void  _lcong48_r (struct _reent *, unsigned short [7]);
long   lrand48 (void);
long   _lrand48_r (struct _reent *);
long   mrand48 (void);
long   _mrand48_r (struct _reent *);
long   nrand48 (unsigned short [3]);
long   _nrand48_r (struct _reent *, unsigned short [3]);
unsigned short *
       seed48 (unsigned short [3]);
unsigned short *
       _seed48_r (struct _reent *, unsigned short [3]);
void  srand48 (long);
void  _srand48_r (struct _reent *, long);
#endif /* __SVID_VISIBLE || __XSI_VISIBLE */
# 253 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#if __SVID_VISIBLE || __XSI_VISIBLE >= 4 || __BSD_VISIBLE
char *	initstate (unsigned, char *, size_t);
long	random (void);
char *	setstate (char *);
void	srandom (unsigned);
#endif
# 259 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#if __ISO_C_VISIBLE >= 1999
long long atoll (const char *__nptr);
#endif
# 262 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
long long _atoll_r (struct _reent *, const char *__nptr);
#if __ISO_C_VISIBLE >= 1999
long long llabs (long long);
lldiv_t	lldiv (long long __numer, long long __denom);
long long strtoll (const char *__restrict __n, char **__restrict __end_PTR, int __base);
#endif
# 268 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
long long _strtoll_r (struct _reent *, const char *__restrict __n, char **__restrict __end_PTR, int __base);
#if __ISO_C_VISIBLE >= 1999
unsigned long long strtoull (const char *__restrict __n, char **__restrict __end_PTR, int __base);
#endif
# 272 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
unsigned long long _strtoull_r (struct _reent *, const char *__restrict __n, char **__restrict __end_PTR, int __base);

#ifndef __CYGWIN__
#if __MISC_VISIBLE
void	cfree (void *);
#endif
# 278 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#if __BSD_VISIBLE || __POSIX_VISIBLE >= 200112
int	unsetenv (const char *__string);
#endif
# 281 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
int	_unsetenv_r (struct _reent *, const char *__string);
#endif /* !__CYGWIN__ */
# 283 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3

#if __POSIX_VISIBLE >= 200112
int __nonnull ((1)) posix_memalign (void **, size_t, size_t);
#endif
# 287 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3

char *	_dtoa_r (struct _reent *, double, int, int, int *, int*, char**);
#ifndef __CYGWIN__
void *	_malloc_r (struct _reent *, size_t) _NOTHROW;
void *	_calloc_r (struct _reent *, size_t, size_t) _NOTHROW;
void	_free_r (struct _reent *, void *) _NOTHROW;
void *	_realloc_r (struct _reent *, void *, size_t) _NOTHROW;
void	_mstats_r (struct _reent *, char *);
#endif
# 296 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
int	_system_r (struct _reent *, const char *);

void	__eprintf (const char *, const char *, unsigned int, const char *);

/* There are two common qsort_r variants.  If you request
   _BSD_SOURCE, you get the BSD version; otherwise you get the GNU
   version.  We want that #undef qsort_r will still let you
   invoke the underlying function, but that requires gcc support. */
#if __GNU_VISIBLE
void	qsort_r (void *__base, size_t __nmemb, size_t __size, int (*_compar)(const void *, const void *, void *), void *__thunk);
#elif __BSD_VISIBLE
# 307 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
# ifdef __GNUC__
void	qsort_r (void *__base, size_t __nmemb, size_t __size, void *__thunk, int (*_compar)(void *, const void *, const void *))
             __asm__ (__ASMNAME ("__bsd_qsort_r"));
# else
# 311 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
void	__bsd_qsort_r (void *__base, size_t __nmemb, size_t __size, void *__thunk, int (*_compar)(void *, const void *, const void *));
#  define qsort_r __bsd_qsort_r
# endif
# 314 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#endif
# 315 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3

/* On platforms where long double equals double.  */
#ifdef _HAVE_LONG_DOUBLE
extern long double _strtold_r (struct _reent *, const char *__restrict, char **__restrict);
#if __ISO_C_VISIBLE >= 1999
extern long double strtold (const char *__restrict, char **__restrict);
#endif
# 322 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#endif /* _HAVE_LONG_DOUBLE */
# 323 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3

/*
 * If we're in a mode greater than C99, expose C11 functions.
 */
#if __ISO_C_VISIBLE >= 2011
void *	aligned_alloc(size_t, size_t) __malloc_like __alloc_align(1)
	    __alloc_size(2);
int	at_quick_exit(void (*)(void));
_Noreturn void
	quick_exit(int);
#endif /* __ISO_C_VISIBLE >= 2011 */
# 334 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3

_END_STD_C

#if __SSP_FORTIFY_LEVEL > 0
#if 0 /* expanded by -frewrite-includes */
#include <ssp/stdlib.h>
#endif /* expanded by -frewrite-includes */
# 338 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
# 339 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
#endif
# 340 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3

#endif /* _STDLIB_H_ */
# 342 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/stdlib.h" 3
# 11 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/argz/argz_replace.c" 2
#if 0 /* expanded by -frewrite-includes */
#include <argz.h>
#endif /* expanded by -frewrite-includes */
# 11 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/argz/argz_replace.c"
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/argz.h" 1 3
/* Copyright (C) 2002 by  Red Hat, Incorporated. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

#ifndef _ARGZ_H_
#define _ARGZ_H_

#if 0 /* expanded by -frewrite-includes */
#include <errno.h>
#endif /* expanded by -frewrite-includes */
# 10 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/argz.h" 3
# 11 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/argz.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/types.h>
#endif /* expanded by -frewrite-includes */
# 11 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/argz.h" 3
# 12 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/argz.h" 3

#if 0 /* expanded by -frewrite-includes */
#include "_ansi.h"
#endif /* expanded by -frewrite-includes */
# 13 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/argz.h" 3
# 14 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/argz.h" 3

_BEGIN_STD_C

/* The newlib implementation of these functions assumes that sizeof(char) == 1. */
error_t argz_create (char *const argv[], char **argz, size_t *argz_len);
error_t argz_create_sep (const char *string, int sep, char **argz, size_t *argz_len);
size_t argz_count (const char *argz, size_t argz_len);
void argz_extract (char *argz, size_t argz_len, char **argv);
void argz_stringify (char *argz, size_t argz_len, int sep);
error_t argz_add (char **argz, size_t *argz_len, const char *str);
error_t argz_add_sep (char **argz, size_t *argz_len, const char *str, int sep);
error_t argz_append (char **argz, size_t *argz_len, const char *buf, size_t buf_len);
error_t argz_delete (char **argz, size_t *argz_len, char *entry);
error_t argz_insert (char **argz, size_t *argz_len, char *before, const char *entry);
char * argz_next (char *argz, size_t argz_len, const char *entry);
error_t argz_replace (char **argz, size_t *argz_len, const char *str, const char *with, unsigned *replace_count);

_END_STD_C

#endif /* _ARGZ_H_ */
# 34 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/include/argz.h" 3
# 12 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/argz/argz_replace.c" 2

#if 0 /* expanded by -frewrite-includes */
#include "buf_findstr.h"
#endif /* expanded by -frewrite-includes */
# 13 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/argz/argz_replace.c"
# 1 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/argz/buf_findstr.h" 1
/* Copyright (C) 2002 by  Red Hat, Incorporated. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

#if 0 /* expanded by -frewrite-includes */
#include <sys/types.h>
#endif /* expanded by -frewrite-includes */
# 7 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/argz/buf_findstr.h"
# 8 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/argz/buf_findstr.h"

/* Find string str in buffer buf of length buf_len.  Point buf to
   character after string, or set it to NULL if end of buffer is
   reached.  Return 1 if found, 0 if not. */
int _buf_findstr(const char *str, char **buf, size_t *buf_len);
# 14 "/srv/bfbuild/hypervisor-super/build/cache/newlib/newlib/libc/argz/argz_replace.c" 2

error_t
argz_replace (char **argz,
       size_t *argz_len,
       const char *str,
       const char *with,
       unsigned *replace_count)
{
  const int str_len = strlen(str);
  const int with_len = strlen(with);
  const int len_diff = with_len - str_len;

  char *buf_iter = *argz;
  size_t buf_len = *argz_len;
  char *last_iter = NULL;
  char *new_argz = NULL;
  size_t new_argz_len = 0;
  char *new_argz_iter = NULL;
  char *argz_realloc = NULL;

  *replace_count = 0;
  new_argz_len = *argz_len;

  while(buf_len)
    {
      if(_buf_findstr(str, &buf_iter, &buf_len))
        {
          *replace_count += 1;
          new_argz_len += len_diff;
        }
    }

  if (*replace_count)
    {
      if (!(new_argz = (char *)malloc(new_argz_len)))
	return ENOMEM;
      
      buf_iter = *argz;
      buf_len = *argz_len;
      last_iter = buf_iter;
      new_argz_iter = new_argz;
      
      while(buf_len)
        {
          if (_buf_findstr(str, &buf_iter, &buf_len))
            {
              /* copy everything up to, but not including str, from old argz to
                 new argz. */
              memcpy(new_argz_iter, last_iter, buf_iter - last_iter - str_len);
              new_argz_iter += (buf_iter - last_iter - str_len);
              /* copy replacement string. */
              memcpy(new_argz_iter, with, with_len);
              new_argz_iter += with_len;
              last_iter = buf_iter;
            }
        }
      /* copy everything after last occurrence of str. */
      memcpy(new_argz_iter, last_iter, *argz + *argz_len - last_iter);

      /* reallocate argz, and copy over the new value. */
      if(!(argz_realloc = (char *)realloc(*argz, new_argz_len)))
        {
          free(new_argz);
          return ENOMEM;
        }
      *argz = argz_realloc;

      memcpy(*argz, new_argz, new_argz_len);
      *argz_len = new_argz_len;

      if (*argz_len == 0)
        {
          free(*argz);
          *argz = NULL;
        }
      free(new_argz);
    }

  return 0;
}
