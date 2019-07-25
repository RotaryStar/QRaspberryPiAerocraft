#include "QRPAController.h"

QRPAController::QRPAController(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	this->showFullScreen();
	this->move(0, 0);

	connect(ui.CloseBtn,&QPushButton::clicked,this, &QRPAController::close);
}
