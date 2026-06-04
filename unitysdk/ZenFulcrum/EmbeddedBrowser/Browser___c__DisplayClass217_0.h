#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class JSONNode; }
namespace ZenFulcrum::EmbeddedBrowser { template <typename T> class Promise_1; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS217_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E1500)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS217_0__EVALJSCSP_B__0_OFFSET UNITYSDK_OFFSET(0x1B4E5F80)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS217_0__EVALJSCSP_B__1_OFFSET UNITYSDK_OFFSET(0x1B4E60F0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass217_0_TypeDefinitionIndex = 36415;

	class Browser___c__DisplayClass217_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* __4__this; // 0x10
		::System::String* resultJS; // 0x18
		::System::String* scriptURL; // 0x20
		::ZenFulcrum::EmbeddedBrowser::Promise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* promise; // 0x28
		::System::Int32 id; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS217_0__CTOR_OFFSET))(this);
		}

		::System::Void _EvalJSCSP_b__0(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS217_0__EVALJSCSP_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _EvalJSCSP_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS217_0__EVALJSCSP_B__1_OFFSET))(this);
		}
	};
}
