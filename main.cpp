#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "templateclass.h"

int main(int argc, char *argv[])
{
	QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

	QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    //-----------------------------------------------------------------------------------------
    qmlRegisterType<TemplateClass>("mymodule", 1, 0, "TemplateClass");
    /*
     * TemplateClass - type name, example:
     *
        import mymodule 1.0

        TemplateClass {id: myClass}

     */
    //-----------------------------------------------------------------------------------------
	const QUrl url(QStringLiteral("qrc:/main.qml"));
	QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
					 &app, [url](QObject *obj, const QUrl &objUrl) {
		if (!obj && url == objUrl)
			QCoreApplication::exit(-1);
	}, Qt::QueuedConnection);
	engine.load(url);

	return app.exec();
}
