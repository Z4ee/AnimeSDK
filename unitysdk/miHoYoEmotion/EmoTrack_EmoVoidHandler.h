#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYOEMOTION_EMOTRACK_EMOVOIDHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BAFE650)
#define MIHOYOEMOTION_EMOTRACK_EMOVOIDHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BAFE680)
#define MIHOYOEMOTION_EMOTRACK_EMOVOIDHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BAF9DE0)
#define MIHOYOEMOTION_EMOTRACK_EMOVOIDHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAFDC00)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EmoTrack_EmoVoidHandler_TypeDefinitionIndex = 39377;

	class EmoTrack_EmoVoidHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_EMOVOIDHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_EMOVOIDHANDLER_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_EMOVOIDHANDLER_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_EMOVOIDHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
