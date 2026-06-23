#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class StructOpsTraitsBase; }

namespace UnrealTypes
{
	inline static constexpr unsigned int StructOpsTypeTraits_1_TypeDefinitionIndex = 27702;

	template <typename T>
	class StructOpsTypeTraits_1 : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_Traits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StructOpsTypeTraits_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
