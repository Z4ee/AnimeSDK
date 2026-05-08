#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace ZenFulcrum::EmbeddedBrowser { class Promise; }

#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C195E10)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS46_0__THEN_B__0_OFFSET UNITYSDK_OFFSET(0x1C196DF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS46_0__THEN_B__1_OFFSET UNITYSDK_OFFSET(0x1C196E20)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise___c__DisplayClass46_0_TypeDefinitionIndex = 31181;

	class Promise___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Exception*>* onRejected; // 0x10
		::ZenFulcrum::EmbeddedBrowser::Promise* resultPromise; // 0x18
		::System::Action* onResolved; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
		}

		::System::Void _Then_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS46_0__THEN_B__0_OFFSET))(this);
		}

		::System::Void _Then_b__1(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS46_0__THEN_B__1_OFFSET))(this, ex);
		}
	};
}
