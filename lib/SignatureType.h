/*
* Copyright (C) 2007 Adrien Bustany <madcat@mymadcat.com>
*
* Licensed under the GNU General Public License Version 2
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 See MA 02111-1307, USA.
*
*/

#ifndef SIGNATURETYPE_H
#define SIGNATURETYPE_H

#include <QtCore>

#include "Enum.h"

namespace PackageKit {

class SignatureType : public QObject {

	Q_OBJECT
	Q_ENUMS(Value)

public:
typedef enum {
	Gpg,
	Unknown
} Value;

};

} // End namespace PackageKit

#endif
