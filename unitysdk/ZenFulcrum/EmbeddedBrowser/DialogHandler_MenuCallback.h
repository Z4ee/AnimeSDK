#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_MENUCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18C7EF90)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_MENUCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18C7EFE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_MENUCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C7EC20)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_MENUCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18C587A0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int DialogHandler_MenuCallback_TypeDefinitionIndex = 30537;

	class DialogHandler_MenuCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_MENUCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 commandId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_MENUCALLBACK_INVOKE_OFFSET))(this, commandId);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 commandId, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_MENUCALLBACK_BEGININVOKE_OFFSET))(this, commandId, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_MENUCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
