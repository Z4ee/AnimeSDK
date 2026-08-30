#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/YieldInstruction.h"

#define UNITYENGINE_WAITFORSECONDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED78AB0)

namespace UnityEngine
{
	inline static constexpr unsigned int WaitForSeconds_TypeDefinitionIndex = 4365;

	class WaitForSeconds : public ::UnityEngine::YieldInstruction
	{
	public:
		::System::Single m_Seconds; // 0x10

		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITFORSECONDS__CTOR_OFFSET))(this, a1);
		}
	};
}
