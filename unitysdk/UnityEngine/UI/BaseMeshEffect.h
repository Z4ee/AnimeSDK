#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_BASEMESHEFFECT_GET_GRAPHIC_OFFSET UNITYSDK_OFFSET(0x1B3A7010)
#define UNITYENGINE_UI_BASEMESHEFFECT_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1B3A7900)
#define UNITYENGINE_UI_BASEMESHEFFECT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B3A7760)
#define UNITYENGINE_UI_BASEMESHEFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B3A74A0)
#define UNITYENGINE_UI_BASEMESHEFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B3A71D0)
#define UNITYENGINE_UI_BASEMESHEFFECT_REGISTERMESHMODIFIERFORGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1B3A73A0)
#define UNITYENGINE_UI_BASEMESHEFFECT_UNREGISTERMESHMODIFIERFORGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1B3A7660)
#define UNITYENGINE_UI_BASEMESHEFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3A7AC0)
#define UNITYENGINE_UI_BASEMESHEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3A7A70)
#define UNITYENGINE_UI_BASEMESHEFFECT___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B3A7BE0)
#define UNITYENGINE_UI_BASEMESHEFFECT___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B3A7C70)
#define UNITYENGINE_UI_BASEMESHEFFECT___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B3A7D00)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int BaseMeshEffect_TypeDefinitionIndex = 8481;

	class BaseMeshEffect : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>** StaticGet_s_SharedVertsList1()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UIVertex>**)Il2CppClass::FromTypeDefinitionIndex(BaseMeshEffect_TypeDefinitionIndex)->GetStaticField(0x7590);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>** StaticGet_s_SharedVertsList2()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UIVertex>**)Il2CppClass::FromTypeDefinitionIndex(BaseMeshEffect_TypeDefinitionIndex)->GetStaticField(0x7598);
		}
		static ::UnityEngine::UI::VertexHelper** StaticGet_s_VertexHelper()
		{
			return (::UnityEngine::UI::VertexHelper**)Il2CppClass::FromTypeDefinitionIndex(BaseMeshEffect_TypeDefinitionIndex)->GetStaticField(0x75A0);
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
