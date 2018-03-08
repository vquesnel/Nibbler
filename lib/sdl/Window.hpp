#ifndef WINDOW_HPP
# define WINDOW_HPP

# include <SDL2/SDL.h>
# include <iostream>
# include "IGraphism.hpp"
#include <map>

class Window : public IGraphism {
  private:
    Window(void);

    void              setHooks(void);
    eHook             getHooks(void) const;
    void              drawFrame(std::list <IEntity *> data) const;
    unsigned int      getWidth(void) const;
    unsigned int      getHeight(void) const;
    void              initTextures(void);
  public:
    Window(unsigned int width, unsigned int height);
    ~Window(void);

    SDL_Window        *pWindow;
    SDL_Renderer      *pRenderer;
    unsigned int      wWidth;
    unsigned int      wHeight;
    eHook             hook;
    std::map <eTexture, SDL_Surface *>      _textures;

};

extern "C" {
  Window              *createWindow(unsigned int width, unsigned int height);
  void                 deleteWindow(Window *window);
}

#endif