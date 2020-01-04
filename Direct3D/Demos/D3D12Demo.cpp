#include "D3D12Demo.h"



D3D12Demo::D3D12Demo()
{
}

D3D12Demo::~D3D12Demo()
{

}

void D3D12Demo::CreateDevice()
{
#if defined(DEBUG) || defined(__DEBUG)
	// enable the D3D12 DEBUG Layer
	{
		Microsoft::WRL::ComPtr<ID3D12Debug> debugController;
		ThrowIfFailed(D3D12GetDebugInterface(IID_PPV_ARGS(&debugController)));
		debugController->EnableDebugLayer;
	}
#endif

	ThrowIfFailed(CreateDXGIFactory1(IID_PPV_ARGS(&mdxgiFactory)));

	HRESULT hardwareResult = D3D12CreateDevice(
		nullptr, // Default adapter
		D3D_FEATURE_LEVEL_12_0,
		IID_PPV_ARGS(&md3dDevice));

	// fall back to WRAP device
	if (FAILED(hardwareResult))
	{
		Microsoft::WRL::ComPtr<IDXGIAdapter> pWrapAdapter;
	}
}

void D3D12Demo::CreateFenceAndQuery()
{

}

void D3D12Demo::Check4XMSAA()
{

}

void D3D12Demo::CreateCommandQueue()
{

}

void D3D12Demo::CreateCommandAllocator()
{

}

void D3D12Demo::CreateCommandList()
{

}

void D3D12Demo::CreateSwapChain()
{

}

void D3D12Demo::CreateDescriptorHeaps()
{

}

void D3D12Demo::ResizeBackBuffer()
{

}

void D3D12Demo::CreateRenderTarget()
{

}

void D3D12Demo::CreateDepthStencilBuffer()
{

}

void D3D12Demo::SetViewPort()
{

}

DxException::DxException(HRESULT hr, const std::wstring & functionName, const std::wstring & filename, int lineNumber) :
	ErrorCode(hr),
	FunctionName(functionName),
	Filename(filename),
	LineNumber(lineNumber)
{
}

std::wstring DxException::ToString() const // TODO fix conversion
{
	//// Get the string description of the error code.
	//_com_error err(ErrorCode);
	//std::wstring msg = err.ErrorMessage();

	//return FunctionName + L" failed in " + Filename + L"; line " + std::to_wstring(LineNumber) + L"; error: " + msg;
	return std::wstring = L"temp";
}
