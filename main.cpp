#include <iostream>
#include <QtGui/QGuiApplication>
#include <QtQuick/QQuickView>
#include <QtQml/QQmlApplicationEngine>

//#include "camera.h"


/**

    TODO

        Application class using only C++

            Holds:
              * cwd
              * timestamp
              * loggers
              * window
                  * ability to set window size
                  * ability to get/set full screen
              *


        Window class using only C++
        AbstractScene class using only c++


        Need to extend these in Qt


**/

//#include <gl2c/application.h>
#include "libs/gl2c/application.h"

int main( int argc, char **argv ) {
    std::cout << "Hello, World!" << std::endl;

    QGuiApplication application( argc, argv );
    QQmlApplicationEngine applicationEngine(QUrl("../main.qml"));


    gl2c::Application application1;

//    camera camera;


    return QGuiApplication::exec();
}