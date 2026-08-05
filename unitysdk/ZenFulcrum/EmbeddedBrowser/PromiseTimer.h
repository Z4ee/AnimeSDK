#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/TimeData.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace ZenFulcrum::EmbeddedBrowser { class IPromise; }
namespace ZenFulcrum::EmbeddedBrowser { class PredicateWait; }

#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISETIMER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F92AAF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISETIMER_WAITFOR_OFFSET UNITYSDK_OFFSET(0x1F92A920)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISETIMER_WAITUNTIL_OFFSET UNITYSDK_OFFSET(0x1F92A9C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISETIMER_WAITWHILE_OFFSET UNITYSDK_OFFSET(0x1F92AA60)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISETIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F92AD70)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int PromiseTimer_TypeDefinitionIndex = 33352;

	class PromiseTimer : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::PredicateWait*>* waiting; // 0x10
		::System::Single curTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISETIMER__CTOR_OFFSET))(this);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* WaitFor(::System::Single seconds)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISETIMER_WAITFOR_OFFSET))(this, seconds);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* WaitWhile(::System::Func_2<::ZenFulcrum::EmbeddedBrowser::TimeData, ::System::Boolean>* predicate)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Func_2<::ZenFulcrum::EmbeddedBrowser::TimeData, ::System::Boolean>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISETIMER_WAITWHILE_OFFSET))(this, predicate);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* WaitUntil(::System::Func_2<::ZenFulcrum::EmbeddedBrowser::TimeData, ::System::Boolean>* predicate)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Func_2<::ZenFulcrum::EmbeddedBrowser::TimeData, ::System::Boolean>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISETIMER_WAITUNTIL_OFFSET))(this, predicate);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISETIMER_UPDATE_OFFSET))(this, deltaTime);
		}
	};
}
