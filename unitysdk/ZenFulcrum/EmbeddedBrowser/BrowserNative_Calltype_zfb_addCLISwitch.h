#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_ADDCLISWITCH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FA083B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_ADDCLISWITCH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FA083E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_ADDCLISWITCH_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FA07E90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_ADDCLISWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA07E70)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_addCLISwitch_TypeDefinitionIndex = 33229;

	class BrowserNative_Calltype_zfb_addCLISwitch : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_ADDCLISWITCH__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_ADDCLISWITCH_INVOKE_OFFSET))(this, value);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* value, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_ADDCLISWITCH_BEGININVOKE_OFFSET))(this, value, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_ADDCLISWITCH_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
