/*
 *  Copyright 2015 Laurent Schall (schall_l@yahoo.fr)
 *
 *  This file is part of CANviaUSB.
 *
 *  CANviaUSB is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  CANviaUSB is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with CANviaUSB. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef WIDGETIDENTIFIERSSTATS_H
#define WIDGETIDENTIFIERSSTATS_H

// QT includes
#include <QVBoxLayout>

// Non QT includes
#include "WidgetBase.h"
#include "TitleFrame.h"
#include "ToolFrame.h"
#include "IdentifiersSimpleStatsView.h"

class WidgetIdentifiersStats : public WidgetBase
{
    Q_OBJECT

public:
    WidgetIdentifiersStats(QStackedWidget* stackedWidget, QWidget *parent = 0);
    ~WidgetIdentifiersStats();

    bool canPrint();

public slots:
	void print();

private:
    QVBoxLayout *mainLayout;
    TitleFrame *title;
    ToolFrame *tool; 
	IdentifiersSimpleStatsView* body;
	
	QAction *printAct;
};

#endif
