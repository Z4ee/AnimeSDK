#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Windows::WebCam { class VideoCapture; }

#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_ONVIDEOCAPTURERESOURCECREATEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EBED9D0)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_ONVIDEOCAPTURERESOURCECREATEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EBEDA00)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_ONVIDEOCAPTURERESOURCECREATEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EBED4B0)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_ONVIDEOCAPTURERESOURCECREATEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBED490)

namespace UnityEngine::Windows::WebCam
{
	inline static constexpr unsigned int VideoCapture_OnVideoCaptureResourceCreatedCallback_TypeDefinitionIndex = 5478;

	class VideoCapture_OnVideoCaptureResourceCreatedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_ONVIDEOCAPTURERESOURCECREATEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Windows::WebCam::VideoCapture* captureObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Windows::WebCam::VideoCapture*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_ONVIDEOCAPTURERESOURCECREATEDCALLBACK_INVOKE_OFFSET))(this, captureObject);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Windows::WebCam::VideoCapture* captureObject, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Windows::WebCam::VideoCapture*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_ONVIDEOCAPTURERESOURCECREATEDCALLBACK_BEGININVOKE_OFFSET))(this, captureObject, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_ONVIDEOCAPTURERESOURCECREATEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
