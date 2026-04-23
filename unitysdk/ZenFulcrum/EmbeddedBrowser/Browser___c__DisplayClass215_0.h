#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class JSONNode; }
namespace ZenFulcrum::EmbeddedBrowser { template <typename T> class Promise_1; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS215_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A69AEA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS215_0__EVALJS_B__0_OFFSET UNITYSDK_OFFSET(0x1A6A1E10)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS215_0__EVALJS_B__1_OFFSET UNITYSDK_OFFSET(0x1A6A1FD0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass215_0_TypeDefinitionIndex = 36113;

	class Browser___c__DisplayClass215_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* __4__this; // 0x10
		::System::String* resultJS; // 0x18
		::System::String* scriptURL; // 0x20
		::ZenFulcrum::EmbeddedBrowser::Promise_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* promise; // 0x28
		::System::Int32 timeout; // 0x30
		::System::Int32 id; // 0x34
		::System::Boolean block; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS215_0__CTOR_OFFSET))(this);
		}

		::System::Void _EvalJS_b__0(::ZenFulcrum::EmbeddedBrowser::JSONNode* val, ::System::Boolean isError)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS215_0__EVALJS_B__0_OFFSET))(this, val, isError);
		}

		::System::Void _EvalJS_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS215_0__EVALJS_B__1_OFFSET))(this);
		}
	};
}
