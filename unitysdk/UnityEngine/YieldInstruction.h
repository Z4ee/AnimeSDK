#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_YIELDINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF5DC30)

namespace UnityEngine
{
	inline static constexpr unsigned int YieldInstruction_TypeDefinitionIndex = 5377;

	class YieldInstruction : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YIELDINSTRUCTION__CTOR_OFFSET))(this);
		}
	};
}
