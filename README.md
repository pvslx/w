Перевірка запускання пустого вікна Qt у безграфічному середовищі та без бібліотек x11, xcb.

Вперше будування Qt наступними командами:

    git clone https://code.qt.io/qt/qt5.git
    cd qt5
    git checkout 5.12
    perl init-repository --module-subset=qtbase
    ./configure -release -no-opengl -no-xcb-xlib -no-xcb
    make -j1

Будування мінімальної платформи (можливо ще offscreen, vnc)

    cd qtbase/src/plugins/platforms/minimal
    ../../../../bin/qmake minimal.pro
    make -j1

Запускання пустого вікна ново-будованим Qt:

    export LD_LIBRARY_PATH=/opt/qt5/qtbase/lib:$LD_LIBRARY_PATH
    export QT_QPA_PLATFORM_PLUGIN_PATH=/opt/qt5/qtbase/plugins/platforms
    ./window -platform minimal