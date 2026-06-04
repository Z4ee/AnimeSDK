#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_FONT_FONTTEXTUREREBUILDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B349BB0)
#define UNITYENGINE_FONT_FONTTEXTUREREBUILDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B349BE0)
#define UNITYENGINE_FONT_FONTTEXTUREREBUILDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B349A90)
#define UNITYENGINE_FONT_FONTTEXTUREREBUILDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B349B40)

namespace UnityEngine
{
	inline static constexpr unsigned int Font_FontTextureRebuildCallback_TypeDefinitionIndex = 5038;

	class Font_FontTextureRebuildCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_FONTTEXTUREREBUILDCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_FONTTEXTUREREBUILDCALLBACK_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_FONTTEXTUREREBUILDCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_FONTTEXTUREREBUILDCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
