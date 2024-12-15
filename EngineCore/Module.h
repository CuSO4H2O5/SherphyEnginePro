

namespace SHPY
{
    class RTModule
    {
        SHPY_API virtual void init() = 0;
        SHPY_API virtual void shutdown() = 0;

        SHPY_API virtual void fixedUpdate() = 0;

        SHPY_API virtual void update() = 0;

        SHPY_API virtual void onEvent(Event& event) = 0;

        SHPY_API virtual void onRender() = 0;

        SHPY_API virtual void onGuiRender() = 0;

        SHPY_API virtual void onShutdown() = 0;

        SHPY_API virtual void deInit() = 0;
    }
} // namespace SHPY
