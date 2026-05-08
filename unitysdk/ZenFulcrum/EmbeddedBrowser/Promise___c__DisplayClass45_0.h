#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace ZenFulcrum::EmbeddedBrowser { class IPromise; }
namespace ZenFulcrum::EmbeddedBrowser { class Promise; }

#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C195E00)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS45_0__THEN_B__0_OFFSET UNITYSDK_OFFSET(0x1C196C40)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS45_0__THEN_B__1_OFFSET UNITYSDK_OFFSET(0x1C196D80)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS45_0__THEN_B__2_OFFSET UNITYSDK_OFFSET(0x1C196D40)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS45_0__THEN_B__3_OFFSET UNITYSDK_OFFSET(0x1C196D60)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise___c__DisplayClass45_0_TypeDefinitionIndex = 31180;

	class Promise___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>* onResolved; // 0x10
		::System::Action_1<::System::Exception*>* __9__3; // 0x18
		::ZenFulcrum::EmbeddedBrowser::Promise* resultPromise; // 0x20
		::System::Action* __9__2; // 0x28
		::System::Action_1<::System::Exception*>* onRejected; // 0x30

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
