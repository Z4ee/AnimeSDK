#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_SHADOW_APPLYSHADOWZEROALLOC_OFFSET UNITYSDK_OFFSET(0x1E6C95A0)
#define UNITYENGINE_UI_SHADOW_APPLYSHADOW_OFFSET UNITYSDK_OFFSET(0x1E6C9860)
#define UNITYENGINE_UI_SHADOW_ENABLEUIVERTEXCOLORCALC_OFFSET UNITYSDK_OFFSET(0x1E6C8DD0)
#define UNITYENGINE_UI_SHADOW_GET_EFFECTCOLOR_OFFSET UNITYSDK_OFFSET(0x1E6C9050)
#define UNITYENGINE_UI_SHADOW_GET_EFFECTDISTANCE_OFFSET UNITYSDK_OFFSET(0x1E6C9200)
#define UNITYENGINE_UI_SHADOW_GET_USEGRAPHICALPHA_OFFSET UNITYSDK_OFFSET(0x1E6C93F0)
#define UNITYENGINE_UI_SHADOW_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1E6C9920)
#define UNITYENGINE_UI_SHADOW_SET_EFFECTCOLOR_OFFSET UNITYSDK_OFFSET(0x1E6C9060)
#define UNITYENGINE_UI_SHADOW_SET_EFFECTDISTANCE_OFFSET UNITYSDK_OFFSET(0x1E6C9210)
#define UNITYENGINE_UI_SHADOW_SET_USEGRAPHICALPHA_OFFSET UNITYSDK_OFFSET(0x1E6C9400)
#define UNITYENGINE_UI_SHADOW_START_OFFSET UNITYSDK_OFFSET(0x1E6C8D60)
#define UNITYENGINE_UI_SHADOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C8CB0)
#define UNITYENGINE_UI_SHADOW___BASE_START_OFFSET UNITYSDK_OFFSET(0x1E6C9CB0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Shadow_TypeDefinitionIndex = 19339;

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

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_START_OFFSET))(this);
		}

		::System::Void EnableUIVertexColorCalc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_ENABLEUIVERTEXCOLORCALC_OFFSET))(this);
		}

		::UnityEngine::Color get_effectColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_GET_EFFECTCOLOR_OFFSET))(this);
		}

		::System::Void set_effectColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_SET_EFFECTCOLOR_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_effectDistance()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_GET_EFFECTDISTANCE_OFFSET))(this);
		}

		::System::Void set_effectDistance(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_SET_EFFECTDISTANCE_OFFSET))(this, value);
		}

		::System::Boolean get_useGraphicAlpha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_GET_USEGRAPHICALPHA_OFFSET))(this);
		}

		::System::Void set_useGraphicAlpha(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_SET_USEGRAPHICALPHA_OFFSET))(this, value);
		}

		::System::Void ApplyShadowZeroAlloc(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::UnityEngine::Color32 color, ::System::Int32 start, ::System::Int32 end, ::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::UnityEngine::Color32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_APPLYSHADOWZEROALLOC_OFFSET))(this, verts, color, start, end, x, y);
		}

		::System::Void ApplyShadow(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::UnityEngine::Color32 color, ::System::Int32 start, ::System::Int32 end, ::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::UnityEngine::Color32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_APPLYSHADOW_OFFSET))(this, verts, color, start, end, x, y);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW___BASE_START_OFFSET))(this);
		}
	};
}
