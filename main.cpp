#include <QCoreApplication>
#include "person.h"
#include "teacher.h"
#include "student.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    teacher t;
    student s;

    s.buyBooks();
    t.teach();


    t.name = "Mr. Smith";

    t.sayHello();
    s.sayHello();


    return a.exec();
}
