#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace UnityEngine { class ComputeMeshModifierAsset; }

#define UNITYENGINE_COMPUTEMESHMODIFIER_GET_COMPUTEMESHMODIFIERASSET_OFFSET UNITYSDK_OFFSET(0x1A4332D0)

namespace UnityEngine
{
	inline static constexpr unsigned int ComputeMeshModifier_TypeDefinitionIndex = 3919;

	class ComputeMeshModifier : public ::UnityEngine::Behaviour
	{
	public:
		::UnityEngine::ComputeMeshModifierAsset* get_computeMeshModifierAsset()
		{
			return ((::UnityEngine::ComputeMeshModifierAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEMESHMODIFIER_GET_COMPUTEMESHMODIFIERASSET_OFFSET))(this);
		}
	};
}
