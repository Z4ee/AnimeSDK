#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_BASEMESHEFFECT_GET_ADDBASEMESH_OFFSET UNITYSDK_OFFSET(0x1B3829D0)
#define UNITYENGINE_UI_BASEMESHEFFECT_GET_GRAPHIC_OFFSET UNITYSDK_OFFSET(0x1B382650)
#define UNITYENGINE_UI_BASEMESHEFFECT_GET_REQUIREBASEMESH_OFFSET UNITYSDK_OFFSET(0x1B3829C0)
#define UNITYENGINE_UI_BASEMESHEFFECT_MODIFYMESH_1_OFFSET UNITYSDK_OFFSET(0x1B3829B0)
#define UNITYENGINE_UI_BASEMESHEFFECT_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1B3828E0)
#define UNITYENGINE_UI_BASEMESHEFFECT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B382830)
#define UNITYENGINE_UI_BASEMESHEFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B382780)
#define UNITYENGINE_UI_BASEMESHEFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B3826D0)
#define UNITYENGINE_UI_BASEMESHEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3829E0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int BaseMeshEffect_TypeDefinitionIndex = 6044;

	class BaseMeshEffect : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::UI::Graphic* m_Graphic; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEMESHEFFECT__CTOR_OFFSET))(this);
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

		::System::Void ModifyMesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEMESHEFFECT_MODIFYMESH_OFFSET))(this, a1);
		}

		::System::Void ModifyMesh_1(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEMESHEFFECT_MODIFYMESH_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_RequireBaseMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEMESHEFFECT_GET_REQUIREBASEMESH_OFFSET))(this);
		}

		::System::Boolean get_AddBaseMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEMESHEFFECT_GET_ADDBASEMESH_OFFSET))(this);
		}
	};
}
