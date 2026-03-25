#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/NumberBuffer.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NUMBER_DECIMALTONUMBER_OFFSET UNITYSDK_OFFSET(0x18518080)
#define SYSTEM_NUMBER_NUMBERBUFFERTODECIMAL_OFFSET UNITYSDK_OFFSET(0x1851AC60)
#define SYSTEM_NUMBER_ROUNDNUMBER_OFFSET UNITYSDK_OFFSET(0x18518D60)
#define SYSTEM_NUMBER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1851C2D0)

namespace System
{
	inline static constexpr unsigned int Number_TypeDefinitionIndex = 4966;

	class Number : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::UInt64>** StaticGet_s_rgval64Power10()
		{
			return (::Il2CppArray<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(Number_TypeDefinitionIndex)->GetStaticField(0x220);
		}
		static ::Il2CppArray<::System::Int16>** StaticGet_s_rgexp64Power10By16()
		{
			return (::Il2CppArray<::System::Int16>**)Il2CppClass::FromTypeDefinitionIndex(Number_TypeDefinitionIndex)->GetStaticField(0x228);
		}
		static ::Il2CppArray<::System::UInt64>** StaticGet_s_rgval64Power10By16()
		{
			return (::Il2CppArray<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(Number_TypeDefinitionIndex)->GetStaticField(0x230);
		}
		static ::Il2CppArray<::System::SByte>** StaticGet_s_rgexp64Power10()
		{
			return (::Il2CppArray<::System::SByte>**)Il2CppClass::FromTypeDefinitionIndex(Number_TypeDefinitionIndex)->GetStaticField(0x238);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMBER__CCTOR_OFFSET))();
		}

		static ::System::Void RoundNumber(::System::NumberBuffer& number, ::System::Int32 pos)
		{
			return ((::System::Void(*)(::System::NumberBuffer&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_ROUNDNUMBER_OFFSET))(number, pos);
		}

		static ::System::Boolean NumberBufferToDecimal(::System::NumberBuffer& number, ::System::Decimal& value)
		{
			return ((::System::Boolean(*)(::System::NumberBuffer&, ::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_NUMBERBUFFERTODECIMAL_OFFSET))(number, value);
		}

		static ::System::Void DecimalToNumber(::System::Decimal value, ::System::NumberBuffer& number)
		{
			return ((::System::Void(*)(::System::Decimal, ::System::NumberBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_DECIMALTONUMBER_OFFSET))(value, number);
		}
	};
}
