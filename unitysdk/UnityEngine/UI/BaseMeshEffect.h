#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_BASEMESHEFFECT_GET_GRAPHIC_OFFSET UNITYSDK_OFFSET(0x1EAE2300)
#define UNITYENGINE_UI_BASEMESHEFFECT_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1EAE2BF0)
#define UNITYENGINE_UI_BASEMESHEFFECT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1EAE2A50)
#define UNITYENGINE_UI_BASEMESHEFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EAE2790)
#define UNITYENGINE_UI_BASEMESHEFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EAE24C0)
#define UNITYENGINE_UI_BASEMESHEFFECT_REGISTERMESHMODIFIERFORGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1EAE2690)
#define UNITYENGINE_UI_BASEMESHEFFECT_UNREGISTERMESHMODIFIERFORGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1EAE2950)
#define UNITYENGINE_UI_BASEMESHEFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE2DB0)
#define UNITYENGINE_UI_BASEMESHEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE2D60)
#define UNITYENGINE_UI_BASEMESHEFFECT___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1EAE2ED0)
#define UNITYENGINE_UI_BASEMESHEFFECT___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EAE2F60)
#define UNITYENGINE_UI_BASEMESHEFFECT___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EAE2FF0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int BaseMeshEffect_TypeDefinitionIndex = 19333;

	class BaseMeshEffect : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>** StaticGet_s_SharedVertsList2()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UIVertex>**)Il2CppClass::FromTypeDefinitionIndex(BaseMeshEffect_TypeDefinitionIndex)->GetStaticField(0x8810);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>** StaticGet_s_SharedVertsList1()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UIVertex>**)Il2CppClass::FromTypeDefinitionIndex(BaseMeshEffect_TypeDefinitionIndex)->GetStaticField(0x8818);
		}
		static ::UnityEngine::UI::VertexHelper** StaticGet_s_VertexHelper()
		{
			return (::UnityEngine::UI::VertexHelper**)Il2CppClass::FromTypeDefinitionIndex(BaseMeshEffect_TypeDefinitionIndex)->GetStaticField(0x8820);
		}
		::UnityEngine::UI::Graphic* m_Graphic; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEMESHEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEMESHEFFECT__CCTOR_OFFSET))();
		}

		::UnityEngine::UI::Graphic* get_graphic()
		{
			return ((::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEMESHEFFECT_GET_GRAPHIC_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEMESHEFFECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEMESHEFFECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEMESHEFFECT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEMESHEFFECT_MODIFYMESH_OFFSET))(this, mesh);
		}

		::System::Void RegisterMeshModifierForGraphic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEMESHEFFECT_REGISTERMESHMODIFIERFORGRAPHIC_OFFSET))(this);
		}

		::System::Void UnregisterMeshModifierForGraphic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEMESHEFFECT_UNREGISTERMESHMODIFIERFORGRAPHIC_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEMESHEFFECT___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEMESHEFFECT___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEMESHEFFECT___BASE_ONENABLE_OFFSET))(this);
		}
	};
}
