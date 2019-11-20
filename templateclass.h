#ifndef TEMPLATECLASS_H
#define TEMPLATECLASS_H
#include <QObject>

class TemplateClass : public QObject
{
    Q_OBJECT //this macros is need!!!
public:
    TemplateClass(QObject *parent = nullptr);

    Q_INVOKABLE void printWord(const QString &word); // Q_INVOKABLE allows to use this method in qml
};

#endif // TEMPLATECLASS_H
