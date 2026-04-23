#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace ZenFulcrum::EmbeddedBrowser { class IPromise; }
namespace ZenFulcrum::EmbeddedBrowser { class Promise; }

#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6CA700)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS45_0__THEN_B__0_OFFSET UNITYSDK_OFFSET(0x1A6CB770)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS45_0__THEN_B__1_OFFSET UNITYSDK_OFFSET(0x1A6CB8B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS45_0__THEN_B__2_OFFSET UNITYSDK_OFFSET(0x1A6CB870)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS45_0__THEN_B__3_OFFSET UNITYSDK_OFFSET(0x1A6CB890)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise___c__DisplayClass45_0_TypeDefinitionIndex = 36314;

	class Promise___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Exception*>* onRejected; // 0x10
		::System::Action* __9__2; // 0x18
		::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>* onResolved; // 0x20
		::System::Action_1<::System::Exception*>* __9__3; // 0x28
		::ZenFulcrum::EmbeddedBrowser::Promise* resultPromise; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Void _Then_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS45_0__THEN_B__0_OFFSET))(this);
		}

		::System::Void _Then_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS45_0__THEN_B__2_OFFSET))(this);
		}

		::System::Void _Then_b__3(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS45_0__THEN_B__3_OFFSET))(this, ex);
		}

		::System::Void _Then_b__1(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS45_0__THEN_B__1_OFFSET))(this, ex);
		}
	};
}
