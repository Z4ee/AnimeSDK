#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NapRenderer;
namespace UnityEngine { class Renderer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYWRAPPER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x190CEA40)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYWRAPPER___C__DISPLAYCLASS5_0__GETNAPRENDERER_B__0_OFFSET UNITYSDK_OFFSET(0x190CEA50)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MonoRenderEntityWrapper___c__DisplayClass5_0_TypeDefinitionIndex = 30072;

	class MonoRenderEntityWrapper___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* r; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYWRAPPER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetNapRenderer_b__0(::NapRenderer* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::NapRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYWRAPPER___C__DISPLAYCLASS5_0__GETNAPRENDERER_B__0_OFFSET))(this, x);
		}
	};
}
