#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_HUMANTRAIT_GETBONEINDEXFROMMONO_OFFSET UNITYSDK_OFFSET(0x189D8FA0)

namespace UnityEngine
{
	inline static constexpr unsigned int HumanTrait_TypeDefinitionIndex = 5048;

	class HumanTrait : public ::System::Object
	{
	public:
		static ::System::Int32 GetBoneIndexFromMono(::System::Int32 humanId)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_HUMANTRAIT_GETBONEINDEXFROMMONO_OFFSET))(humanId);
		}
	};
}
