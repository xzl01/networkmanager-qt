/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was:
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef WIRELESSDEVICEINTERFACE_H
#define WIRELESSDEVICEINTERFACE_H

#include "generictypes.h"

#include <QList>
#include <QObject>
#include <QString>
#include <QVariant>
#include <QtDBus>

/*
 * Proxy class for interface org.freedesktop.NetworkManager.Device.Wireless
 */
class OrgFreedesktopNetworkManagerDeviceWirelessInterface : public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
#ifdef NMQT_STATIC
    {
        return "org.kde.fakenetwork.Device.Wireless";
    }
#else
    {
        return "org.freedesktop.NetworkManager.Device.Wireless";
    }
#endif

public:
    OrgFreedesktopNetworkManagerDeviceWirelessInterface(const QString &service,
                                                        const QString &path,
                                                        const QDBusConnection &connection,
                                                        QObject *parent = nullptr);

    ~OrgFreedesktopNetworkManagerDeviceWirelessInterface() override;

    Q_PROPERTY(QList<QDBusObjectPath> AccessPoints READ accessPoints)
    inline QList<QDBusObjectPath> accessPoints() const
    {
        return qvariant_cast<QList<QDBusObjectPath>>(property("AccessPoints"));
    }

    Q_PROPERTY(QDBusObjectPath ActiveAccessPoint READ activeAccessPoint)
    inline QDBusObjectPath activeAccessPoint() const
    {
        return qvariant_cast<QDBusObjectPath>(property("ActiveAccessPoint"));
    }

    Q_PROPERTY(uint Bitrate READ bitrate)
    inline uint bitrate() const
    {
        return qvariant_cast<uint>(property("Bitrate"));
    }

    Q_PROPERTY(QString HwAddress READ hwAddress)
    inline QString hwAddress() const
    {
        return qvariant_cast<QString>(property("HwAddress"));
    }

    Q_PROPERTY(uint Mode READ mode)
    inline uint mode() const
    {
        return qvariant_cast<uint>(property("Mode"));
    }

    Q_PROPERTY(QString PermHwAddress READ permHwAddress)
    inline QString permHwAddress() const
    {
        return qvariant_cast<QString>(property("PermHwAddress"));
    }

    Q_PROPERTY(uint WirelessCapabilities READ wirelessCapabilities)
    inline uint wirelessCapabilities() const
    {
        return qvariant_cast<uint>(property("WirelessCapabilities"));
    }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QList<QDBusObjectPath>> GetAccessPoints()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetAccessPoints"), argumentList);
    }

    inline QDBusPendingReply<QList<QDBusObjectPath>> GetAllAccessPoints()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetAllAccessPoints"), argumentList);
    }

    inline QDBusPendingReply<> RequestScan(const QVariantMap &options)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(options);
        return asyncCallWithArgumentList(QStringLiteral("RequestScan"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void AccessPointAdded(const QDBusObjectPath &access_point);
    void AccessPointRemoved(const QDBusObjectPath &access_point);
    void PropertiesChanged(const QVariantMap &properties);
};

#endif
