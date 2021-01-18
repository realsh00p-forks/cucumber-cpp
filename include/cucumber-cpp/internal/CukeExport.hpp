
#ifndef CUCUMBER_CPP_EXPORT_H
#define CUCUMBER_CPP_EXPORT_H

#ifdef CUCUMBER_CPP_STATIC_DEFINE
#  define CUCUMBER_CPP_EXPORT
#  define CUCUMBER_CPP_NO_EXPORT
#else
#  ifndef CUCUMBER_CPP_EXPORT
#    ifdef cucumber_cpp_EXPORTS
        /* We are building this library */
#      define CUCUMBER_CPP_EXPORT 
#    else
        /* We are using this library */
#      define CUCUMBER_CPP_EXPORT 
#    endif
#  endif

#  ifndef CUCUMBER_CPP_NO_EXPORT
#    define CUCUMBER_CPP_NO_EXPORT 
#  endif
#endif

#ifndef CUCUMBER_CPP_DEPRECATED
#  define CUCUMBER_CPP_DEPRECATED 
#endif

#ifndef CUCUMBER_CPP_DEPRECATED_EXPORT
#  define CUCUMBER_CPP_DEPRECATED_EXPORT CUCUMBER_CPP_EXPORT CUCUMBER_CPP_DEPRECATED
#endif

#ifndef CUCUMBER_CPP_DEPRECATED_NO_EXPORT
#  define CUCUMBER_CPP_DEPRECATED_NO_EXPORT CUCUMBER_CPP_NO_EXPORT CUCUMBER_CPP_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef CUCUMBER_CPP_NO_DEPRECATED
#    define CUCUMBER_CPP_NO_DEPRECATED
#  endif
#endif

#endif /* CUCUMBER_CPP_EXPORT_H */
