#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class JSONNode; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSRESULTFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FABB480)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSRESULTFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FABB500)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSRESULTFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FABAE70)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSRESULTFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1FABAE50)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_JSResultFunc_TypeDefinitionIndex = 33149;

	class Browser_JSResultFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSRESULTFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::ZenFulcrum::EmbeddedBrowser::JSONNode* value, ::System::Boolean isError)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSRESULTFUNC_INVOKE_OFFSET))(this, value, isError);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::EmbeddedBrowser::JSONNode* value, ::System::Boolean isError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSRESULTFUNC_BEGININVOKE_OFFSET))(this, value, isError, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_JSRESULTFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
