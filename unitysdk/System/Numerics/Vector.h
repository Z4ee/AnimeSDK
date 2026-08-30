#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/Vector_1.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NUMERICS_VECTOR_CONDITIONALSELECT_OFFSET UNITYSDK_OFFSET(0x1E79ED90)
#define SYSTEM_NUMERICS_VECTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E79EE90)
#define SYSTEM_NUMERICS_VECTOR_GET_ISHARDWAREACCELERATED_OFFSET UNITYSDK_OFFSET(0x1E79EFD0)
#define SYSTEM_NUMERICS_VECTOR_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1E79EF30)

namespace System::Numerics
{
	inline static constexpr unsigned int Vector_TypeDefinitionIndex = 3862;

	class Vector : public ::System::Object
	{
	public:
		static ::System::Numerics::Vector_1<::System::Single> ConditionalSelect(::System::Numerics::Vector_1<::System::Int32> a1, ::System::Numerics::Vector_1<::System::Single> a2, ::System::Numerics::Vector_1<::System::Single> a3)
		{
			return ((::System::Numerics::Vector_1<::System::Single>(*)(::System::Numerics::Vector_1<::System::Int32>, ::System::Numerics::Vector_1<::System::Single>, ::System::Numerics::Vector_1<::System::Single>))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR_CONDITIONALSELECT_OFFSET))(a1, a2, a3);
		}

		static ::System::Numerics::Vector_1<::System::Int32> Equals(::System::Numerics::Vector_1<::System::Single> a1, ::System::Numerics::Vector_1<::System::Single> a2)
		{
			return ((::System::Numerics::Vector_1<::System::Int32>(*)(::System::Numerics::Vector_1<::System::Single>, ::System::Numerics::Vector_1<::System::Single>))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR_EQUALS_OFFSET))(a1, a2);
		}

		static ::System::Numerics::Vector_1<::System::Int32> GreaterThan(::System::Numerics::Vector_1<::System::Single> a1, ::System::Numerics::Vector_1<::System::Single> a2)
		{
			return ((::System::Numerics::Vector_1<::System::Int32>(*)(::System::Numerics::Vector_1<::System::Single>, ::System::Numerics::Vector_1<::System::Single>))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR_GREATERTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_IsHardwareAccelerated()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR_GET_ISHARDWAREACCELERATED_OFFSET))();
		}
	};
}
