#ifndef MYWIDGET_GLOBAL_H
#define MYWIDGET_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MYWIDGET_LIBRARY)
#  define MYWIDGET_EXPORT Q_DECL_EXPORT
#else
#  define MYWIDGET_EXPORT Q_DECL_IMPORT
#endif

#endif // MYWIDGET_GLOBAL_H
