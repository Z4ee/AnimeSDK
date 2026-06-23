#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class JSONNode; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E72BB70)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E72BBA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E72B550)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E72BB50)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_JSCallback_TypeDefinitionIndex = 32513;

	class Browser_JSCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::ZenFulcrum::EmbeddedBrowser::JSONNode* args)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSCALLBACK_INVOKE_OFFSET))(this, args);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::EmbeddedBrowser::JSONNode* args, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSCALLBACK_BEGININVOKE_OFFSET))(this, args, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
