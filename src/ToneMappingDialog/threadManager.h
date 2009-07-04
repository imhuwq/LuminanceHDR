/**
 * This file is a part of Qtpfsgui package.
 * ----------------------------------------------------------------------
 * Copyright (C) 2009 Franco Comida
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * ----------------------------------------------------------------------
 *
 * @author Franco Comida <fcomida@users.sourceforge.net>
 */

#ifndef THREADMANAGER_IMPL_H
#define THREADMANAGER_IMPL_H

#include <QDialog>
#include <QShowEvent>
#include <QHideEvent>
#include <QCloseEvent>
#include "../generated_uic/ui_threadManager.h"
#include "tmoProgressIndicator.h"

class ThreadManager : public QDialog, private Ui::ThreadManagerUI
{
Q_OBJECT

public:
	ThreadManager(QWidget *parent = 0);
	~ThreadManager();
	void addProgressIndicator(TmoProgressIndicator *pw);
public slots:
	void clearAll();
protected:
	virtual void showEvent(QShowEvent *event);
	virtual void hideEvent(QHideEvent *event);
	virtual void closeEvent(QCloseEvent *event);
	QList<TmoProgressIndicator *> widgets;
signals:
	void closeRequested(bool);
};

#endif
