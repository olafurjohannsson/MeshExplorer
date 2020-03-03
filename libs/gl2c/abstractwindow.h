//
// Created by olafurj on 03/03/20.
//

#ifndef MESHEXPLORER_ABSTRACTWINDOW_H
#define MESHEXPLORER_ABSTRACTWINDOW_H

#include <memory>
#include <string>
#include <iostream>

namespace gl2c {
    class KeyPressEvent {

    };

    class AbstractWindow {

    public:

        ///
        /// No copies allowed
        ///
//    AbstractWindow(const AbstractWindow &) = delete;
//    AbstractWindow &operator=(const AbstractWindow &) = delete;

    protected:

        virtual void initialize() = 0;
        virtual void resize() = 0;
        virtual void paint() = 0;
        virtual void update() = 0;

    protected:
        virtual void keyPressEvent(KeyPressEvent *e);

    private:


    };
}

#endif //MESHEXPLORER_ABSTRACTWINDOW_H
