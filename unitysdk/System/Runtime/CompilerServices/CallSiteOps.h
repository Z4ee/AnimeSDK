#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::CompilerServices { class CallSite; }
namespace System::Runtime::CompilerServices { class CallSiteBinder; }
namespace System::Runtime::CompilerServices { template <typename T> class CallSite_1; }
namespace System::Runtime::CompilerServices { template <typename T> class RuleCache_1; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_CLEARMATCH_OFFSET UNITYSDK_OFFSET(0x1C009CB0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_GETMATCH_OFFSET UNITYSDK_OFFSET(0x1C009C90)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_SETNOTMATCHED_OFFSET UNITYSDK_OFFSET(0x1C009C70)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CallSiteOps_TypeDefinitionIndex = 4957;

	class CallSiteOps : public ::System::Object
	{
	public:
		static ::System::Boolean SetNotMatched(::System::Runtime::CompilerServices::CallSite* site)
		{
			return ((::System::Boolean(*)(::System::Runtime::CompilerServices::CallSite*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_SETNOTMATCHED_OFFSET))(site);
		}

		static ::System::Boolean GetMatch(::System::Runtime::CompilerServices::CallSite* site)
		{
			return ((::System::Boolean(*)(::System::Runtime::CompilerServices::CallSite*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_GETMATCH_OFFSET))(site);
		}

		static ::System::Void ClearMatch(::System::Runtime::CompilerServices::CallSite* site)
		{
			return ((::System::Void(*)(::System::Runtime::CompilerServices::CallSite*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_CLEARMATCH_OFFSET))(site);
		}
	};
}
