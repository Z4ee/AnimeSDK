#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering::Universal::Internal { class MatLodBaseData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPMATERIALLODSETTINGS_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AD09390)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPMATERIALLODSETTINGS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1AD08EC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPMATERIALLODSETTINGS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1AD08760)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPMATERIALLODSETTINGS_ONRENDERERCHANGEDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1AD09CB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPMATERIALLODSETTINGS_REFRESHVALUE_OFFSET UNITYSDK_OFFSET(0x1AD09940)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPMATERIALLODSETTINGS_UPDATELODINFO_OFFSET UNITYSDK_OFFSET(0x1AD09A90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPMATERIALLODSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD0AA20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPMATERIALLODSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD0A940)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapMaterialLodSettings_TypeDefinitionIndex = 30453;

	class NapMaterialLodSettings : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_filterShaders()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NapMaterialLodSettings_TypeDefinitionIndex)->GetStaticField(0x24770);
		}
		// static const ::System::Single LOD_UPDATE_THRESHOLD; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::MatLodBaseData*>* m_MatLodDatas; // 0x18
		::Il2CppArray<::UnityEngine::Renderer*>* m_RenderList; // 0x20
		::System::Boolean m_force; // 0x28
		::System::Boolean bDisableShadowLodInMobile; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPMATERIALLODSETTINGS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPMATERIALLODSETTINGS__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPMATERIALLODSETTINGS_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPMATERIALLODSETTINGS_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPMATERIALLODSETTINGS_ONDESTROY_OFFSET))(this);
		}

		::System::Void RefreshValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPMATERIALLODSETTINGS_REFRESHVALUE_OFFSET))(this);
		}

		::System::Void UpdateLodInfo(::UnityEngine::Vector3 targetPos, ::System::Single LODDistRatioSqr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPMATERIALLODSETTINGS_UPDATELODINFO_OFFSET))(this, targetPos, LODDistRatioSqr);
		}

		::System::Void OnRendererChangedMaterials(::System::Int32 newLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPMATERIALLODSETTINGS_ONRENDERERCHANGEDMATERIALS_OFFSET))(this, newLevel);
		}
	};
}
