#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace ZenFulcrum::EmbeddedBrowser { class Promise; }

#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B507760)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS46_0__THEN_B__0_OFFSET UNITYSDK_OFFSET(0x1B508A90)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS46_0__THEN_B__1_OFFSET UNITYSDK_OFFSET(0x1B508AD0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise___c__DisplayClass46_0_TypeDefinitionIndex = 36615;

	class Promise___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Promise* resultPromise; // 0x10
		::System::Action_1<::System::Exception*>* onRejected; // 0x18
		::System::Action* onResolved; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
		}

		::System::Void _Then_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS46_0__THEN_B__0_OFFSET))(this);
		}

		::System::Void _Then_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS46_0__THEN_B__1_OFFSET))(this, a1);
		}
	};
}
