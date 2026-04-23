#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ComputeShaderAsset.h"

#define UNITYENGINE_COMPUTEMESHMODIFIERASSET_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1A433300)
#define UNITYENGINE_COMPUTEMESHMODIFIERASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4332E0)

namespace UnityEngine
{
	inline static constexpr unsigned int ComputeMeshModifierAsset_TypeDefinitionIndex = 3920;

	class ComputeMeshModifierAsset : public ::UnityEngine::ComputeShaderAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEMESHMODIFIERASSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_Create(::UnityEngine::ComputeMeshModifierAsset* asset)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeMeshModifierAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEMESHMODIFIERASSET_INTERNAL_CREATE_OFFSET))(asset);
		}
	};
}
