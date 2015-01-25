//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitSpinIndicatorFrame.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSpinIndicatorFrame *SpinIndicatorFrame;
//---------------------------------------------------------------------------
__fastcall TSpinIndicatorFrame::TSpinIndicatorFrame(TComponent* Owner)
	: TFrame(Owner)
{
	this->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TSpinIndicatorFrame::StartAnimate()
{
	TGIFImage *indicatorImage = (TGIFImage*)this->ImageIndicator->Picture->Graphic;
	indicatorImage->Animate = true;
	this->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TSpinIndicatorFrame::StopAnimate()
{
	TGIFImage *indicatorImage = (TGIFImage*)this->ImageIndicator->Picture->Graphic;
	indicatorImage->Animate = false;
	this->Visible = false;
}
//---------------------------------------------------------------------------
