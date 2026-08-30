#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_GLOBALIZATION_TEXTINFOTOLOWERDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD2F270)

namespace System::Globalization
{
	inline static constexpr unsigned int TextInfoToLowerData_TypeDefinitionIndex = 789;

	class TextInfoToLowerData : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_range_2160_216f()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0xA520);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_1e00_1ffc()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0xA528);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_2c60_2ce2()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0xA530);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_00c0_0556()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0xA538);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_10a0_10c5()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0xA540);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_24b6_24cf()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0xA548);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_a640_a696()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0xA550);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_a722_a78b()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0xA558);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_2c00_2c2e()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0xA560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFOTOLOWERDATA__CCTOR_OFFSET))();
		}
	};
}
