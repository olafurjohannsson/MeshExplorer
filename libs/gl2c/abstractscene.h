//
// Created by olafurj on 03/03/20.
//

#ifndef MESHEXPLORER_ABSTRACTSCENE_H
#define MESHEXPLORER_ABSTRACTSCENE_H


namespace gl2c {
    class AbstractScene {

    public:

        AbstractScene();
        ~AbstractScene();

        virtual void initialize() = 0;

        virtual void cleanup() {}

        virtual void update(float t) = 0;

        virtual void render() = 0;

        virtual void resize(int width, int height) = 0;

    protected:

    };

}
#endif //MESHEXPLORER_ABSTRACTSCENE_H
