#ifndef __JORENDER_H_
#define __JORENDER_H_
#include "j_includes.h"
#include "x_module_manager_def.h"
#include <ddraw.h>
extern "C"
{
#include "libavcodec/avcodec.h"
#include "libavcore/imgutils.h"
};

class CJoRender : public J_Render
{
public:
	CJoRender();
	~CJoRender();

	static int Maker(J_Obj *&pObj)
	{
		pObj = new CJoRender();
		return J_OK;
	}

public:
	///J_Render
	virtual j_result_t InitRender(j_wnd_t hwnd);
	virtual j_result_t DisplayFrame(j_char_t *pData, j_int32_t nLen);
	virtual j_result_t DeinitRender();
	virtual j_result_t SetDisplayParam(const J_VideoDisplayParam &displayParam);
	virtual j_result_t AspectRatio(j_int32_t nWidth, j_int32_t nHeight)
	{
		m_width = nWidth;
		m_height = nHeight;
		return J_OK;
	}

private:
	j_result_t OpenDDraw();
	j_result_t OpenDisplay();
	j_result_t GetDDrawCaps(DDCAPS &ddcaps);
	j_result_t CreateCliper(LPDIRECTDRAWSURFACE7 surface,HWND hwnd);
	j_result_t CreateSurface(J_VideoDecodeParam &videoParam);
	j_result_t Restore();
	j_result_t CopyData(char *buf,int len);
	j_result_t ShowPicture();
	j_void_t Release();

	static LRESULT CALLBACK ControlProc(HWND,UINT,WPARAM,LPARAM);

private:
	j_wnd_t m_hwnd;
	J_VideoDecodeParam m_videoparm;
	j_boolean_t m_bShow;

	LPDIRECTDRAW7					m_pDD;
	LPDIRECTDRAWCLIPPER		m_pcClipper;		//Clipper
	LPDIRECTDRAWSURFACE7	m_pDDSPrimary;		//DirectDrawÏÔÊ¾»º³å¿é Primary surface
	LPDIRECTDRAWSURFACE7	m_pSurface;
	WNDPROC m_oldProc;

	j_int32_t m_width;
	j_int32_t m_height;
};

#endif //~__JORENDER_H_