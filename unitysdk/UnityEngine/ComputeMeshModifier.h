#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace UnityEngine { class ComputeMeshModifierAsset; }

#define UNITYENGINE_COMPUTEMESHMODIFIER_GET_COMPUTEMESHMODIFIERASSET_OFFSET UNITYSDK_OFFSET(0x1C168E70)

namespace UnityEngine
{
	inline static constexpr unsigned int ComputeMeshModifier_TypeDefinitionIndex = 4098;

	class ComputeMeshModifier : public ::UnityEngine::Behaviour
	{
	public:
		::UnityEngine::ComputeMeshModifierAsset* get_computeMeshModifierAsset()
		{
			return ((::UnityEngine::ComputeMeshModifierAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEMESHMODIFIER_GET_COMPUTEMESHMODIFIERASSET_OFFSET))(this);
		}
	};
}
