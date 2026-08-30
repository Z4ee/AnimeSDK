#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_VISIBLECHANGEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C7D8DE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_VISIBLECHANGEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C7D8E40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_VISIBLECHANGEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C7CFED0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_VISIBLECHANGEDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D8CF0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_VisibleChangedDelegate_TypeDefinitionIndex = 38038;

	class Browser_VisibleChangedDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_VISIBLECHANGEDDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::ZenFulcrum::EmbeddedBrowser::Browser* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_VISIBLECHANGEDDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::EmbeddedBrowser::Browser* a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_VISIBLECHANGEDDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_VISIBLECHANGEDDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
