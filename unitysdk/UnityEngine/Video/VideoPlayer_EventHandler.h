#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Video { class VideoPlayer; }

#define UNITYENGINE_VIDEO_VIDEOPLAYER_EVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F00C5B0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_EVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F00C5E0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_EVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F00C260)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_EVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F00C540)

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoPlayer_EventHandler_TypeDefinitionIndex = 6049;

	class VideoPlayer_EventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_EVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::Video::VideoPlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_EVENTHANDLER_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Video::VideoPlayer* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_EVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_EVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
