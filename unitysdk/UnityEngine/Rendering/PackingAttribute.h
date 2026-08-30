#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Rendering/FieldPacking.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_PACKINGATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD21300)
#define UNITYENGINE_RENDERING_PACKINGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD21280)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int PackingAttribute_TypeDefinitionIndex = 34908;

	class PackingAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::String*>* displayNames; // 0x10
		::Il2CppArray<::System::Single>* range; // 0x18
		::UnityEngine::Rendering::FieldPacking packingScheme; // 0x20
		::System::Int32 sizeInBits; // 0x24
		::System::Int32 offsetInSource; // 0x28
		::System::Boolean sRGBDisplay; // 0x2C
		::System::Boolean isDirection; // 0x2D

		::System::Void _ctor(::Il2CppArray<::System::String*>* a1, ::UnityEngine::Rendering::FieldPacking a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::UnityEngine::Rendering::FieldPacking, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PACKINGATTRIBUTE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void _ctor_1(::System::String* a1, ::UnityEngine::Rendering::FieldPacking a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::FieldPacking, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PACKINGATTRIBUTE__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}
