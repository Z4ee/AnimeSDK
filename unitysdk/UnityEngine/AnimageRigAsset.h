#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimageAssetBase.h"

#define UNITYENGINE_ANIMAGERIGASSET_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1FC6C660)
#define UNITYENGINE_ANIMAGERIGASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6C600)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimageRigAsset_TypeDefinitionIndex = 39947;

	class AnimageRigAsset : public ::UnityEngine::AnimageAssetBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGERIGASSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_Create(::UnityEngine::AnimageRigAsset* notSelf)
		{
			return ((::System::Void(*)(::UnityEngine::AnimageRigAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGERIGASSET_INTERNAL_CREATE_OFFSET))(notSelf);
		}
	};
}
