#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>
#include "person.h"
class student : public person
{
    Q_OBJECT
public:
    explicit student(QObject *parent = nullptr);

    void buyBooks();

signals:

public slots:
};

#endif // STUDENT_H
