#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONDESTROYFUN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B4E7630)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONDESTROYFUN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B4E7660)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONDESTROYFUN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4DE3F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONDESTROYFUN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E75C0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_OnDestroyFun_TypeDefinitionIndex = 36396;

	class Browser_OnDestroyFun : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONDESTROYFUN__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONDESTROYFUN_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONDESTROYFUN_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONDESTROYFUN_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
