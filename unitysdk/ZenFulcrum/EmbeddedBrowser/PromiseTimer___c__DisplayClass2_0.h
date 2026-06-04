#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/TimeData.h"

#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISETIMER___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5091A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISETIMER___C__DISPLAYCLASS2_0__WAITFOR_B__0_OFFSET UNITYSDK_OFFSET(0x1B509630)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int PromiseTimer___c__DisplayClass2_0_TypeDefinitionIndex = 36600;

	class PromiseTimer___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Single seconds; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISETIMER___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _WaitFor_b__0(::ZenFulcrum::EmbeddedBrowser::TimeData a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::TimeData))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISETIMER___C__DISPLAYCLASS2_0__WAITFOR_B__0_OFFSET))(this, a1);
		}
	};
}
