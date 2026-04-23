#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace ZenFulcrum::EmbeddedBrowser { class IPromise; }
namespace ZenFulcrum::EmbeddedBrowser { class Promise; }

#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS51_0__ALL_B__0_OFFSET UNITYSDK_OFFSET(0x1A6CB9D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS51_0__ALL_B__1_OFFSET UNITYSDK_OFFSET(0x1A6CBB20)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS51_0__ALL_B__2_OFFSET UNITYSDK_OFFSET(0x1A6CBB50)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6CA980)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise___c__DisplayClass51_0_TypeDefinitionIndex = 36318;

	class Promise___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Promise* resultPromise; // 0x10
		::System::Action* __9__2; // 0x18
		::System::Action_1<::System::Exception*>* __9__1; // 0x20
		::System::Int32 remainingCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Void _All_b__0(::ZenFulcrum::EmbeddedBrowser::IPromise* promise, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::IPromise*, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS51_0__ALL_B__0_OFFSET))(this, promise, index);
		}

		::System::Void _All_b__1(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS51_0__ALL_B__1_OFFSET))(this, ex);
		}

		::System::Void _All_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS51_0__ALL_B__2_OFFSET))(this);
		}
	};
}
