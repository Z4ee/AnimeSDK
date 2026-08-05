#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Windows::WebCam { class PhotoCapture; }

#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTURERESOURCECREATEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EA92240)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTURERESOURCECREATEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EA92270)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTURERESOURCECREATEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EA91D20)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTURERESOURCECREATEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA91D00)

namespace UnityEngine::Windows::WebCam
{
	inline static constexpr unsigned int PhotoCapture_OnCaptureResourceCreatedCallback_TypeDefinitionIndex = 5469;

	class PhotoCapture_OnCaptureResourceCreatedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTURERESOURCECREATEDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Windows::WebCam::PhotoCapture* captureObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Windows::WebCam::PhotoCapture*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTURERESOURCECREATEDCALLBACK_INVOKE_OFFSET))(this, captureObject);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Windows::WebCam::PhotoCapture* captureObject, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Windows::WebCam::PhotoCapture*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTURERESOURCECREATEDCALLBACK_BEGININVOKE_OFFSET))(this, captureObject, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTURERESOURCECREATEDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
