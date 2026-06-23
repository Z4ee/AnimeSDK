#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Rendering/FieldPrecision.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_SURFACEDATAATTRIBUTES__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B4AFE90)
#define UNITYENGINE_RENDERING_SURFACEDATAATTRIBUTES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AFE10)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SurfaceDataAttributes_TypeDefinitionIndex = 18310;

	class SurfaceDataAttributes : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::String*>* displayNames; // 0x10
		::UnityEngine::Rendering::FieldPrecision precision; // 0x18
		::System::Boolean isDirection; // 0x1C
		::System::Boolean sRGBDisplay; // 0x1D

		::System::Void _ctor(::System::String* displayName, ::System::Boolean isDirection, ::System::Boolean sRGBDisplay, ::UnityEngine::Rendering::FieldPrecision precision)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::UnityEngine::Rendering::FieldPrecision))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SURFACEDATAATTRIBUTES__CTOR_OFFSET))(this, displayName, isDirection, sRGBDisplay, precision);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::String*>* displayNames, ::System::Boolean isDirection, ::System::Boolean sRGBDisplay, ::UnityEngine::Rendering::FieldPrecision precision)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::System::Boolean, ::UnityEngine::Rendering::FieldPrecision))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SURFACEDATAATTRIBUTES__CTOR_1_OFFSET))(this, displayNames, isDirection, sRGBDisplay, precision);
		}
	};
}
