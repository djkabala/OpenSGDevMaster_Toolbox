/* src/google/sparsehash/config.h.  Generated by configure.  */
/* src/google/sparsehash/config.h.in.  Generated from configure.ac by autoheader.  */

/* Namespace for Google classes */
#define GOOGLE_NAMESPACE google

/* the namespace of hash_map */
#ifndef WIN32
#define HASH_NAMESPACE __gnu_cxx
#endif

/* Define to 1 if you have the <ext/hash_fun.h> header file. */
#ifndef WIN32
#define HAVE_EXT_HASH_FUN_H 1
#endif

/* define if the compiler has hash_map */
#ifndef WIN32
#define HAVE_EXT_HASH_MAP 1
#endif

/* define if the compiler has hash_set */
#ifndef WIN32
#define HAVE_EXT_HASH_SET 1
#endif

/* Define to 1 if you have the <ext/stl_hash_fun.h> header file. */
/* #undef HAVE_EXT_STL_HASH_FUN_H */

/* Define to 1 if you have the <hash_fun.h> header file. */
/* #undef HAVE_HASH_FUN_H */

/* define if the compiler has hash_map */
/* #undef HAVE_HASH_MAP */

/* define if the compiler has hash_set */
/* #undef HAVE_HASH_SET */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `memcpy' function. */
#define HAVE_MEMCPY 1

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* define if the compiler implements namespaces */
#define HAVE_NAMESPACES 

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <cstdlib> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <stl_hash_fun.h> header file. */
/* #undef HAVE_STL_HASH_FUN_H */

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <cstring> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/ctime> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if the system has the type `u_int16_t'. */
#define HAVE_U_INT16_T 1

/* Define to 1 if the system has the type `__uint16'. */
/* #undef HAVE___UINT16 */

/* Name of package */
#define PACKAGE "sparsehash"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "opensource@google.com"

/* Define to the full name of this package. */
#define PACKAGE_NAME "sparsehash"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "sparsehash 0.3"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "sparsehash"

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.3"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* the namespace where STL code like vector<> is defined */
#define STL_NAMESPACE std

/* does STL support iterator-tags? */
#define UNDERSTANDS_ITERATOR_TAGS 1

/* Version number of package */
#define VERSION "0.3"

/* Stops putting the code inside the Google namespace */
#define _END_GOOGLE_NAMESPACE_ }

/* Puts following code inside the Google namespace */
#define _START_GOOGLE_NAMESPACE_ namespace GOOGLE_NAMESPACE {