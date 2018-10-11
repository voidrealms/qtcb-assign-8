#include "person.h"

person::person(QObject *parent) : QObject(parent)
{

}

void person::sayHello()
{
    QString message = "Hello";
    if(!name.isEmpty()) message.append(" my name is " + name);
    qInfo() << message;
}
