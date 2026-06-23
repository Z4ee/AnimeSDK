#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_LIGHTPROBEGROUP_GET_PROBEPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1D66BC50)
#define UNITYENGINE_LIGHTPROBEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D66BC60)

namespace UnityEngine
{
	inline static constexpr unsigned int LightProbeGroup_TypeDefinitionIndex = 5256;

	class LightProbeGroup : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBEGROUP__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_probePositions()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBEGROUP_GET_PROBEPOSITIONS_OFFSET))(this);
		}
	};
}
