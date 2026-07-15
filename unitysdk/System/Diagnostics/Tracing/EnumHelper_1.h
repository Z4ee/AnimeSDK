#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EnumHelper_1_TypeDefinitionIndex = 1586;

	template <typename UnderlyingType>
	class EnumHelper_1 : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_IdentityInfo()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(EnumHelper_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
