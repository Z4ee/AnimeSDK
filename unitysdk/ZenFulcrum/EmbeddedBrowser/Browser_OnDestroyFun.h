#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONDESTROYFUN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C5107B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONDESTROYFUN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C5107E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONDESTROYFUN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C510510)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONDESTROYFUN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C510500)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_OnDestroyFun_TypeDefinitionIndex = 30964;

	class Browser_OnDestroyFun : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONDESTROYFUN__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONDESTROYFUN_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONDESTROYFUN_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ONDESTROYFUN_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
