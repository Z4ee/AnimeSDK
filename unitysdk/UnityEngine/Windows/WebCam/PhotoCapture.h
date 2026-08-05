#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Windows/WebCam/PhotoCapture_PhotoCaptureResult.h"

namespace UnityEngine::Windows::WebCam { class PhotoCapture_OnCaptureResourceCreatedCallback; }
namespace UnityEngine::Windows::WebCam { class PhotoCapture_OnCapturedToDiskCallback; }
namespace UnityEngine::Windows::WebCam { class PhotoCapture_OnCapturedToMemoryCallback; }
namespace UnityEngine::Windows::WebCam { class PhotoCapture_OnPhotoModeStartedCallback; }
namespace UnityEngine::Windows::WebCam { class PhotoCapture_OnPhotoModeStoppedCallback; }

#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_DISPOSETHREADED_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EE2CDF0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_DISPOSE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EE2CD60)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EE2CCB0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EE2CD70)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONCAPTUREDPHOTOTODISKDELEGATE_OFFSET UNITYSDK_OFFSET(0x1EE2CA80)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONCAPTUREDPHOTOTOMEMORYDELEGATE_OFFSET UNITYSDK_OFFSET(0x1EE2CB70)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONCREATEDRESOURCEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1EE2C820)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONPHOTOMODESTARTEDDELEGATE_OFFSET UNITYSDK_OFFSET(0x1EE2C8A0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_INVOKEONPHOTOMODESTOPPEDDELEGATE_OFFSET UNITYSDK_OFFSET(0x1EE2C990)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_MAKECAPTURERESULT_OFFSET UNITYSDK_OFFSET(0x1EE2C7B0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE2CE00)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE2C890)

namespace UnityEngine::Windows::WebCam
{
	inline static constexpr unsigned int PhotoCapture_TypeDefinitionIndex = 5466;

	class PhotoCapture : public ::System::Object
	{
	public:
		static ::System::Int64* StaticGet_HR_SUCCESS()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(PhotoCapture_TypeDefinitionIndex)->GetStaticField(0x2F20);
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
