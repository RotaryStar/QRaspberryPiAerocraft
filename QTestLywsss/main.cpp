#include "QDatabase.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QDatabase w;
	w.show();
	return a.exec();
}
