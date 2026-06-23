#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Windows/WebCam/PhotoCapture_PhotoCaptureResult.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Windows::WebCam { class PhotoCaptureFrame; }

#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTUREDTOMEMORYCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DA2F8D0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTUREDTOMEMORYCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DA2F950)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTUREDTOMEMORYCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DA2F4C0)
#define UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTUREDTOMEMORYCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2F4A0)

namespace UnityEngine::Windows::WebCam
{
	inline static constexpr unsigned int PhotoCapture_OnCapturedToMemoryCallback_TypeDefinitionIndex = 5470;

	class PhotoCapture_OnCapturedToMemoryCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTUREDTOMEMORYCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult result, ::UnityEngine::Windows::WebCam::PhotoCaptureFrame* photoCaptureFrame)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult, ::UnityEngine::Windows::WebCam::PhotoCaptureFrame*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTUREDTOMEMORYCALLBACK_INVOKE_OFFSET))(this, result, photoCaptureFrame);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult result, ::UnityEngine::Windows::WebCam::PhotoCaptureFrame* photoCaptureFrame, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult, ::UnityEngine::Windows::WebCam::PhotoCaptureFrame*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTUREDTOMEMORYCALLBACK_BEGININVOKE_OFFSET))(this, result, photoCaptureFrame, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_PHOTOCAPTURE_ONCAPTUREDTOMEMORYCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
