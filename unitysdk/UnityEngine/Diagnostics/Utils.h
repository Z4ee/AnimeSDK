#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Diagnostics/ForcedCrashCategory.h"

#define UNITYENGINE_DIAGNOSTICS_UTILS_FORCECRASH_OFFSET UNITYSDK_OFFSET(0x1ED1F8D0)

namespace UnityEngine::Diagnostics
{
	inline static constexpr unsigned int Utils_TypeDefinitionIndex = 4923;

	class Utils : public ::System::Object
	{
	public:
		static ::System::Void ForceCrash(::UnityEngine::Diagnostics::ForcedCrashCategory a1)
		{
			return ((::System::Void(*)(::UnityEngine::Diagnostics::ForcedCrashCategory))((::PBYTE)hIl2Cpp + UNITYENGINE_DIAGNOSTICS_UTILS_FORCECRASH_OFFSET))(a1);
		}
	};
}
