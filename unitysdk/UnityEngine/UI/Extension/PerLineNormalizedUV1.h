#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/UI/Extension/UV1HeightMode.h"
#include "unitysdk/UnityEngine/UI/Extension/UV1WidthMode.h"

namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_PERLINENORMALIZEDUV1_FLUSHLINE_OFFSET UNITYSDK_OFFSET(0x1F1D1680)
#define UNITYENGINE_UI_EXTENSION_PERLINENORMALIZEDUV1_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1F1D1110)
#define UNITYENGINE_UI_EXTENSION_PERLINENORMALIZEDUV1_START_OFFSET UNITYSDK_OFFSET(0x1F1D0F10)
#define UNITYENGINE_UI_EXTENSION_PERLINENORMALIZEDUV1__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1D1960)
#define UNITYENGINE_UI_EXTENSION_PERLINENORMALIZEDUV1___BASE_START_OFFSET UNITYSDK_OFFSET(0x1F1D1A00)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int PerLineNormalizedUV1_TypeDefinitionIndex = 48010;

	class PerLineNormalizedUV1 : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		::UnityEngine::UI::Extension::UV1WidthMode widthMode; // 0x20
		::UnityEngine::UI::Extension::UV1HeightMode heightMode; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PERLINENORMALIZEDUV1__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PERLINENORMALIZEDUV1_START_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PERLINENORMALIZEDUV1_MODIFYMESH_OFFSET))(this, vh);
		}

		static ::System::Void FlushLine(::UnityEngine::UI::VertexHelper* vh, ::System::Int32 startVert, ::System::Int32 endVert, ::System::Single lineXMin, ::System::Single lineXMax, ::System::Single lineYMin, ::System::Single lineYMax, ::System::Single maxLineWidth, ::System::Single globalYMin, ::System::Single globalInvDy, ::System::Boolean useMaxWidth, ::System::Boolean useAllHeight)
		{
			return ((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PERLINENORMALIZEDUV1_FLUSHLINE_OFFSET))(vh, startVert, endVert, lineXMin, lineXMax, lineYMin, lineYMax, maxLineWidth, globalYMin, globalInvDy, useMaxWidth, useAllHeight);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_PERLINENORMALIZEDUV1___BASE_START_OFFSET))(this);
		}
	};
}
