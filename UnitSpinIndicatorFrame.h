//---------------------------------------------------------------------------

#ifndef UnitSpinIndicatorFrameH
#define UnitSpinIndicatorFrameH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.GIFImg.hpp>
//---------------------------------------------------------------------------
class TSpinIndicatorFrame : public TFrame
{
__published:	// IDE-managed Components
	TImage *ImageIndicator;
private:	// User declarations
public:		// User declarations
	__fastcall TSpinIndicatorFrame(TComponent* Owner);
	void __fastcall StartAnimate();
	void __fastcall StopAnimate();
};
//---------------------------------------------------------------------------
extern PACKAGE TSpinIndicatorFrame *SpinIndicatorFrame;
//---------------------------------------------------------------------------
#endif
