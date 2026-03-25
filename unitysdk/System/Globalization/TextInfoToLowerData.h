#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_GLOBALIZATION_TEXTINFOTOLOWERDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x16315620)

namespace System::Globalization
{
	inline static constexpr unsigned int TextInfoToLowerData_TypeDefinitionIndex = 785;

	class TextInfoToLowerData : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_range_1e00_1ffc()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0x4C70);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_a640_a696()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0x4C78);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_2160_216f()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0x4C80);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_2c60_2ce2()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0x4C88);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_2c00_2c2e()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0x4C90);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_a722_a78b()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0x4C98);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_00c0_0556()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0x4CA0);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_24b6_24cf()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0x4CA8);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_10a0_10c5()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToLowerData_TypeDefinitionIndex)->GetStaticField(0x4CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFOTOLOWERDATA__CCTOR_OFFSET))();
		}
	};
}
