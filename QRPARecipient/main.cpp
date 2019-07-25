#include "QRPARecipient.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QRPARecipient w;
	w.show();
	return a.exec();
}
