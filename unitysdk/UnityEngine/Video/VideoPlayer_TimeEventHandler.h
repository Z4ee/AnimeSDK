#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Video { class VideoPlayer; }

#define UNITYENGINE_VIDEO_VIDEOPLAYER_TIMEEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F00C760)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_TIMEEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F00C7C0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_TIMEEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F00C450)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_TIMEEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F00C6E0)

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoPlayer_TimeEventHandler_TypeDefinitionIndex = 6052;

	class VideoPlayer_TimeEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_TIMEEVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::Video::VideoPlayer* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_TIMEEVENTHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Video::VideoPlayer* a1, ::System::Double a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*, ::System::Double, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_TIMEEVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_TIMEEVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
