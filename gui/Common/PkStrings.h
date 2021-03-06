/***************************************************************************
 *   Copyright (C) 2008 by Daniel Nicoletti   *
 *   dantti85-pk@yahoo.com.br   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef PKSTRINGS_H
#define PKSTRINGS_H

#include <QObject>
#include <KIcon>

#include <QPackageKit>

using namespace PackageKit;

class PkStrings : public QObject
{
    Q_OBJECT
public:
    PkStrings( QObject *parent=0);
    ~PkStrings();

    static QString Finished(Exit::Value status);
    static QString Error(Error::Value v);
    static QString ErrorMessage(Error::Value v);
    static QString StatusChanged(Status::Value v);
    static QString Groups(Groups::Value v);
    static KIcon GroupsIcon(Groups::Value v);
    static QString Info(Info::Value v);
    static QString InfoUpdate(Info::Value v, int number);
};

#endif
