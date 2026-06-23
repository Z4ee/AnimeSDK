#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int SizeOf_1_TypeDefinitionIndex = 27697;

	template <typename T>
	class SizeOf_1 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_Value()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SizeOf_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
