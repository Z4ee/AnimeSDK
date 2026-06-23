#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace ZenFulcrum::EmbeddedBrowser { class Promise; }

#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS40_0__CATCH_B__0_OFFSET UNITYSDK_OFFSET(0x1E4D4590)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS40_0__CATCH_B__1_OFFSET UNITYSDK_OFFSET(0x1E4D45B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D33B0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise___c__DisplayClass40_0_TypeDefinitionIndex = 32729;

	class Promise___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Promise* resultPromise; // 0x10
		::System::Action_1<::System::Exception*>* onRejected; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _Catch_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS40_0__CATCH_B__0_OFFSET))(this);
		}

		::System::Void _Catch_b__1(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS40_0__CATCH_B__1_OFFSET))(this, ex);
		}
	};
}
