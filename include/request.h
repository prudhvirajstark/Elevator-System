#ifndef REQUEST_H
#define REQUEST_H

enum class Direction
{
    kUp =0,
    kDown =1
};

class Request
{
    private:
        int level;
    public:
        Request(int l = 1):level(1){}
        int getLevel() const {return level;}

};

class ExternalRequest : public Request
{
    private:
        Direction direction;
    public:
        ExternalRequest(){};
        ExternalRequest(int l, Direction d):Request(),direction(d){}
        Direction getDirection() const { return direction;}
};

class InternalRequest : public Request
{
    public:
        InternalRequest(int l = 0): Request(1){}
};
#endif/*REQUEST_H*/