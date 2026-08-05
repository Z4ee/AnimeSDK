#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"

namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_UIWAVECLIP_CANVASADDITIONALCHANNEL_OFFSET UNITYSDK_OFFSET(0x1BC4A580)
#define UNITYENGINE_UI_UIWAVECLIP_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1BC4A920)
#define UNITYENGINE_UI_UIWAVECLIP_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x1BC4A7C0)
#define UNITYENGINE_UI_UIWAVECLIP_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1BC4A880)
#define UNITYENGINE_UI_UIWAVECLIP_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1BC4A680)
#define UNITYENGINE_UI_UIWAVECLIP_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1BC4A720)
#define UNITYENGINE_UI_UIWAVECLIP_START_OFFSET UNITYSDK_OFFSET(0x1BC4A610)
#define UNITYENGINE_UI_UIWAVECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC4A4E0)
#define UNITYENGINE_UI_UIWAVECLIP___BASE_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x1BC4ACD0)
#define UNITYENGINE_UI_UIWAVECLIP___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1BC4AD60)
#define UNITYENGINE_UI_UIWAVECLIP___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1BC4ADF0)
#define UNITYENGINE_UI_UIWAVECLIP___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1BC4AE80)
#define UNITYENGINE_UI_UIWAVECLIP___BASE_START_OFFSET UNITYSDK_OFFSET(0x1BC4AF10)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int UIWaveClip_TypeDefinitionIndex = 58056;

	class UIWaveClip : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP__CTOR_OFFSET))(this);
		}

		::System::Void CanvasAdditionalChannel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP_CANVASADDITIONALCHANNEL_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP_START_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Void __base_OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP___BASE_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UIWAVECLIP___BASE_START_OFFSET))(this);
		}
	};
}
