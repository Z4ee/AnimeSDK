#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/NumberBuffer.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NUMBER_DECIMALTONUMBER_OFFSET UNITYSDK_OFFSET(0x1EE154C0)
#define SYSTEM_NUMBER_NUMBERBUFFERTODECIMAL_OFFSET UNITYSDK_OFFSET(0x1EE18100)
#define SYSTEM_NUMBER_ROUNDNUMBER_OFFSET UNITYSDK_OFFSET(0x1EE161C0)
#define SYSTEM_NUMBER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE19770)

namespace System
{
	inline static constexpr unsigned int Number_TypeDefinitionIndex = 4965;

	class Number : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int16>** StaticGet_s_rgexp64Power10By16()
		{
			return (::Il2CppArray<::System::Int16>**)Il2CppClass::FromTypeDefinitionIndex(Number_TypeDefinitionIndex)->GetStaticField(0x1A0);
		}
		static ::Il2CppArray<::System::UInt64>** StaticGet_s_rgval64Power10()
		{
			return (::Il2CppArray<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(Number_TypeDefinitionIndex)->GetStaticField(0x1A8);
		}
		static ::Il2CppArray<::System::SByte>** StaticGet_s_rgexp64Power10()
		{
			return (::Il2CppArray<::System::SByte>**)Il2CppClass::FromTypeDefinitionIndex(Number_TypeDefinitionIndex)->GetStaticField(0x1B0);
		}
		static ::Il2CppArray<::System::UInt64>** StaticGet_s_rgval64Power10By16()
		{
			return (::Il2CppArray<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(Number_TypeDefinitionIndex)->GetStaticField(0x1B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMBER__CCTOR_OFFSET))();
		}

		static ::System::Void RoundNumber(::System::NumberBuffer& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::NumberBuffer&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_ROUNDNUMBER_OFFSET))(a1, a2);
		}

		static ::System::Boolean NumberBufferToDecimal(::System::NumberBuffer& a1, ::System::Decimal& a2)
		{
			return ((::System::Boolean(*)(::System::NumberBuffer&, ::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_NUMBERBUFFERTODECIMAL_OFFSET))(a1, a2);
		}

		static ::System::Void DecimalToNumber(::System::Decimal a1, ::System::NumberBuffer& a2)
		{
			return ((::System::Void(*)(::System::Decimal, ::System::NumberBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_DECIMALTONUMBER_OFFSET))(a1, a2);
		}
	};
}
