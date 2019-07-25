#include "QRPARecipient.h"

QRPARecipient::QRPARecipient(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	connect(ui.pushButton,&QPushButton::clicked,this,&QRPARecipient::showmessage);
}

void QRPARecipient::showmessage()
{
	ui.aa->setText("hhhhhh");
	ui.
}
