// Default empty project template
#include "HolaCascada.hpp"
#include <string>
#include <qdebug.h>

#include <bb/cascades/Application>
#include <bb/cascades/QmlDocument>
#include <bb/cascades/AbstractPane>
#include <bb/cascades/Page>

using namespace bb::cascades;

HolaCascada::HolaCascada(bb::cascades::Application *app)
: QObject(app)
{
	qDebug() << "main";
    // create scene document from main.qml asset
    // set parent to created document to ensure it exists for the whole application lifetime
    QmlDocument *qml = QmlDocument::create("asset:///main.qml").parent(this);

    // create root object for the UI
    AbstractPane *root = qml->createRootObject<AbstractPane>();

    QObject::connect(root,SIGNAL(btnClickSignal()),this,SLOT(btnClickSlot()));
    QObject::connect(this,SIGNAL(dataSignal(QVariant)),root,SLOT(updateHello(QVariant)));

    // set created root object as a scene
    app->setScene(root);
}

void HolaCascada::btnClickSlot()
{
	QString name = "Daniel";
	qDebug() << "hola " << name;
	emit dataSignal(QVariant(name));
}
