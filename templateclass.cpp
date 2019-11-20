#include "templateclass.h"
#include <QDebug>

TemplateClass::TemplateClass(QObject *parent) : QObject(parent)
{

}

void TemplateClass::printWord(const QString &word)
{
    qDebug() << word;
}
