#pragma once
#include "Demos\Demo.h"
#include <d3d12.h>

// Link necessary d3d12 libraries.
#pragma comment(lib,"d3dcompiler.lib")
#pragma comment(lib, "D3D12.lib")
#pragma comment(lib, "dxgi.lib")

/// define debug macros - taken from Frank Luna book ///

#ifndef ThrowIfFailed
#define ThrowIfFailed(x)                                              \
{                                                                     \
    HRESULT hr__ = (x);                                               \
    std::wstring wfn = AnsiToWString(__FILE__);                       \
    if(FAILED(hr__)) { throw DxException(hr__, L#x, wfn, __LINE__); } \
}
#endif

#ifndef ReleaseCom
#define ReleaseCom(x) { if(x){ x->Release(); x = 0; } }
#endif

/// define debug macros - taken from Frank Luna book ///

class D3D12Demo :
	public Demo
{
public:
	D3D12Demo();
	virtual ~D3D12Demo();

private:

	// steps to initialize D3D12
	void CreateDevice();			 // step one
	// values for step One

	void CreateFenceAndQuery();		 // step two
	void Check4XMSAA();				 // step 3
	void CreateCommandQueue();		 //step 4
	void CreateCommandAllocator();   // step 5
	void CreateCommandList();        // step 6
	void CreateSwapChain();          // step 7
	void CreateDescriptorHeaps();    // step 8
	void ResizeBackBuffer();         // step 9
	void CreateRenderTarget();       // step 10
	void CreateDepthStencilBuffer(); // step 11
	void SetViewPort();				 // step 12

};

