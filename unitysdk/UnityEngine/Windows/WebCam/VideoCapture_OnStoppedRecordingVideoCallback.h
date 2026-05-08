#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Windows/WebCam/VideoCapture_VideoCaptureResult.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_ONSTOPPEDRECORDINGVIDEOCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BC23050)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_ONSTOPPEDRECORDINGVIDEOCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BC230C0)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_ONSTOPPEDRECORDINGVIDEOCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BC22C90)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_ONSTOPPEDRECORDINGVIDEOCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC22C80)

namespace UnityEngine::Windows::WebCam
{
	inline static constexpr unsigned int VideoCapture_OnStoppedRecordingVideoCallback_TypeDefinitionIndex = 5478;

	class VideoCapture_OnStoppedRecordingVideoCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_ONSTOPPEDRECORDINGVIDEOCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult result)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_ONSTOPPEDRECORDINGVIDEOCALLBACK_INVOKE_OFFSET))(this, result);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult result, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_ONSTOPPEDRECORDINGVIDEOCALLBACK_BEGININVOKE_OFFSET))(this, result, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_ONSTOPPEDRECORDINGVIDEOCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
