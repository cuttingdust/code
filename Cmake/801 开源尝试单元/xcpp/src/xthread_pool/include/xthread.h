#ifndef XTHREAD_H
#define XTHREAD_H
#include <thread>
#include <memory>
namespace xcpp
{
    class XThread
    {
        explicit XThread();

        void Join();

        void Detach();

        std::thread::id id() const;

        static void Sleep(int ms);

        static void Yield();

    private:
        std::unique_ptr<std::thread> th_;
    };
}
#endif