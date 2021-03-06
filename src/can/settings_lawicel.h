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

#ifndef SETTINGS_LAWICEL_H
#define SETTINGS_LAWICEL_H

// QT includes

// Non QT includes
#include "settings_driver.h"
#include "ui_settings_lawicel.h"

class Settings_Lawicel: public Settings_Driver, private Ui::SettingsLawicel
{
    Q_OBJECT

public:
    Settings_Lawicel(QWidget *parent = 0);
    ~Settings_Lawicel();
    //	void destroy();			// Called before the driver got destroyed (end of the application)

    void setDeviceName(const QString &deviceName);
    void setManufacturer(const QString &manufacturerName);
    void setSoftwareVersion(const QString &softwareVersion);
    void setDeviceStatus(const QString &deviceStatus);
    void setSerialNumber(const QString &serialNumber);
    void setEditable(bool edit);

    int baudrate(void);

protected:
    void enable_ui();				// Called when the stop button is pressed
    void disable_ui();				// Called when the start button is pressed
    void disable_uiWhileNotReady(); // Called when the driver is not ready
    void enable_uiWhileReady();		// Called when the driver is ready

private slots:
    void on_comboBoxBaudRate_currentIndexChanged(int value);

private:
    void writeSettings();
    void readSettings();

    int m_baudrate;

};

#endif // SETTINGS_ZCAN4USBFX_H


