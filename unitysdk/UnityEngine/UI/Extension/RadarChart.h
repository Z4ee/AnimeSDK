#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_RADARCHART_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E8636B0)
#define UNITYENGINE_UI_EXTENSION_RADARCHART_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E864640)
#define UNITYENGINE_UI_EXTENSION_RADARCHART_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E864550)
#define UNITYENGINE_UI_EXTENSION_RADARCHART_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1E863AF0)
#define UNITYENGINE_UI_EXTENSION_RADARCHART_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1E864380)
#define UNITYENGINE_UI_EXTENSION_RADARCHART_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1E864430)
#define UNITYENGINE_UI_EXTENSION_RADARCHART_SETRADARDATA_OFFSET UNITYSDK_OFFSET(0x1E863570)
#define UNITYENGINE_UI_EXTENSION_RADARCHART_SET_RADARDATAARRAY_OFFSET UNITYSDK_OFFSET(0x1E8634B0)
#define UNITYENGINE_UI_EXTENSION_RADARCHART__CTOR_OFFSET UNITYSDK_OFFSET(0x1E863690)
#define UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E864760)
#define UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E8647C0)
#define UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E864890)
#define UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1E864930)
#define UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1E864940)
#define UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1E864950)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int RadarChart_TypeDefinitionIndex = 19002;

	class RadarChart : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::UnityEngine::Texture* m_Texture; // 0xF8
		::Il2CppArray<::System::Single>* m_RadarDataArray; // 0x100
		::System::Boolean m_RadarDataCanBeLargerThanOne; // 0x108
		::System::Single m_AngleOffset; // 0x10C
		::System::Int32 m_UVType; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART__CTOR_OFFSET))(this);
		}

		::System::Void set_RadarDataArray(::Il2CppArray<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART_SET_RADARDATAARRAY_OFFSET))(this, value);
		}

		::System::Void SetRadarData(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART_SETRADARDATA_OFFSET))(this, index, value);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART_ONPOPULATEMESH_OFFSET))(this, vh);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::UnityEngine::Texture* __base_get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_ONPOPULATEMESH_OFFSET))(this, P0);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RADARCHART___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}
	};
}
