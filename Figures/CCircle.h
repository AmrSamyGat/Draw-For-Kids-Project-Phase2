#ifndef _CCircle_H
#define _CCircle_H
#include"../Figures/CFigure.h"
class CCircle :public CFigure {
private:
	Point point1;
	int radius; // Because it doesn't always depend on Second Point
	static int Count; // number of figures of this type
public:
	CCircle(Point, int ,GfxInfo FigureGfxInfo);
	virtual Point GetFigureCenter();
	virtual void Draw(Output* pOut) const;
	virtual void Move(Point Pm);
	virtual bool CheckSelection(int x, int y);
	virtual void Save(ofstream& OutFile);

	static void SetCount(int i);

	static int GetCount();
	~CCircle();
};


#endif // !1

