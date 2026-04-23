#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_YIELDINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A498E40)

namespace UnityEngine
{
	inline static constexpr unsigned int YieldInstruction_TypeDefinitionIndex = 4179;

	class YieldInstruction : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YIELDINSTRUCTION__CTOR_OFFSET))(this);
		}
	};
}
