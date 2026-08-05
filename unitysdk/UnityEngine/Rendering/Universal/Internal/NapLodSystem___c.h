#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine::Rendering::Universal::Internal { class NapLodProxy; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB14840)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB14880)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM___C__ONSCENEEFFECTQUALITYSETTINGCHANGE_B__6_0_OFFSET UNITYSDK_OFFSET(0x1CB14890)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapLodSystem___c_TypeDefinitionIndex = 27129;

	class NapLodSystem___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::Internal::NapLodSystem___c** StaticGet___9()
		{
			return (::UnityEngine::Rendering::Universal::Internal::NapLodSystem___c**)Il2CppClass::FromTypeDefinitionIndex(NapLodSystem___c_TypeDefinitionIndex)->GetStaticField(0x23580);
		}
		static ::System::Predicate_1<::UnityEngine::Rendering::Universal::Internal::NapLodProxy*>** StaticGet___9__6_0()
		{
			return (::System::Predicate_1<::UnityEngine::Rendering::Universal::Internal::NapLodProxy*>**)Il2CppClass::FromTypeDefinitionIndex(NapLodSystem___c_TypeDefinitionIndex)->GetStaticField(0x23588);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnSceneEffectQualitySettingChange_b__6_0(::UnityEngine::Rendering::Universal::Internal::NapLodProxy* proxy)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::NapLodProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM___C__ONSCENEEFFECTQUALITYSETTINGCHANGE_B__6_0_OFFSET))(this, proxy);
		}
	};
}
