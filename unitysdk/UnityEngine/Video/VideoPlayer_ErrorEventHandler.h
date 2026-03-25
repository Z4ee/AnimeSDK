#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Video { class VideoPlayer; }

#define UNITYENGINE_VIDEO_VIDEOPLAYER_ERROREVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18B86C60)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ERROREVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18B86CA0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ERROREVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x18B860A0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ERROREVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18B86C40)

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoPlayer_ErrorEventHandler_TypeDefinitionIndex = 6011;

	class VideoPlayer_ErrorEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ERROREVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Video::VideoPlayer* source, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ERROREVENTHANDLER_INVOKE_OFFSET))(this, source, message);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Video::VideoPlayer* source, ::System::String* message, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ERROREVENTHANDLER_BEGININVOKE_OFFSET))(this, source, message, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ERROREVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
