#ifndef IVIEW_H
#define IVIEW_H

class IEvent;
class IBoard;
class IView{
	public:
		IView(){};
		virtual ~IView(){};
		virtual bool init(IEvent*) = 0;
		virtual void checkEvents() = 0;
		virtual void Draw(IBoard*) = 0;
		virtual void Render() = 0;
		
};

#endif
