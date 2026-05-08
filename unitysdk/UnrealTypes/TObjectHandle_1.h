#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace UnrealTypes
{
	inline static constexpr unsigned int TObjectHandle_1_TypeDefinitionIndex = 25269;

	template <typename T>
	struct TObjectHandle_1
	{
		::System::Int32 _objectIndex; // 0x0
		static ::UnrealTypes::TObjectHandle_1<T>* StaticGet_Invalid()
		{
			return (::UnrealTypes::TObjectHandle_1<T>*)Il2CppClass::FromTypeDefinitionIndex(TObjectHandle_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
