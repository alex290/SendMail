#include "sendmail.h"
#include "src/mimemessage.h"
#include "src/ssmtp.h"


SendMail::SendMail(QString emailSend, QString htmlText, QString fileSend)
{
    //1. Создаем MIMEmessage объект
    MIMEmessage message;

    // 2. Set sender, add recipients, set subject
    message.setSender("Think & Trade <send@think-trade.ru>");
    message.addRcpt(emailSend); //"Jon Smitt <alex@webgoal.ru>"
    // message.addRcpt("mary@test.com");
    message.setSubject("Сигнал Think & Trade");

    // 3. Add content
    // message.addPlainTextPart("Only plain text message");
    // or
    message.addHtmlPart(htmlText);
    //"<!DOCTYPE html><html><body><p>Здесь будет текст</p></body></html>"
    // or add alternative part (MIME content type as "multipart/alternative")
    // message.addAlternative(/*plain text*/,/*html text*/)
    // Вставляем картинку
    message.addAttach(fileSend);
    // "/media/D/qtDevelop/mail/screen/screen.png"
    // or
   // message.addAttach(myByteArray,"file.dat")

    // 4. Create SSMTP object
    SSMTP cln("smtp.yandex.ru",465,true);

    // 5. Set login/pass if need
    cln.setLogin("send@think-trade.ru");
    cln.setPass("Alex123");

    // 6. Send email
    cln.send(&message);
}
