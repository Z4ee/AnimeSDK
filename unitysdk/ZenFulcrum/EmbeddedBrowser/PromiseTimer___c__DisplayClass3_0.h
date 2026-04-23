#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/TimeData.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISETIMER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6CC0B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISETIMER___C__DISPLAYCLASS3_0__WAITWHILE_B__0_OFFSET UNITYSDK_OFFSET(0x1A6CC390)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int PromiseTimer___c__DisplayClass3_0_TypeDefinitionIndex = 36301;

	class PromiseTimer___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Func_2<::ZenFulcrum::EmbeddedBrowser::TimeData, ::System::Boolean>* predicate; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISETIMER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _WaitWhile_b__0(::ZenFulcrum::EmbeddedBrowser::TimeData t)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::TimeData))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISETIMER___C__DISPLAYCLASS3_0__WAITWHILE_B__0_OFFSET))(this, t);
		}
	};
}
