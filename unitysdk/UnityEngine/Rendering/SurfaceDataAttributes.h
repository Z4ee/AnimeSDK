#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Rendering/FieldPrecision.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_SURFACEDATAATTRIBUTES__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EC02C50)
#define UNITYENGINE_RENDERING_SURFACEDATAATTRIBUTES__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC02BF0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SurfaceDataAttributes_TypeDefinitionIndex = 34906;

	class SurfaceDataAttributes : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::String*>* displayNames; // 0x10
		::System::Boolean sRGBDisplay; // 0x18
		::System::Boolean isDirection; // 0x19
		::UnityEngine::Rendering::FieldPrecision precision; // 0x1C

		::System::Void _ctor(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::UnityEngine::Rendering::FieldPrecision a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::UnityEngine::Rendering::FieldPrecision))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SURFACEDATAATTRIBUTES__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::String*>* a1, ::System::Boolean a2, ::System::Boolean a3, ::UnityEngine::Rendering::FieldPrecision a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::System::Boolean, ::UnityEngine::Rendering::FieldPrecision))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SURFACEDATAATTRIBUTES__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
