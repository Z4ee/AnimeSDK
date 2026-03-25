#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace ZenFulcrum::EmbeddedBrowser { class IPromise; }

#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18C8F7B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS55_0__THENRACE_B__0_OFFSET UNITYSDK_OFFSET(0x18C906C0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise___c__DisplayClass55_0_TypeDefinitionIndex = 30601;

	class Promise___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::System::Func_1<::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>* chain; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* _ThenRace_b__0()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS55_0__THENRACE_B__0_OFFSET))(this);
		}
	};
}
