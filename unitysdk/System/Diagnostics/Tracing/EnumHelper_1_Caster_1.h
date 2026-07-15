#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Diagnostics::Tracing { template <typename T1, typename T2> class EnumHelper_1_Transformer_1; }

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EnumHelper_1_Caster_1_TypeDefinitionIndex = 1588;

	template <typename UnderlyingType, typename ValueType>
	class EnumHelper_1_Caster_1 : public ::System::Object
	{
	public:
		static ::System::Diagnostics::Tracing::EnumHelper_1_Transformer_1<UnderlyingType, ValueType>** StaticGet_Instance()
		{
			return (::System::Diagnostics::Tracing::EnumHelper_1_Transformer_1<UnderlyingType, ValueType>**)Il2CppClass::FromTypeDefinitionIndex(EnumHelper_1_Caster_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
