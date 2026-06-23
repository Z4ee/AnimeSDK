#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Graphic; }

#define UNITYENGINE_UI_EXTENSION_UITEXTMESHHELPER_GETBASEQUADVERTCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB83340)
#define UNITYENGINE_UI_EXTENSION_UITEXTMESHHELPER_GETBASETRISTREAMCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB83200)
#define UNITYENGINE_UI_EXTENSION_UITEXTMESHHELPER_GETONESCREENPIXELINLOCAL_OFFSET UNITYSDK_OFFSET(0x1CB82C20)
#define UNITYENGINE_UI_EXTENSION_UITEXTMESHHELPER_ISFEATURETRIANGLE_OFFSET UNITYSDK_OFFSET(0x1CB833F0)
#define UNITYENGINE_UI_EXTENSION_UITEXTMESHHELPER_QUADVERTTOTRISTREAMCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB832F0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextMeshHelper_TypeDefinitionIndex = 63673;

	class UITextMeshHelper : public ::System::Object
	{
	public:
		static ::System::Single GetOneScreenPixelInLocal(::UnityEngine::RectTransform* rt, ::UnityEngine::Canvas* canvas)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTMESHHELPER_GETONESCREENPIXELINLOCAL_OFFSET))(rt, canvas);
		}

		static ::System::Int32 GetBaseTriStreamCount(::UnityEngine::UI::Graphic* graphic, ::System::Int32 totalTriStreamCount)
		{
			return ((::System::Int32(*)(::UnityEngine::UI::Graphic*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTMESHHELPER_GETBASETRISTREAMCOUNT_OFFSET))(graphic, totalTriStreamCount);
		}

		static ::System::Int32 GetBaseQuadVertCount(::UnityEngine::UI::Graphic* graphic)
		{
			return ((::System::Int32(*)(::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTMESHHELPER_GETBASEQUADVERTCOUNT_OFFSET))(graphic);
		}

		static ::System::Int32 QuadVertToTriStreamCount(::System::Int32 quadVertCount)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTMESHHELPER_QUADVERTTOTRISTREAMCOUNT_OFFSET))(quadVertCount);
		}

		static ::System::Boolean IsFeatureTriangle(::System::Int32 triIndex, ::System::Int32 baseTriStreamCount)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTMESHHELPER_ISFEATURETRIANGLE_OFFSET))(triIndex, baseTriStreamCount);
		}
	};
}
