#ifndef SENDMAIL_GLOBAL_H
#define SENDMAIL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SENDMAIL_LIBRARY)
#  define SENDMAILSHARED_EXPORT Q_DECL_EXPORT
#else
#  define SENDMAILSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // SENDMAIL_GLOBAL_H