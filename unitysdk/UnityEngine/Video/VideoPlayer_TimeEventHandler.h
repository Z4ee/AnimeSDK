#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Video { class VideoPlayer; }

#define UNITYENGINE_VIDEO_VIDEOPLAYER_TIMEEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FB31D40)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_TIMEEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FB31DA0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_TIMEEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FB31550)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_TIMEEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB31D20)

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoPlayer_TimeEventHandler_TypeDefinitionIndex = 19432;

	class VideoPlayer_TimeEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_TIMEEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Video::VideoPlayer* source, ::System::Double seconds)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_TIMEEVENTHANDLER_INVOKE_OFFSET))(this, source, seconds);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Video::VideoPlayer* source, ::System::Double seconds, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*, ::System::Double, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_TIMEEVENTHANDLER_BEGININVOKE_OFFSET))(this, source, seconds, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_TIMEEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
