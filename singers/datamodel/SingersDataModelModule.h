
#ifndef SINGERSDATAMODEL_EXPORT_H
#define SINGERSDATAMODEL_EXPORT_H

#ifdef SINGERSDATAMODEL_STATIC_DEFINE
#  define SINGERSDATAMODEL_EXPORT
#  define SINGERSDATAMODEL_NO_EXPORT
#else
#  ifndef SINGERSDATAMODEL_EXPORT
#    ifdef singers_datamodel_EXPORTS
        /* We are building this library */
#      define SINGERSDATAMODEL_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define SINGERSDATAMODEL_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef SINGERSDATAMODEL_NO_EXPORT
#    define SINGERSDATAMODEL_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#endif
