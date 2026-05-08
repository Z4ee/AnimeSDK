#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Windows/WebCam/PhotoCapture_PhotoCaptureResult.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONPHOTOMODESTOPPEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B3A6F90)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONPHOTOMODESTOPPEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B3A7000)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONPHOTOMODESTOPPEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B3A6BD0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONPHOTOMODESTOPPEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3A6BC0)

namespace UnityEngine::Windows::WebCam
{
	inline static constexpr unsigned int PhotoCapture_OnPhotoModeStoppedCallback_TypeDefinitionIndex = 5467;

	class PhotoCapture_OnPhotoModeStoppedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONPHOTOMODESTOPPEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult result)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONPHOTOMODESTOPPEDCALLBACK_INVOKE_OFFSET))(this, result);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult result, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONPHOTOMODESTOPPEDCALLBACK_BEGININVOKE_OFFSET))(this, result, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONPHOTOMODESTOPPEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
