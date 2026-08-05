#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace ZenFulcrum::EmbeddedBrowser { class IPromise; }

#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS54_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB095A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS54_0__SEQUENCE_B__1_OFFSET UNITYSDK_OFFSET(0x1FB09810)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise___c__DisplayClass54_0_TypeDefinitionIndex = 33372;

	class Promise___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>* fn; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS54_0__CTOR_OFFSET))(this);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* _Sequence_b__1()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__DISPLAYCLASS54_0__SEQUENCE_B__1_OFFSET))(this);
		}
	};
}
