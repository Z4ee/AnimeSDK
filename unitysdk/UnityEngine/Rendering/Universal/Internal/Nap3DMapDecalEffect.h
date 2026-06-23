#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::Rendering::Universal::Internal { class Nap3DMapDecalEffect_DecalAreaData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAP3DMAPDECALEFFECT_DECALAREADATATOARRAY_OFFSET UNITYSDK_OFFSET(0x1C14B7A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAP3DMAPDECALEFFECT_SETDECALEFFECTSOFF_OFFSET UNITYSDK_OFFSET(0x1C14BE10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAP3DMAPDECALEFFECT_UPDATEDECALPARAMS_OFFSET UNITYSDK_OFFSET(0x1C14C0D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAP3DMAPDECALEFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C14C680)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAP3DMAPDECALEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C14C520)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int Nap3DMapDecalEffect_TypeDefinitionIndex = 26992;

	class Nap3DMapDecalEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_DecalAreaParams0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Nap3DMapDecalEffect_TypeDefinitionIndex)->GetStaticField(0x7440);
		}
		static ::System::Int32* StaticGet_DecalAreaParams3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Nap3DMapDecalEffect_TypeDefinitionIndex)->GetStaticField(0x7444);
		}
		static ::System::Int32* StaticGet_DecalStyleFillColors()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Nap3DMapDecalEffect_TypeDefinitionIndex)->GetStaticField(0x7448);
		}
		static ::System::Int32* StaticGet_DecalAreaParams2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Nap3DMapDecalEffect_TypeDefinitionIndex)->GetStaticField(0x744C);
		}
		static ::System::Int32* StaticGet_DecalAreaParams1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Nap3DMapDecalEffect_TypeDefinitionIndex)->GetStaticField(0x7450);
		}
		static ::System::Int32* StaticGet_DecalStyleLineColors()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Nap3DMapDecalEffect_TypeDefinitionIndex)->GetStaticField(0x7454);
		}
		static ::System::Int32* StaticGet_DecalAreaCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Nap3DMapDecalEffect_TypeDefinitionIndex)->GetStaticField(0x7458);
		}
		// static const ::System::String* DecalEffectKeyword; // 0x0
		// static const ::System::Int32 k_MaxDataCount = 0x40; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*>* DecalAreaDataArray; // 0x18
		::Il2CppArray<::UnityEngine::MeshRenderer*>* MapRenderers; // 0x20
		::Il2CppArray<::UnityEngine::Vector4>* m_DecalStyleLineColors; // 0x28
		::Il2CppArray<::UnityEngine::Vector4>* m_DecalStyleFillColors; // 0x30
		::Il2CppArray<::UnityEngine::Vector4>* m_DecalAreaParams0; // 0x38
		::Il2CppArray<::UnityEngine::Vector4>* m_DecalAreaParams1; // 0x40
		::Il2CppArray<::UnityEngine::Vector4>* m_DecalAreaParams2; // 0x48
		::Il2CppArray<::UnityEngine::Vector4>* m_DecalAreaParams3; // 0x50
		::System::Int32 m_DecalAreaCount; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAP3DMAPDECALEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAP3DMAPDECALEFFECT__CCTOR_OFFSET))();
		}

		::System::Void DecalAreaDataToArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAP3DMAPDECALEFFECT_DECALAREADATATOARRAY_OFFSET))(this);
		}

		::System::Void SetDecalEffectsOff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAP3DMAPDECALEFFECT_SETDECALEFFECTSOFF_OFFSET))(this);
		}

		::System::Void UpdateDecalParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAP3DMAPDECALEFFECT_UPDATEDECALPARAMS_OFFSET))(this);
		}
	};
}
