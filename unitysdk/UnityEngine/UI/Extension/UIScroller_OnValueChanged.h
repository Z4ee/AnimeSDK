#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_UI_EXTENSION_UISCROLLER_ONVALUECHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A52F300)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_ONVALUECHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A52F370)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_ONVALUECHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A52EFB0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_ONVALUECHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1A52EF90)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIScroller_OnValueChanged_TypeDefinitionIndex = 69079;

	class UIScroller_OnValueChanged : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_ONVALUECHANGED__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_ONVALUECHANGED_INVOKE_OFFSET))(this, val);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single val, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_ONVALUECHANGED_BEGININVOKE_OFFSET))(this, val, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISCROLLER_ONVALUECHANGED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
