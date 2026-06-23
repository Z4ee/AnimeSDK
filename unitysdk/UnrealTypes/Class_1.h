#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Class; }

namespace UnrealTypes
{
	inline static constexpr unsigned int Class_1_TypeDefinitionIndex = 27711;

	template <typename T>
	class Class_1 : public ::System::Object
	{
	public:
		static ::UnrealTypes::Class** StaticGet_StaticClass()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(Class_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
