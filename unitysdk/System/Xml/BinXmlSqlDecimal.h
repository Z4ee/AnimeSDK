#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_XML_BINXMLSQLDECIMAL_CHFROMDIGIT_OFFSET UNITYSDK_OFFSET(0x1BCD3070)
#define SYSTEM_XML_BINXMLSQLDECIMAL_GET_ISPOSITIVE_OFFSET UNITYSDK_OFFSET(0x9357F0)
#define SYSTEM_XML_BINXMLSQLDECIMAL_MPDIV1_OFFSET UNITYSDK_OFFSET(0x1BCD2E20)
#define SYSTEM_XML_BINXMLSQLDECIMAL_MPNORMALIZE_OFFSET UNITYSDK_OFFSET(0x1BCD3010)
#define SYSTEM_XML_BINXMLSQLDECIMAL_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x935810)
#define SYSTEM_XML_BINXMLSQLDECIMAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x935840)
#define SYSTEM_XML_BINXMLSQLDECIMAL_TRIMTRAILINGZEROS_OFFSET UNITYSDK_OFFSET(0x935830)
#define SYSTEM_XML_BINXMLSQLDECIMAL_UINTFROMBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1BCD2B40)
#define SYSTEM_XML_BINXMLSQLDECIMAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCD3A00)
#define SYSTEM_XML_BINXMLSQLDECIMAL__CTOR_OFFSET UNITYSDK_OFFSET(0x935800)

namespace System::Xml
{
	inline static constexpr unsigned int BinXmlSqlDecimal_TypeDefinitionIndex = 1667;

	struct alignas(4) BinXmlSqlDecimal
	{
		static ::Il2CppArray<::System::UInt32>** StaticGet_x_rgulShiftBase()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(BinXmlSqlDecimal_TypeDefinitionIndex)->GetStaticField(0x1580);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_rgCLenFromPrec()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(BinXmlSqlDecimal_TypeDefinitionIndex)->GetStaticField(0x1588);
		}
		static ::System::UInt64* StaticGet_x_ulInt32BaseForMod()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(BinXmlSqlDecimal_TypeDefinitionIndex)->GetStaticField(0xDB0);
		}
		static ::System::UInt64* StaticGet_x_llMax()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(BinXmlSqlDecimal_TypeDefinitionIndex)->GetStaticField(0xDB8);
		}
		static ::System::UInt64* StaticGet_x_ulInt32Base()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(BinXmlSqlDecimal_TypeDefinitionIndex)->GetStaticField(0xDC0);
		}
		static ::System::Byte* StaticGet_MaxScale()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(BinXmlSqlDecimal_TypeDefinitionIndex)->GetStaticField(0xDC8);
		}
		static ::System::Byte* StaticGet_NUMERIC_MAX_PRECISION()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(BinXmlSqlDecimal_TypeDefinitionIndex)->GetStaticField(0xDC9);
		}
		static ::System::Byte* StaticGet_MaxPrecision()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(BinXmlSqlDecimal_TypeDefinitionIndex)->GetStaticField(0xDCA);
		}
		static ::System::Int32* StaticGet_x_cNumeMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BinXmlSqlDecimal_TypeDefinitionIndex)->GetStaticField(0xDCC);
		}
		static ::System::Double* StaticGet_DUINT_BASE3()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(BinXmlSqlDecimal_TypeDefinitionIndex)->GetStaticField(0xDD0);
		}
		static ::System::Double* StaticGet_DUINT_BASE()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(BinXmlSqlDecimal_TypeDefinitionIndex)->GetStaticField(0xDD8);
		}
		static ::System::Double* StaticGet_DUINT_BASE2()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(BinXmlSqlDecimal_TypeDefinitionIndex)->GetStaticField(0xDE0);
		}
		static ::System::Int64* StaticGet_x_lInt32Base()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(BinXmlSqlDecimal_TypeDefinitionIndex)->GetStaticField(0xDE8);
		}
		::System::Byte m_bLen; // 0x10
		::System::Byte m_bPrec; // 0x11
		::System::Byte m_bScale; // 0x12
		::System::Byte m_bSign; // 0x13
		::System::UInt32 m_data1; // 0x14
		::System::UInt32 m_data2; // 0x18
		::System::UInt32 m_data3; // 0x1C
		::System::UInt32 m_data4; // 0x20

		::System::Void _ctor(::Il2CppArray<::System::Byte>* data, ::System::Int32 offset, ::System::Boolean trim)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLDECIMAL__CTOR_OFFSET))(this, data, offset, trim);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLDECIMAL__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsPositive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLDECIMAL_GET_ISPOSITIVE_OFFSET))(this);
		}

		static ::System::UInt32 UIntFromByteArray(::Il2CppArray<::System::Byte>* data, ::System::Int32 offset)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLDECIMAL_UINTFROMBYTEARRAY_OFFSET))(data, offset);
		}

		static ::System::Void MpDiv1(::Il2CppArray<::System::UInt32>* rgulU, ::System::Int32& ciulU, ::System::UInt32 iulD, ::System::UInt32& iulR)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32&, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLDECIMAL_MPDIV1_OFFSET))(rgulU, ciulU, iulD, iulR);
		}

		static ::System::Void MpNormalize(::Il2CppArray<::System::UInt32>* rgulU, ::System::Int32& ciulU)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLDECIMAL_MPNORMALIZE_OFFSET))(rgulU, ciulU);
		}

		static ::System::Char ChFromDigit(::System::UInt32 uiDigit)
		{
			return ((::System::Char(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLDECIMAL_CHFROMDIGIT_OFFSET))(uiDigit);
		}

		/*
		::System::Decimal ToDecimal()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLDECIMAL_TODECIMAL_OFFSET))(this);
		}
		*/

		::System::Void TrimTrailingZeros()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLDECIMAL_TRIMTRAILINGZEROS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLDECIMAL_TOSTRING_OFFSET))(this);
		}
	};
}
