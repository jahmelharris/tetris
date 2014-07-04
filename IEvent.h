#ifndef IEVENT_H
#define IEVENT_H
class IEvent{
	public:
		IEvent(){};
		virtual ~IEvent(){}
		virtual void keyDown() = 0;
		virtual void quit() = 0;
};
#endif

