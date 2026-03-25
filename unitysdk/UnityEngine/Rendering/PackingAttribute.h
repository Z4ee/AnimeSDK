#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Rendering/FieldPacking.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_PACKINGATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x188E87D0)
#define UNITYENGINE_RENDERING_PACKINGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x188E8730)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int PackingAttribute_TypeDefinitionIndex = 27864;

	class PackingAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::Single>* range; // 0x10
		::Il2CppArray<::System::String*>* displayNames; // 0x18
		::UnityEngine::Rendering::FieldPacking packingScheme; // 0x20
		::System::Boolean sRGBDisplay; // 0x24
		::System::Boolean isDirection; // 0x25
		::System::Int32 offsetInSource; // 0x28
		::System::Int32 sizeInBits; // 0x2C

		::System::Void _ctor(::Il2CppArray<::System::String*>* displayNames, ::UnityEngine::Rendering::FieldPacking packingScheme, ::System::Int32 bitSize, ::System::Int32 offsetInSource, ::System::Single minValue, ::System::Single maxValue, ::System::Boolean isDirection, ::System::Boolean sRGBDisplay)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::UnityEngine::Rendering::FieldPacking, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PACKINGATTRIBUTE__CTOR_OFFSET))(this, displayNames, packingScheme, bitSize, offsetInSource, minValue, maxValue, isDirection, sRGBDisplay);
		}

		::System::Void _ctor_1(::System::String* displayName, ::UnityEngine::Rendering::FieldPacking packingScheme, ::System::Int32 bitSize, ::System::Int32 offsetInSource, ::System::Single minValue, ::System::Single maxValue, ::System::Boolean isDirection, ::System::Boolean sRGBDisplay)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::FieldPacking, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PACKINGATTRIBUTE__CTOR_1_OFFSET))(this, displayName, packingScheme, bitSize, offsetInSource, minValue, maxValue, isDirection, sRGBDisplay);
		}
	};
}
