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
        void swapData();
    private:
        bool m_is_new_world;
        WorldData* m_world_data;
    };
}