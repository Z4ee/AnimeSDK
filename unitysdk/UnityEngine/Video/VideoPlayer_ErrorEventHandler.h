#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Video { class VideoPlayer; }

#define UNITYENGINE_VIDEO_VIDEOPLAYER_ERROREVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B40D100)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ERROREVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B40D140)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ERROREVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B40CFD0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ERROREVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B40D080)

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoPlayer_ErrorEventHandler_TypeDefinitionIndex = 6300;

	class VideoPlayer_ErrorEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ERROREVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::Video::VideoPlayer* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ERROREVENTHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Video::VideoPlayer* a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ERROREVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ERROREVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
