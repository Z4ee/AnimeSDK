#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"

namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_UIWAVECLIP_CANVASADDITIONALCHANNEL_OFFSET UNITYSDK_OFFSET(0x150AE1A0)
#define UNITYENGINE_UI_UIWAVECLIP_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x150AE540)
#define UNITYENGINE_UI_UIWAVECLIP_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x150AE3E0)
#define UNITYENGINE_UI_UIWAVECLIP_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x150AE4A0)
#define UNITYENGINE_UI_UIWAVECLIP_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x150AE2A0)
#define UNITYENGINE_UI_UIWAVECLIP_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x150AE340)
#define UNITYENGINE_UI_UIWAVECLIP_START_OFFSET UNITYSDK_OFFSET(0x150AE230)
#define UNITYENGINE_UI_UIWAVECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x150AE100)
#define UNITYENGINE_UI_UIWAVECLIP___BASE_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x150AE830)
#define UNITYENGINE_UI_UIWAVECLIP___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x150AE8C0)
#define UNITYENGINE_UI_UIWAVECLIP___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x150AE950)
#define UNITYENGINE_UI_UIWAVECLIP___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x150AE9E0)
#define UNITYENGINE_UI_UIWAVECLIP___BASE_START_OFFSET UNITYSDK_OFFSET(0x150AEA70)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int UIWaveClip_TypeDefinitionIndex = 68639;

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
