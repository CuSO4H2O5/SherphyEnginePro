#pragma once


namespace SHPY
{
    class Engine
    {
    public:
        Engine();
        ~Engine();

        bool init();
        bool update();
        bool stop();
    private:

    };
}