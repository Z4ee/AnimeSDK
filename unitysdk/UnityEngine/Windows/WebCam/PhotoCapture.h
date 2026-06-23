#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Windows/WebCam/PhotoCapture_PhotoCaptureResult.h"

namespace UnityEngine::Windows::WebCam { class PhotoCapture_OnCaptureResourceCreatedCallback; }
namespace UnityEngine::Windows::WebCam { class PhotoCapture_OnCapturedToDiskCallback; }
namespace UnityEngine::Windows::WebCam { class PhotoCapture_OnCapturedToMemoryCallback; }
namespace UnityEngine::Windows::WebCam { class PhotoCapture_OnPhotoModeStartedCallback; }
namespace UnityEngine::Windows::WebCam { class PhotoCapture_OnPhotoModeStoppedCallback; }

#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_DISPOSETHREADED_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1DA9D700)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_DISPOSE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1DA9D670)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DA9D5C0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1DA9D680)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONCAPTUREDPHOTOTODISKDELEGATE_OFFSET UNITYSDK_OFFSET(0x1DA9D390)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONCAPTUREDPHOTOTOMEMORYDELEGATE_OFFSET UNITYSDK_OFFSET(0x1DA9D480)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONCREATEDRESOURCEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1DA9D130)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONPHOTOMODESTARTEDDELEGATE_OFFSET UNITYSDK_OFFSET(0x1DA9D1B0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONPHOTOMODESTOPPEDDELEGATE_OFFSET UNITYSDK_OFFSET(0x1DA9D2A0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_MAKECAPTURERESULT_OFFSET UNITYSDK_OFFSET(0x1DA9D0C0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA9D710)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9D1A0)

namespace UnityEngine::Windows::WebCam
{
	inline static constexpr unsigned int PhotoCapture_TypeDefinitionIndex = 5463;

	class PhotoCapture : public ::System::Object
	{
	public:
		static ::System::Int64* StaticGet_HR_SUCCESS()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(PhotoCapture_TypeDefinitionIndex)->GetStaticField(0x2F10);
		}
		::System::IntPtr m_NativePtr; // 0x10

		::System::Void _ctor(::System::IntPtr nativeCaptureObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE__CTOR_OFFSET))(this, nativeCaptureObject);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult MakeCaptureResult(::System::Int64 hResult)
		{
			return ((::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_MAKECAPTURERESULT_OFFSET))(hResult);
		}

		static ::System::Void InvokeOnCreatedResourceDelegate(::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback* callback, ::System::IntPtr nativePtr)
		{
			return ((::System::Void(*)(::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONCREATEDRESOURCEDELEGATE_OFFSET))(callback, nativePtr);
		}

		static ::System::Void InvokeOnPhotoModeStartedDelegate(::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback* callback, ::System::Int64 hResult)
		{
			return ((::System::Void(*)(::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONPHOTOMODESTARTEDDELEGATE_OFFSET))(callback, hResult);
		}

		static ::System::Void InvokeOnPhotoModeStoppedDelegate(::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback* callback, ::System::Int64 hResult)
		{
			return ((::System::Void(*)(::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONPHOTOMODESTOPPEDDELEGATE_OFFSET))(callback, hResult);
		}

		static ::System::Void InvokeOnCapturedPhotoToDiskDelegate(::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback* callback, ::System::Int64 hResult)
		{
			return ((::System::Void(*)(::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONCAPTUREDPHOTOTODISKDELEGATE_OFFSET))(callback, hResult);
		}

		static ::System::Void InvokeOnCapturedPhotoToMemoryDelegate(::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback* callback, ::System::Int64 hResult, ::System::IntPtr photoCaptureFramePtr)
		{
			return ((::System::Void(*)(::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback*, ::System::Int64, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONCAPTUREDPHOTOTOMEMORYDELEGATE_OFFSET))(callback, hResult, photoCaptureFramePtr);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_Internal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_DISPOSE_INTERNAL_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_FINALIZE_OFFSET))(this);
		}

		::System::Void DisposeThreaded_Internal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_DISPOSETHREADED_INTERNAL_OFFSET))(this);
		}
	};
}
