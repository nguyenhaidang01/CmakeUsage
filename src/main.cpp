#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDebug>
#include "MyMathLib.h"
#include "Feature3rdparty.h"
#include "Other.h"

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

    qDebug() << "Kq = "<< MyCalculator::mySum(5, 1);
    qDebug() << "Kq = "<< MyCalculator::mySub(5, 1);
    qDebug() << "Kq = "<< Feature3rdparty::myMultiplication(5, 1);
    qDebug() << "Kq = "<< Feature3rdparty::mydivision(5, 1);
    OtherNamespace::otherFunction();

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/qml/qml/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
        &app, [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
