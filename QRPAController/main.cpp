#include "QRPAController.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QRPAController w;
	w.show();
	return a.exec();
}
