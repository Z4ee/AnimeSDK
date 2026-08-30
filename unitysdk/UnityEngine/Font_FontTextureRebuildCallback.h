#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_FONT_FONTTEXTUREREBUILDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB5000)
#define UNITYENGINE_FONT_FONTTEXTUREREBUILDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB5030)
#define UNITYENGINE_FONT_FONTTEXTUREREBUILDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB4EE0)
#define UNITYENGINE_FONT_FONTTEXTUREREBUILDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB4F90)

namespace UnityEngine
{
	inline static constexpr unsigned int Font_FontTextureRebuildCallback_TypeDefinitionIndex = 5055;

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
