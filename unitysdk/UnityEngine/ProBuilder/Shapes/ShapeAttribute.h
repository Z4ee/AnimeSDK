#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_PROBUILDER_SHAPES_SHAPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B13D610)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int ShapeAttribute_TypeDefinitionIndex = 40850;

	class ShapeAttribute : public ::System::Attribute
	{
	public:
		::System::String* name; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_SHAPEATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
