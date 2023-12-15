#include "CFigure.h"
#include <iostream>

CFigure::CFigure(GfxInfo FigureGfxInfo)
{ //constractor
	static int Previous_ID = 0; // for all class
	ID = Previous_ID++;
	FigGfxInfo = FigureGfxInfo;	//Default status is non-filled.
	Selected = false;
	AbleToBeDrawn = true;
}

void CFigure::SetSelected(bool s)
{	Selected = s; }

bool CFigure::IsSelected() const   // get function for selection
{	return Selected; }

void CFigure::ChngDrawClr(color Dclr) // oulinr color
{	FigGfxInfo.DrawClr = Dclr; }

void CFigure::ChngFillClr(color Fclr) /// fill color
{	
	FigGfxInfo.isFilled = true;
	FigGfxInfo.FillClr = Fclr; 
}
const color* CFigure::GetFillColor() const
{
	const color fillclr = FigGfxInfo.FillClr;
	return (FigGfxInfo.isFilled ? &fillclr : nullptr);
}
string CFigure::GetType() const
{
	return Type;
}
bool CFigure::GetFigureAbilityToBeDrawn() const
{
	return AbleToBeDrawn;
}
void CFigure::SetFigureAbilityToBeDrawn(bool PermissionToBeDrawn)
{
	AbleToBeDrawn = PermissionToBeDrawn;
}
