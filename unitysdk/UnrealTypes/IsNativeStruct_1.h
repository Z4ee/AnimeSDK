#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int IsNativeStruct_1_TypeDefinitionIndex = 25209;

	template <typename T>
	class IsNativeStruct_1 : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_Value()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(IsNativeStruct_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
