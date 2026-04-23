#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_SELECTIONPICKERRENDERERSTANDARD_RENDERLOOKUPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A2C6C20)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_SELECTIONPICKERRENDERERSTANDARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2C2DA0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int SelectionPickerRenderer_SelectionPickerRendererStandard_TypeDefinitionIndex = 39978;

	class SelectionPickerRenderer_SelectionPickerRendererStandard : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_SELECTIONPICKERRENDERERSTANDARD__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture2D* RenderLookupTexture(::UnityEngine::Camera* camera, ::UnityEngine::Shader* shader, ::System::String* tag, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Shader*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_SELECTIONPICKERRENDERERSTANDARD_RENDERLOOKUPTEXTURE_OFFSET))(this, camera, shader, tag, width, height);
		}
	};
}
