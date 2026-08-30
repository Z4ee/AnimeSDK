#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace ZenFulcrum::EmbeddedBrowser { class IPromise; }
namespace ZenFulcrum::EmbeddedBrowser { class Promise; }

#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS51_0__ALL_B__0_OFFSET UNITYSDK_OFFSET(0x1D7F10E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS51_0__ALL_B__1_OFFSET UNITYSDK_OFFSET(0x1D7F1260)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS51_0__ALL_B__2_OFFSET UNITYSDK_OFFSET(0x1D7F1290)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7EFEA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise___c__DisplayClass51_0_TypeDefinitionIndex = 38259;

	class Promise___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Promise* resultPromise; // 0x10
		::System::Action_1<::System::Exception*>* __9__1; // 0x18
		::System::Action* __9__2; // 0x20
		::System::Int32 remainingCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Void _All_b__0(::ZenFulcrum::EmbeddedBrowser::IPromise* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::IPromise*, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS51_0__ALL_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _All_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS51_0__ALL_B__1_OFFSET))(this, a1);
		}

		::System::Void _All_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS51_0__ALL_B__2_OFFSET))(this);
		}
	};
}
