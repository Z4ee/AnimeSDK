#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/VFX/VisualEffectObject.h"

#define UNITYENGINE_VFX_VISUALEFFECTASSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C558DF0)
#define UNITYENGINE_VFX_VISUALEFFECTASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C558D50)

namespace UnityEngine::VFX
{
	inline static constexpr unsigned int VisualEffectAsset_TypeDefinitionIndex = 84238;

	class VisualEffectAsset : public ::UnityEngine::VFX::VisualEffectObject
	{
	public:
		static ::System::Int32* StaticGet_PlayEventID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VisualEffectAsset_TypeDefinitionIndex)->GetStaticField(0x11D60);
		}
		static ::System::Int32* StaticGet_StopEventID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VisualEffectAsset_TypeDefinitionIndex)->GetStaticField(0x11D64);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VISUALEFFECTASSET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VISUALEFFECTASSET__CCTOR_OFFSET))();
		}
	};
}
