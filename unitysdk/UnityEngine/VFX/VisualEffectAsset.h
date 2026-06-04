#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/VFX/VisualEffectObject.h"

#define UNITYENGINE_VFX_VISUALEFFECTASSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B40BF60)

namespace UnityEngine::VFX
{
	inline static constexpr unsigned int VisualEffectAsset_TypeDefinitionIndex = 6286;

	class VisualEffectAsset : public ::UnityEngine::VFX::VisualEffectObject
	{
	public:
		static ::System::Int32* StaticGet_StopEventID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VisualEffectAsset_TypeDefinitionIndex)->GetStaticField(0x410);
		}
		static ::System::Int32* StaticGet_PlayEventID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VisualEffectAsset_TypeDefinitionIndex)->GetStaticField(0x414);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VISUALEFFECTASSET__CCTOR_OFFSET))();
		}
	};
}
