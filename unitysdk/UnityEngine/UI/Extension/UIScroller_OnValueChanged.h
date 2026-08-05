#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_UI_EXTENSION_UISCROLLER_ONVALUECHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DEA7330)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_ONVALUECHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DEA73A0)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_ONVALUECHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DEA7010)
#define UNITYENGINE_UI_EXTENSION_UISCROLLER_ONVALUECHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA6FF0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIScroller_OnValueChanged_TypeDefinitionIndex = 56994;

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
