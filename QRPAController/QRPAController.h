#pragma once

#include <QtWidgets/QWidget>
#include "ui_QRPAController.h"

class QRPAController : public QWidget
{
	Q_OBJECT

public:
	QRPAController(QWidget *parent = Q_NULLPTR);

private:
	Ui::QRPAControllerClass ui;
};
