#pragma once

#include <QtWidgets/QWidget>
#include "ui_QRPARecipient.h"

class QRPARecipient : public QWidget
{
	Q_OBJECT

public:
	QRPARecipient(QWidget *parent = Q_NULLPTR);

private:
	Ui::QRPARecipientClass ui;
};
