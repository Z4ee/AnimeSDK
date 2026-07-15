#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Video { class VideoPlayer; }

#define UNITYENGINE_VIDEO_VIDEOPLAYER_FRAMEREADYEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D2FD320)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_FRAMEREADYEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D2FD380)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_FRAMEREADYEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D2FCF60)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_FRAMEREADYEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FD2A0)

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoPlayer_FrameReadyEventHandler_TypeDefinitionIndex = 6306;

	class VideoPlayer_FrameReadyEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_FRAMEREADYEVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::Video::VideoPlayer* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_FRAMEREADYEVENTHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Video::VideoPlayer* a1, ::System::Int64 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*, ::System::Int64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_FRAMEREADYEVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_FRAMEREADYEVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
