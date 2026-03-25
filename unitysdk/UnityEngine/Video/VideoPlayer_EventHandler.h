#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Video { class VideoPlayer; }

#define UNITYENGINE_VIDEO_VIDEOPLAYER_EVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18B86CD0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_EVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18B86D00)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_EVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x18B854F0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_EVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18B86CB0)

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoPlayer_EventHandler_TypeDefinitionIndex = 6010;

	class VideoPlayer_EventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_EVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Video::VideoPlayer* source)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_EVENTHANDLER_INVOKE_OFFSET))(this, source);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Video::VideoPlayer* source, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_EVENTHANDLER_BEGININVOKE_OFFSET))(this, source, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_EVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
