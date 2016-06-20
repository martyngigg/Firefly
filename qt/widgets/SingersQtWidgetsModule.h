
#ifndef SINGERSQTWIDGETS_EXPORT_H
#define SINGERSQTWIDGETS_EXPORT_H

#ifdef SINGERSQTWIDGETS_STATIC_DEFINE
#  define SINGERSQTWIDGETS_EXPORT
#  define SINGERSQTWIDGETS_NO_EXPORT
#else
#  ifndef SINGERSQTWIDGETS_EXPORT
#    ifdef SingersQtWidgets_EXPORTS
        /* We are building this library */
#      define SINGERSQTWIDGETS_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define SINGERSQTWIDGETS_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef SINGERSQTWIDGETS_NO_EXPORT
#    define SINGERSQTWIDGETS_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#endif
