#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Windows/WebCam/CapturePixelFormat.h"

#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1EA67720)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_DISPOSE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EA67810)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EA67820)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EA679B0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_GETCAPTUREPIXELFORMAT_OFFSET UNITYSDK_OFFSET(0x1EA67620)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_GETDATALENGTH_OFFSET UNITYSDK_OFFSET(0x1EA67600)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_GETHASLOCATIONDATA_OFFSET UNITYSDK_OFFSET(0x1EA67610)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_GET_DATALENGTH_OFFSET UNITYSDK_OFFSET(0x1EA675C0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_SET_DATALENGTH_OFFSET UNITYSDK_OFFSET(0x1EA675D0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_SET_HASLOCATIONDATA_OFFSET UNITYSDK_OFFSET(0x1EA675E0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_SET_PIXELFORMAT_OFFSET UNITYSDK_OFFSET(0x1EA675F0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA67630)

namespace UnityEngine::Windows::WebCam
{
	inline static constexpr unsigned int PhotoCaptureFrame_TypeDefinitionIndex = 5474;

	class PhotoCaptureFrame : public ::System::Object
	{
	public:
		::System::IntPtr m_NativePtr; // 0x10
		::System::Int32 _dataLength_k__BackingField; // 0x18
		::System::Boolean _hasLocationData_k__BackingField; // 0x1C
		::UnityEngine::Windows::WebCam::CapturePixelFormat _pixelFormat_k__BackingField; // 0x20

		::System::Void _ctor(::System::IntPtr nativePtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME__CTOR_OFFSET))(this, nativePtr);
		}

		::System::Int32 get_dataLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_GET_DATALENGTH_OFFSET))(this);
		}

		::System::Void set_dataLength(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_SET_DATALENGTH_OFFSET))(this, value);
		}

		::System::Void set_hasLocationData(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_SET_HASLOCATIONDATA_OFFSET))(this, value);
		}

		::System::Void set_pixelFormat(::UnityEngine::Windows::WebCam::CapturePixelFormat value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Windows::WebCam::CapturePixelFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_SET_PIXELFORMAT_OFFSET))(this, value);
		}

		::System::Int32 GetDataLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_GETDATALENGTH_OFFSET))(this);
		}

		::System::Boolean GetHasLocationData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_GETHASLOCATIONDATA_OFFSET))(this);
		}

		::UnityEngine::Windows::WebCam::CapturePixelFormat GetCapturePixelFormat()
		{
			return ((::UnityEngine::Windows::WebCam::CapturePixelFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_GETCAPTUREPIXELFORMAT_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_CLEANUP_OFFSET))(this);
		}

		::System::Void Dispose_Internal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_DISPOSE_INTERNAL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_DISPOSE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTUREFRAME_FINALIZE_OFFSET))(this);
		}
	};
}
