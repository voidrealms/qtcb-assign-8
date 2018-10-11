#include "teacher.h"

teacher::teacher(QObject *parent) : person (parent)
{

}

void teacher::teach()
{
 qInfo() << "Teaching!";
}
