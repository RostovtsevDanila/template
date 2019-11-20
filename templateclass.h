#ifndef TEMPLATECLASS_H
#define TEMPLATECLASS_H
#include <QObject>

class TemplateClass : public QObject
{
    Q_OBJECT
public:
    TemplateClass(QObject *parent = nullptr);

    void printWord(const QString &word);
};

#endif // TEMPLATECLASS_H
