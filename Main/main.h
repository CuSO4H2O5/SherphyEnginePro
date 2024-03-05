#pragma once

namespace shpy
{
    class Engine;
    class Main
    {
    public:
        Main();
        ~Main();

        void run();
    private:
        bool m_running { false };
        Engine* m_engine = nullptr;
    };
}