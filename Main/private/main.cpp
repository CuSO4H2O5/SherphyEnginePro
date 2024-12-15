#include "main.h"
#include "engine.h"

namespace SHPY
{
    Main::Main()
    {
        m_engine = new Engine();
    }

    Main::~Main()
    {
        delete m_engine;
    }

    void Main::run()
    {
        m_running = true;
        m_engine->init();

        while(m_engine->update())
        {
#ifdef SHPY_DEBUG
#endif            
        }
        m_running = false;
    }
}