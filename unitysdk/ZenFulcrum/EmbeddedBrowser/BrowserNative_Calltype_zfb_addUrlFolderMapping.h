#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_ADDURLFOLDERMAPPING_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18C72C90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_ADDURLFOLDERMAPPING_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18C72CD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_ADDURLFOLDERMAPPING_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C70280)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_ADDURLFOLDERMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x18C72C70)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_addUrlFolderMapping_TypeDefinitionIndex = 30457;

	class BrowserNative_Calltype_zfb_addUrlFolderMapping : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_ADDURLFOLDERMAPPING__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::System::String* url, ::System::String* folder)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_ADDURLFOLDERMAPPING_INVOKE_OFFSET))(this, url, folder);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* url, ::System::String* folder, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_ADDURLFOLDERMAPPING_BEGININVOKE_OFFSET))(this, url, folder, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_ADDURLFOLDERMAPPING_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
