#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class JSONNode; }
namespace ZenFulcrum::EmbeddedBrowser { template <typename T> class Promise_1; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS216_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E10F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS216_0__EVALJSDIRECTLY_B__0_OFFSET UNITYSDK_OFFSET(0x1B4E5E10)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass216_0_TypeDefinitionIndex = 36414;

	class Browser___c__DisplayClass216_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* __4__this; // 0x10
		::ZenFulcrum::EmbeddedBrowser::Promise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* promise; // 0x18
		::System::Int32 id; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS216_0__CTOR_OFFSET))(this);
		}

		::System::Void _EvalJSDirectly_b__0(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS216_0__EVALJSDIRECTLY_B__0_OFFSET))(this, a1, a2);
		}
	};
}
