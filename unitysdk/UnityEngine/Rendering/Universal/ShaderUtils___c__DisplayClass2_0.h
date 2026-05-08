#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERUTILS___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19BA3470)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERUTILS___C__DISPLAYCLASS2_0__GETENUMFROMPATH_B__0_OFFSET UNITYSDK_OFFSET(0x19BA3480)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderUtils___c__DisplayClass2_0_TypeDefinitionIndex = 30229;

	class ShaderUtils___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::String* path; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERUTILS___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEnumFromPath_b__0(::System::String* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERUTILS___C__DISPLAYCLASS2_0__GETENUMFROMPATH_B__0_OFFSET))(this, m);
		}
	};
}
