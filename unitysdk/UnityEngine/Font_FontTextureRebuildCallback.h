#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_FONT_FONTTEXTUREREBUILDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C38F770)
#define UNITYENGINE_FONT_FONTTEXTUREREBUILDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C38F7A0)
#define UNITYENGINE_FONT_FONTTEXTUREREBUILDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C38F3D0)
#define UNITYENGINE_FONT_FONTTEXTUREREBUILDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C38F760)

namespace UnityEngine
{
	inline static constexpr unsigned int Font_FontTextureRebuildCallback_TypeDefinitionIndex = 6347;

	class Font_FontTextureRebuildCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_FONTTEXTUREREBUILDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_FONTTEXTUREREBUILDCALLBACK_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_FONTTEXTUREREBUILDCALLBACK_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_FONTTEXTUREREBUILDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
