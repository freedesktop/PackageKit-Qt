#include "Daemon.h"
#include "constants.h"

using namespace PackageKit;

Daemon::Daemon(QObject *parent) : QObject(parent) {
	proxy = new CentralProxy(PK_NAME, PK_PATH, QDBusConnection::systemBus(), this);
}

Daemon::~Daemon() {
}

QStringList Daemon::getActions() {
	QString actions = proxy->GetActions();
	return actions.split(";");
}

void Daemon::getBackendDetails(QString &name, QString &author) {
	name = proxy->GetBackendDetail(author);
}

void Daemon::suggestQuit() {
	proxy->SuggestDaemonQuit();
}

Transaction* Daemon::newTransaction() {
	QString tid = proxy->GetTid();
	return new Transaction(tid, this);
}
