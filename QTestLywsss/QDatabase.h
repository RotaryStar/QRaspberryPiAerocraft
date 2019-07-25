#pragma once

#include <QtWidgets/QWidget>
#include "ui_QDatabase.h"

class QDatabase : public QWidget
{
	Q_OBJECT

public:
	QDatabase(QWidget *parent = Q_NULLPTR);

private:
	Ui::QDatabaseClass ui;
};
