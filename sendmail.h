#ifndef SENDMAIL_H
#define SENDMAIL_H

#include "sendmail_global.h"

class SENDMAILSHARED_EXPORT SendMail
{

public:
    SendMail(QString emailSend, QString htmlText, QString fileSend);
};

#endif // SENDMAIL_H
