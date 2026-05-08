#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

namespace fastoct
{
	inline static constexpr unsigned int COctCloner_1_TypeDefinitionIndex = 8592;

	template <typename T>
	class COctCloner_1 : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_CloneFunc()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(COctCloner_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_CloneToFunc()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(COctCloner_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
