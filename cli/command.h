#pragma once
#include <iostream>
#include <string>
#include <functional>

class Command
{
public:
    virtual ~Command() = default;
    virtual void execute() const = 0;
};

class Clear : public Command
{
public:
    Clear() {}
    void execute() const override
    {
// clear console
#ifdef _WIN32
        system("CLS");
#else
        system("clear");
#endif
    }
};

class Quit : public Command
{
public:
    Quit() {}
    void execute() const override
    {
// clear console
#ifdef _WIN32
        exit(0);
#else
        exit(0);
#endif
    }
};

class CustomCallback : public Command
{
public:
    CustomCallback(std::function<void()> func) {
        callback = func;
    }
    void execute() const override
    {
        callback();
    }
    std::function<void()> callback;
};
