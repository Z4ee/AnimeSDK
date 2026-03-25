#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DESTROYBROWSER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18C733F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DESTROYBROWSER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18C73440)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DESTROYBROWSER_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C592F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DESTROYBROWSER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C733D0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_destroyBrowser_TypeDefinitionIndex = 30462;

	class BrowserNative_Calltype_zfb_destroyBrowser : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DESTROYBROWSER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DESTROYBROWSER_INVOKE_OFFSET))(this, id);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 id, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DESTROYBROWSER_BEGININVOKE_OFFSET))(this, id, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DESTROYBROWSER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
