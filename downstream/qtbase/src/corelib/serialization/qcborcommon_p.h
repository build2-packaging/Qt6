// Copyright (C) 2018 Intel Corporation.
// Copyright (C) 2019 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

#ifndef QCBORCOMMON_P_H
#define QCBORCOMMON_P_H

#include "qcborcommon.h"
#include "private/qglobal_p.h"

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

QT_BEGIN_NAMESPACE

#ifdef QT_NO_DEBUG
#  define NDEBUG 1
#endif
#undef assert
#define assert Q_ASSERT

#include <libtinycbor/cbor.h>

Q_DECLARE_TYPEINFO(CborValue, Q_PRIMITIVE_TYPE);

QT_END_NAMESPACE

#endif // QCBORCOMMON_P_H
