#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Windows/WebCam/VideoCapture_VideoCaptureResult.h"

namespace UnityEngine::Windows::WebCam { class VideoCapture_OnStartedRecordingVideoCallback; }
namespace UnityEngine::Windows::WebCam { class VideoCapture_OnStoppedRecordingVideoCallback; }
namespace UnityEngine::Windows::WebCam { class VideoCapture_OnVideoCaptureResourceCreatedCallback; }
namespace UnityEngine::Windows::WebCam { class VideoCapture_OnVideoModeStartedCallback; }
namespace UnityEngine::Windows::WebCam { class VideoCapture_OnVideoModeStoppedCallback; }

#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_DISPOSETHREADED_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EA203E0)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_DISPOSE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EA20350)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EA202A0)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EA20360)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_INVOKEONCREATEDVIDEOCAPTURERESOURCEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1EA1FE60)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_INVOKEONSTARTEDRECORDINGVIDEOTODISKDELEGATE_OFFSET UNITYSDK_OFFSET(0x1EA200C0)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_INVOKEONSTOPPEDRECORDINGVIDEOTODISKDELEGATE_OFFSET UNITYSDK_OFFSET(0x1EA201B0)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_INVOKEONVIDEOMODESTARTEDDELEGATE_OFFSET UNITYSDK_OFFSET(0x1EA1FEE0)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_INVOKEONVIDEOMODESTOPPEDDELEGATE_OFFSET UNITYSDK_OFFSET(0x1EA1FFD0)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_MAKECAPTURERESULT_OFFSET UNITYSDK_OFFSET(0x1EA1FDF0)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA203F0)
#define UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA1FED0)

namespace UnityEngine::Windows::WebCam
{
	inline static constexpr unsigned int VideoCapture_TypeDefinitionIndex = 5475;

	class VideoCapture : public ::System::Object
	{
	public:
		static ::System::Int64* StaticGet_HR_SUCCESS()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(VideoCapture_TypeDefinitionIndex)->GetStaticField(0x2F00);
		}
		::System::IntPtr m_NativePtr; // 0x10

		::System::Void _ctor(::System::IntPtr nativeCaptureObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE__CTOR_OFFSET))(this, nativeCaptureObject);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult MakeCaptureResult(::System::Int64 hResult)
		{
			return ((::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_MAKECAPTURERESULT_OFFSET))(hResult);
		}

		static ::System::Void InvokeOnCreatedVideoCaptureResourceDelegate(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback* callback, ::System::IntPtr nativePtr)
		{
			return ((::System::Void(*)(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_INVOKEONCREATEDVIDEOCAPTURERESOURCEDELEGATE_OFFSET))(callback, nativePtr);
		}

		static ::System::Void InvokeOnVideoModeStartedDelegate(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback* callback, ::System::Int64 hResult)
		{
			return ((::System::Void(*)(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_INVOKEONVIDEOMODESTARTEDDELEGATE_OFFSET))(callback, hResult);
		}

		static ::System::Void InvokeOnVideoModeStoppedDelegate(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback* callback, ::System::Int64 hResult)
		{
			return ((::System::Void(*)(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_INVOKEONVIDEOMODESTOPPEDDELEGATE_OFFSET))(callback, hResult);
		}

		static ::System::Void InvokeOnStartedRecordingVideoToDiskDelegate(::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback* callback, ::System::Int64 hResult)
		{
			return ((::System::Void(*)(::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_INVOKEONSTARTEDRECORDINGVIDEOTODISKDELEGATE_OFFSET))(callback, hResult);
		}

		static ::System::Void InvokeOnStoppedRecordingVideoToDiskDelegate(::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback* callback, ::System::Int64 hResult)
		{
			return ((::System::Void(*)(::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_INVOKEONSTOPPEDRECORDINGVIDEOTODISKDELEGATE_OFFSET))(callback, hResult);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_Internal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_DISPOSE_INTERNAL_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_FINALIZE_OFFSET))(this);
		}

		::System::Void DisposeThreaded_Internal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_WEBCAM_VIDEOCAPTURE_DISPOSETHREADED_INTERNAL_OFFSET))(this);
		}
	};
}
