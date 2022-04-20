/* BEGIN_COMMON_COPYRIGHT_HEADER
 * (c)LGPL2+
 *
 * LXQt - a lightweight, Qt based, desktop toolset
 * https://lxqt.org
 *
 * Copyright: 2011-2012 Razor team
 * Authors:
 *   Petr Vanek <petr@scribus.info>
 *
 * This program or library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA
 *
 * END_COMMON_COPYRIGHT_HEADER */

#include <QCommandLineParser>
#include <QApplication>
#include "policykitagent.h"

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);
    app.setQuitOnLastWindowClosed(false);

    QCommandLineParser parser;
    parser.setApplicationDescription(QStringLiteral("LXQt Policykit Agent"));
    const QString VERINFO = QStringLiteral("1.0.0"
                                           "\nliblxqt   1.0"
                                           "\nQt        1.0");
    app.setApplicationVersion(VERINFO);
    parser.addVersionOption();
    parser.addHelpOption();
    parser.process(app);

    LXQtPolicykit::PolicykitAgent agent;
    return app.exec();
}
