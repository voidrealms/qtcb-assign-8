#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QDebug>

class person : public QObject
{
    Q_OBJECT
public:
    explicit person(QObject *parent = nullptr);

    QString name;
    void sayHello();

signals:

public slots:
};

#endif // PERSON_H
