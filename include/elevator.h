#ifndef ELEVATRO_H
#define ELEVATOR_H

#include <iostream>
#include <vector>
#include <string>
#include "request.h"



class ExternalRequest;
class InternalRequest;

enum class Status
{
    kUp = 0,
    kDown = 1,
    kIdle =2
};

class ElevatorButton: public Elevator
{
    private:
    public:
};

class Elevator
{
    private:
    public:
};



#endif /*ELEVATOR_H*/