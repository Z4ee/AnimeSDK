#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/TimeData.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace ZenFulcrum::EmbeddedBrowser { class IPendingPromise; }

#define ZENFULCRUM_EMBEDDEDBROWSER_PREDICATEWAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B505EC0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int PredicateWait_TypeDefinitionIndex = 36596;

	class PredicateWait : public ::System::Object
	{
	public:
		::System::Func_2<::ZenFulcrum::EmbeddedBrowser::TimeData, ::System::Boolean>* predicate; // 0x10
		::ZenFulcrum::EmbeddedBrowser::IPendingPromise* pendingPromise; // 0x18
		::System::Single timeStarted; // 0x20
		::ZenFulcrum::EmbeddedBrowser::TimeData timeData; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PREDICATEWAIT__CTOR_OFFSET))(this);
		}
	};
}
