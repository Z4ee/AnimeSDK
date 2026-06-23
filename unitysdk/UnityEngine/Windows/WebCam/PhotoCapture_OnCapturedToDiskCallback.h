#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Windows/WebCam/PhotoCapture_PhotoCaptureResult.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTUREDTODISKCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D500130)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTUREDTODISKCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D5001A0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTUREDTODISKCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D4FFD80)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTUREDTODISKCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FFD60)

namespace UnityEngine::Windows::WebCam
{
	inline static constexpr unsigned int PhotoCapture_OnCapturedToDiskCallback_TypeDefinitionIndex = 5469;

	class PhotoCapture_OnCapturedToDiskCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTUREDTODISKCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult result)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTUREDTODISKCALLBACK_INVOKE_OFFSET))(this, result);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult result, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTUREDTODISKCALLBACK_BEGININVOKE_OFFSET))(this, result, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTUREDTODISKCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
