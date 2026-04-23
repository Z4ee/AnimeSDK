#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_VISIBLECHANGEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6A4710)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_VISIBLECHANGEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6A4770)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_VISIBLECHANGEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6969A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_VISIBLECHANGEDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6A46F0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_VisibleChangedDelegate_TypeDefinitionIndex = 36097;

	class Browser_VisibleChangedDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_VISIBLECHANGEDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::ZenFulcrum::EmbeddedBrowser::Browser* sender, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_VISIBLECHANGEDDELEGATE_INVOKE_OFFSET))(this, sender, visible);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::EmbeddedBrowser::Browser* sender, ::System::Boolean visible, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_VISIBLECHANGEDDELEGATE_BEGININVOKE_OFFSET))(this, sender, visible, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_VISIBLECHANGEDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
