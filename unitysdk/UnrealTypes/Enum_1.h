#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Enum; }

namespace UnrealTypes
{
	inline static constexpr unsigned int Enum_1_TypeDefinitionIndex = 25218;

	template <typename T>
	class Enum_1 : public ::System::Object
	{
	public:
		static ::UnrealTypes::Enum** StaticGet_StaticEnum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(Enum_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
