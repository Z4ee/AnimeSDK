#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class MaskableGraphic; }

#define UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL_CLEANMATERIALCACHE_OFFSET UNITYSDK_OFFSET(0x1AA2FEA0)
#define UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL_GETMODIFIEDMATERIALPOST_OFFSET UNITYSDK_OFFSET(0x1AA30350)
#define UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1AA30100)
#define UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1AA2FB70)
#define UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x1AA30310)
#define UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AA30090)
#define UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1AA2FE50)
#define UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1AA2FC60)
#define UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL_SET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1AA2FB80)
#define UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA30470)
#define UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA30420)
#define UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AA304B0)
#define UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1AA30540)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIMouseToMaterial_TypeDefinitionIndex = 67524;

	class UIMouseToMaterial : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::System::Int32* StaticGet_MousePositionPropId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMouseToMaterial_TypeDefinitionIndex)->GetStaticField(0x10300);
		}
		::UnityEngine::Vector2 m_MousePosition; // 0x18
		::UnityEngine::UI::MaskableGraphic* m_MaskableGraphic; // 0x20
		::UnityEngine::Material* m_ModifiedMaterial; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL__CCTOR_OFFSET))();
		}

		::UnityEngine::Vector2 get_MousePosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL_GET_MOUSEPOSITION_OFFSET))(this);
		}

		::System::Void set_MousePosition(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL_SET_MOUSEPOSITION_OFFSET))(this, value);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL_SETDIRTY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL_ONENABLE_OFFSET))(this);
		}

		::System::Void CleanMaterialCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL_CLEANMATERIALCACHE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL_MODIFIERSORTORDER_OFFSET))(this);
		}

		::UnityEngine::Material* GetModifiedMaterialPost(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL_GETMODIFIEDMATERIALPOST_OFFSET))(this, baseMaterial);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIMOUSETOMATERIAL___BASE_ONENABLE_OFFSET))(this);
		}
	};
}
