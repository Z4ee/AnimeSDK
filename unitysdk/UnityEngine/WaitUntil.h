#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/CustomYieldInstruction.h"

namespace System { template <typename T> class Func_1; }

#define UNITYENGINE_WAITUNTIL_GET_KEEPWAITING_OFFSET UNITYSDK_OFFSET(0x1B2E9790)
#define UNITYENGINE_WAITUNTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E97C0)

namespace UnityEngine
{
	inline static constexpr unsigned int WaitUntil_TypeDefinitionIndex = 4352;

	class WaitUntil : public ::UnityEngine::CustomYieldInstruction
	{
	public:
		::System::Func_1<::System::Boolean>* m_Predicate; // 0x10

		::System::Void _ctor(::System::Func_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITUNTIL__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_keepWaiting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITUNTIL_GET_KEEPWAITING_OFFSET))(this);
		}
	};
}
