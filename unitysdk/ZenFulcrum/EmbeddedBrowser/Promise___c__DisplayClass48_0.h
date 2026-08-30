#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace ZenFulcrum::EmbeddedBrowser { class IPromise; }

#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7EFCC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS48_0__THENALL_B__0_OFFSET UNITYSDK_OFFSET(0x1D7F1070)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise___c__DisplayClass48_0_TypeDefinitionIndex = 38257;

	class Promise___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::System::Func_1<::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>* chain; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* _ThenAll_b__0()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS48_0__THENALL_B__0_OFFSET))(this);
		}
	};
}
