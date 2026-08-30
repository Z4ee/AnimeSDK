#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_DIALOGCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C7E8A60)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_DIALOGCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C7E8AD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_DIALOGCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C7E8910)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_DIALOGCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7E89F0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int DialogHandler_DialogCallback_TypeDefinitionIndex = 38197;

	class DialogHandler_DialogCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_DIALOGCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Boolean a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_DIALOGCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean a1, ::System::String* a2, ::System::String* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_DIALOGCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_DIALOGCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
