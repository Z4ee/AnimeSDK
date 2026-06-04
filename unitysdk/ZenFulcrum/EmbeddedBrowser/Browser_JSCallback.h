#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class JSONNode; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B4E7420)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B4E7450)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4E61B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E7330)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_JSCallback_TypeDefinitionIndex = 36394;

	class Browser_JSCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
