#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/Extension/BaseTextMeshRange.h"

namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Graphic; }

#define UNITYENGINE_UI_EXTENSION_UITEXTMESHHELPER_GETBASETEXTMESHRANGEFROMTRISTREAM_OFFSET UNITYSDK_OFFSET(0x1E516C50)
#define UNITYENGINE_UI_EXTENSION_UITEXTMESHHELPER_GETONESCREENPIXELINLOCAL_OFFSET UNITYSDK_OFFSET(0x1E5165B0)
#define UNITYENGINE_UI_EXTENSION_UITEXTMESHHELPER_ISBASETEXTTRIANGLE_OFFSET UNITYSDK_OFFSET(0x1E516B90)
#define UNITYENGINE_UI_EXTENSION_UITEXTMESHHELPER_TRISTREAMTOQUADVERTCOUNT_OFFSET UNITYSDK_OFFSET(0x1E516D30)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextMeshHelper_TypeDefinitionIndex = 62679;

	class UITextMeshHelper : public ::System::Object
	{
	public:
		static ::System::Single GetOneScreenPixelInLocal(::UnityEngine::RectTransform* rt, ::UnityEngine::Canvas* canvas)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTMESHHELPER_GETONESCREENPIXELINLOCAL_OFFSET))(rt, canvas);
		}

		static ::System::Boolean IsBaseTextTriangle(::UnityEngine::UI::Graphic* graphic, ::System::Int32 triStreamIndex, ::System::Int32 totalTriStreamCount)
		{
			return ((::System::Boolean(*)(::UnityEngine::UI::Graphic*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTMESHHELPER_ISBASETEXTTRIANGLE_OFFSET))(graphic, triStreamIndex, totalTriStreamCount);
		}

		static ::UnityEngine::UI::Extension::BaseTextMeshRange GetBaseTextMeshRangeFromTriStream(::UnityEngine::UI::Graphic* graphic, ::System::Int32 totalTriStreamCount)
		{
			return ((::UnityEngine::UI::Extension::BaseTextMeshRange(*)(::UnityEngine::UI::Graphic*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTMESHHELPER_GETBASETEXTMESHRANGEFROMTRISTREAM_OFFSET))(graphic, totalTriStreamCount);
		}

		static ::System::Int32 TriStreamToQuadVertCount(::System::Int32 triStreamCount)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTMESHHELPER_TRISTREAMTOQUADVERTCOUNT_OFFSET))(triStreamCount);
		}
	};
}
