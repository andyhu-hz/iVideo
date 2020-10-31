#pragma once
#include "mfidl.h"
#include "mfapi.h"
#include "mfreadwrite.h"
#include "codecapi.h"
#include "d3d11.h"
#include "d3d9.h"
#include "d3d9caps.h"
#include "d3d9types.h"
#include "dxva.h"
#include "dxva2api.h"
#include "dxvahd.h"
#include "evr.h"
#include "evr9.h"
#include "mfapi.h"
#include "mfcaptureengine.h"
#include "mfidl.h"
#include "mfmediacapture.h"
#include "mfmediaengine.h"
#include "mfmp2dlna.h"
#include "mfobjects.h"
#include "mfplay.h"
#include "mfreadwrite.h"
#include "mftransform.h"
#include "opmapi.h"
#include "wmcodecdsp.h"
#include "wmcontainer.h"

class CMediaFoundation
{
public:
    void DebugShowDeviceNames(IMFActivate **ppDevices, UINT count);
    HRESULT CreateVideoCaptureDevice(IMFMediaSource **ppSource);
    HRESULT CreateVideoCaptureDevice(PCWSTR *pszSymbolicLink, IMFMediaSource **ppSource);
    HRESULT CreateAudioCaptureDevice(PCWSTR *pszEndPointID, IMFMediaSource **ppSource);
    HRESULT SetDeviceFormat(IMFMediaSource *pSource, DWORD dwFormatIndex);
    HRESULT SetMaxFrameRate(IMFMediaSource *pSource, DWORD dwTypeIndex);

private:
    IMFAttributes *m_pConfig = NULL;
    IMFActivate **m_ppDevices = NULL;
};

