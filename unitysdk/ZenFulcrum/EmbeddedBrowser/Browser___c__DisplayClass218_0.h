#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class JSONNode; }
namespace ZenFulcrum::EmbeddedBrowser { template <typename T> class Promise_1; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS218_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6422A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS218_0__EVALJS_B__0_OFFSET UNITYSDK_OFFSET(0x1F6474A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS218_0__EVALJS_B__1_OFFSET UNITYSDK_OFFSET(0x1F647610)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass218_0_TypeDefinitionIndex = 39351;

	class Browser___c__DisplayClass218_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Promise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* promise; // 0x10
		::System::String* scriptURL; // 0x18
		::System::String* resultJS; // 0x20
		::ZenFulcrum::EmbeddedBrowser::Browser* __4__this; // 0x28
		::System::Int32 timeout; // 0x30
		::System::Boolean block; // 0x34
		::System::Int32 id; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS218_0__CTOR_OFFSET))(this);
		}

		::System::Void _EvalJS_b__0(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS218_0__EVALJS_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _EvalJS_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS218_0__EVALJS_B__1_OFFSET))(this);
		}
	};
}
