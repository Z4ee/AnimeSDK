#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_SHADOW_APPLYSHADOWZEROALLOC_1_OFFSET UNITYSDK_OFFSET(0x15DBB7E0)
#define UNITYENGINE_UI_SHADOW_APPLYSHADOWZEROALLOC_OFFSET UNITYSDK_OFFSET(0x15DDBB50)
#define UNITYENGINE_UI_SHADOW_APPLYSHADOW_1_OFFSET UNITYSDK_OFFSET(0x15DDBE80)
#define UNITYENGINE_UI_SHADOW_APPLYSHADOW_OFFSET UNITYSDK_OFFSET(0x15DDBE70)
#define UNITYENGINE_UI_SHADOW_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x15DDB780)
#define UNITYENGINE_UI_SHADOW_GET_EFFECTCOLOR_OFFSET UNITYSDK_OFFSET(0x15DDB8D0)
#define UNITYENGINE_UI_SHADOW_GET_EFFECTDISTANCE_OFFSET UNITYSDK_OFFSET(0x15DDB8E0)
#define UNITYENGINE_UI_SHADOW_GET_USEGRAPHICALPHA_OFFSET UNITYSDK_OFFSET(0x15DDBA30)
#define UNITYENGINE_UI_SHADOW_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x15DDBE90)
#define UNITYENGINE_UI_SHADOW_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x15DDB790)
#define UNITYENGINE_UI_SHADOW_SET_EFFECTCOLOR_OFFSET UNITYSDK_OFFSET(0x15DDB7B0)
#define UNITYENGINE_UI_SHADOW_SET_EFFECTDISTANCE_OFFSET UNITYSDK_OFFSET(0x15DDB8F0)
#define UNITYENGINE_UI_SHADOW_SET_USEGRAPHICALPHA_OFFSET UNITYSDK_OFFSET(0x15DDBA40)
#define UNITYENGINE_UI_SHADOW__CTOR_OFFSET UNITYSDK_OFFSET(0x15DBB4D0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Shadow_TypeDefinitionIndex = 6054;

	class Shadow : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		// static const ::System::Single kMaxEffectDistance; // 0x0
		::UnityEngine::Color m_EffectColor; // 0x20
		::UnityEngine::Vector2 m_EffectDistance; // 0x30
		::System::Boolean m_UseGraphicAlpha; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color get_color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_GET_COLOR_OFFSET))(this);
		}

		::System::Void set_color(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_SET_COLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_effectColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_GET_EFFECTCOLOR_OFFSET))(this);
		}

		::System::Void set_effectColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_SET_EFFECTCOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_effectDistance()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_GET_EFFECTDISTANCE_OFFSET))(this);
		}

		::System::Void set_effectDistance(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_SET_EFFECTDISTANCE_OFFSET))(this, a1);
		}

		::System::Boolean get_useGraphicAlpha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_GET_USEGRAPHICALPHA_OFFSET))(this);
		}

		::System::Void set_useGraphicAlpha(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_SET_USEGRAPHICALPHA_OFFSET))(this, a1);
		}

		::System::Void ApplyShadowZeroAlloc(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* a1, ::UnityEngine::Color32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::UnityEngine::Color32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_APPLYSHADOWZEROALLOC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void ApplyShadowZeroAlloc_1(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1, ::UnityEngine::Color32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Color32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_APPLYSHADOWZEROALLOC_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void ApplyShadow(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* a1, ::UnityEngine::Color32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::UnityEngine::Color32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_APPLYSHADOW_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void ApplyShadow_1(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1, ::UnityEngine::Color32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Color32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_APPLYSHADOW_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_MODIFYMESH_OFFSET))(this, a1);
		}
	};
}
