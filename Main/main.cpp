#include "main.h"
#include "engine.h"

namespace shpy
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
        m_engine->run();

        while(m_engine->update())
        {
#ifdef SHPY_DEBUG
#endif            
        }
    }

    void Main::stop()
    {
        m_running = false;
    }
}