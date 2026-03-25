#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETVERSION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18C74B60)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETVERSION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18C74B90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETVERSION_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C748B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETVERSION__CTOR_OFFSET UNITYSDK_OFFSET(0x18C74890)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_getVersion_TypeDefinitionIndex = 30448;

	class BrowserNative_Calltype_zfb_getVersion : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETVERSION__CTOR_OFFSET))(this, object, method);
		}

		::System::IntPtr Invoke()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETVERSION_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETVERSION_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETVERSION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
