#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_GLOBALIZATION_TEXTINFOTOUPPERDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x16315A00)

namespace System::Globalization
{
	inline static constexpr unsigned int TextInfoToUpperData_TypeDefinitionIndex = 784;

	class TextInfoToUpperData : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_range_a641_a697()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToUpperData_TypeDefinitionIndex)->GetStaticField(0x4C30);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_2170_2184()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToUpperData_TypeDefinitionIndex)->GetStaticField(0x4C38);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_2d00_2d25()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToUpperData_TypeDefinitionIndex)->GetStaticField(0x4C40);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_2c30_2ce3()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToUpperData_TypeDefinitionIndex)->GetStaticField(0x4C48);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_1e01_1ff3()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToUpperData_TypeDefinitionIndex)->GetStaticField(0x4C50);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_24d0_24e9()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToUpperData_TypeDefinitionIndex)->GetStaticField(0x4C58);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_00e0_0586()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToUpperData_TypeDefinitionIndex)->GetStaticField(0x4C60);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_range_a723_a78c()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(TextInfoToUpperData_TypeDefinitionIndex)->GetStaticField(0x4C68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFOTOUPPERDATA__CCTOR_OFFSET))();
		}
	};
}
