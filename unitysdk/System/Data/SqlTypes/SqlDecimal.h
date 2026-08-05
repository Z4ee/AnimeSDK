#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/SqlTypes/EComparison.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaSet; }

#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_ADDULONG_OFFSET UNITYSDK_OFFSET(0xA823F0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_ADJUSTSCALE_OFFSET UNITYSDK_OFFSET(0xA82420)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_BGETPRECUI4_OFFSET UNITYSDK_OFFSET(0x1EF1C4F0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_BGETPRECUI8_OFFSET UNITYSDK_OFFSET(0x1EF1C760)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_CALCULATEPRECISION_OFFSET UNITYSDK_OFFSET(0xA82060)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_CHECKVALIDPRECSCALE_OFFSET UNITYSDK_OFFSET(0x1EF1CC80)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_CHFROMDIGIT_OFFSET UNITYSDK_OFFSET(0x1EF1DBB0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_COMPARENM_OFFSET UNITYSDK_OFFSET(0xA82460)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0xA826C0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_COMPARETO_OFFSET UNITYSDK_OFFSET(0xA826B0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_DIVBYULONG_OFFSET UNITYSDK_OFFSET(0xA82410)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_DWL_OFFSET UNITYSDK_OFFSET(0x1EF22690)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_EQUALS_OFFSET UNITYSDK_OFFSET(0xA826F0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_FGT10_38_1_OFFSET UNITYSDK_OFFSET(0xA82390)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_FGT10_38_OFFSET UNITYSDK_OFFSET(0xA82350)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_FZERO_OFFSET UNITYSDK_OFFSET(0xA82330)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA82700)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x1EF23AD0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GET_DATA_OFFSET UNITYSDK_OFFSET(0xA822E0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0xA82140)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GET_ISPOSITIVE_OFFSET UNITYSDK_OFFSET(0xA821E0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GET_SCALE_OFFSET UNITYSDK_OFFSET(0xA822D0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA821B0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1EF22D70)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_HI_OFFSET UNITYSDK_OFFSET(0x1EF22670)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_LABSCMP_OFFSET UNITYSDK_OFFSET(0xA82430)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1EF22CC0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_LO_OFFSET UNITYSDK_OFFSET(0x1EF22680)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPDIV1_OFFSET UNITYSDK_OFFSET(0x1EF1D9C0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPDIV_OFFSET UNITYSDK_OFFSET(0x1EF20E50)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPMOVE_OFFSET UNITYSDK_OFFSET(0x1EF22450)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPMUL1_OFFSET UNITYSDK_OFFSET(0x1EF22570)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPNORMALIZE_OFFSET UNITYSDK_OFFSET(0x1EF22510)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPSET_OFFSET UNITYSDK_OFFSET(0x1EF224D0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MULTBYULONG_OFFSET UNITYSDK_OFFSET(0xA82400)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1EF1EC90)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1EF20910)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EF22870)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1EF22B50)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1EF1EA80)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1EF21DD0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1EF21E80)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1EF21F30)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1EF21FE0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1EF220C0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EF1EA50)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1EF229E0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1EF1FB90)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1EF1FAA0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1EF1EAE0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_PARSE_OFFSET UNITYSDK_OFFSET(0x1EF1DBC0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SETPOSITIVE_OFFSET UNITYSDK_OFFSET(0xA821F0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SETSIGNBIT_OFFSET UNITYSDK_OFFSET(0xA82260)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SETTOZERO_OFFSET UNITYSDK_OFFSET(0xA82650)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_STOREFROMWORKINGARRAY_OFFSET UNITYSDK_OFFSET(0xA82640)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x3CADC0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET UNITYSDK_OFFSET(0xA82710)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET UNITYSDK_OFFSET(0xA82720)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TODECIMAL_OFFSET UNITYSDK_OFFSET(0xA82310)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TODOUBLE_OFFSET UNITYSDK_OFFSET(0xA82300)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TOSQLDOUBLE_OFFSET UNITYSDK_OFFSET(0xA82490)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TOSQLINT64_OFFSET UNITYSDK_OFFSET(0xA82520)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TOSQLMONEY_OFFSET UNITYSDK_OFFSET(0xA825B0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA822F0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_VERIFYPRECISION_OFFSET UNITYSDK_OFFSET(0xA82070)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_ZEROTOMAXLEN_OFFSET UNITYSDK_OFFSET(0x1EF21D20)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF23B50)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA820F0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA82110)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CTOR_3_OFFSET UNITYSDK_OFFSET(0xA82120)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CTOR_4_OFFSET UNITYSDK_OFFSET(0xA82130)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CTOR_OFFSET UNITYSDK_OFFSET(0xA82080)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlDecimal_TypeDefinitionIndex = 39378;

	struct alignas(4) SqlDecimal
	{
		static ::Il2CppArray<::System::UInt32>** StaticGet_s_decimalHelpersLo()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x2A9A0);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_s_rgulShiftBase()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x2A9A8);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_s_rgCLenFromPrec()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x2A9B0);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_s_decimalHelpersHiHi()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x2A9B8);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_s_decimalHelpersHi()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x2A9C0);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_s_decimalHelpersMid()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x2A9C8);
		}
		static ::System::UInt32* StaticGet_s_ulT4()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8F70);
		}
		static ::System::UInt32* StaticGet_s_DBL_DIG()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8F74);
		}
		static ::System::UInt64* StaticGet_s_dwlT16()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8F78);
		}
		static ::System::Double* StaticGet_s_DUINT_BASE()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8F80);
		}
		static ::System::Data::SqlTypes::SqlDecimal* StaticGet_Null()
		{
			return (::System::Data::SqlTypes::SqlDecimal*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8F88);
		}
		static ::System::UInt32* StaticGet_s_uiZero()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8F9C);
		}
		static ::System::UInt32* StaticGet_s_ulT7()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FA0);
		}
		static ::System::UInt32* StaticGet_s_ulT3()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FA4);
		}
		static ::System::UInt64* StaticGet_s_dwlT14()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FA8);
		}
		static ::System::Byte* StaticGet_s_bReverseNullMask()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FB0);
		}
		static ::System::Byte* StaticGet_s_NUMERIC_MAX_PRECISION()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FB1);
		}
		static ::System::Byte* StaticGet_s_cNumeDivScaleMin()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FB2);
		}
		static ::System::Byte* StaticGet_s_bNotNull()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FB3);
		}
		static ::System::Byte* StaticGet_MaxScale()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FB4);
		}
		static ::System::Byte* StaticGet_s_bNullMask()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FB5);
		}
		static ::System::Byte* StaticGet_s_bIsNull()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FB6);
		}
		static ::System::Byte* StaticGet_s_bPositive()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FB7);
		}
		static ::System::UInt64* StaticGet_s_llMax()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FB8);
		}
		static ::System::UInt64* StaticGet_s_dwlT17()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FC0);
		}
		static ::System::Byte* StaticGet_s_bNegative()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FC8);
		}
		static ::System::Byte* StaticGet_s_bSignMask()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FC9);
		}
		static ::System::Byte* StaticGet_s_bReverseSignMask()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FCA);
		}
		static ::System::Byte* StaticGet_MaxPrecision()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FCB);
		}
		static ::System::Int32* StaticGet_s_cNumeMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FCC);
		}
		static ::System::UInt32* StaticGet_s_ulT2()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FD0);
		}
		static ::System::UInt32* StaticGet_s_ulT8()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FD4);
		}
		static ::System::UInt32* StaticGet_s_ulT9()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FD8);
		}
		static ::System::UInt64* StaticGet_s_dwlT12()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FE0);
		}
		static ::System::Double* StaticGet_s_DUINT_BASE2()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FE8);
		}
		static ::System::UInt32* StaticGet_s_ulBase10()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FF0);
		}
		static ::System::Data::SqlTypes::SqlDecimal* StaticGet_MinValue()
		{
			return (::System::Data::SqlTypes::SqlDecimal*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x8FF4);
		}
		static ::System::UInt64* StaticGet_s_dwlT15()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9008);
		}
		static ::System::UInt64* StaticGet_s_ulInt32Base()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9010);
		}
		static ::System::UInt64* StaticGet_s_dwlT18()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9018);
		}
		static ::System::UInt64* StaticGet_s_ulInt32BaseForMod()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9020);
		}
		static ::System::Double* StaticGet_s_DMAX_NUME()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9028);
		}
		static ::System::UInt64* StaticGet_s_dwlT10()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9030);
		}
		static ::System::UInt64* StaticGet_s_dwlT13()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9038);
		}
		static ::System::UInt64* StaticGet_s_dwlT11()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9040);
		}
		static ::System::UInt64* StaticGet_s_dwlT19()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9048);
		}
		static ::System::Int64* StaticGet_s_lInt32Base()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9050);
		}
		static ::System::Data::SqlTypes::SqlDecimal* StaticGet_MaxValue()
		{
			return (::System::Data::SqlTypes::SqlDecimal*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9058);
		}
		static ::System::UInt32* StaticGet_s_ulT1()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x906C);
		}
		static ::System::Double* StaticGet_s_DUINT_BASE3()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9070);
		}
		static ::System::UInt32* StaticGet_s_ulT6()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9078);
		}
		static ::System::UInt32* StaticGet_s_ulT5()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x907C);
		}
		::System::Byte _bStatus; // 0x10
		::System::Byte _bLen; // 0x11
		::System::Byte _bPrec; // 0x12
		::System::Byte _bScale; // 0x13
		::System::UInt32 _data1; // 0x14
		::System::UInt32 _data2; // 0x18
		::System::UInt32 _data3; // 0x1C
		::System::UInt32 _data4; // 0x20

		::System::Void _ctor(::System::Boolean fNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CTOR_OFFSET))(this, fNull);
		}

		/*
		::System::Void _ctor_1(::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CTOR_1_OFFSET))(this, value);
		}
		*/

		::System::Void _ctor_2(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CTOR_2_OFFSET))(this, value);
		}

		::System::Void _ctor_3(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CTOR_3_OFFSET))(this, value);
		}

		::System::Void _ctor_4(::Il2CppArray<::System::UInt32>* rglData, ::System::Byte bLen, ::System::Byte bPrec, ::System::Byte bScale, ::System::Boolean fPositive)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CTOR_4_OFFSET))(this, rglData, bLen, bPrec, bScale, fPositive);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CCTOR_OFFSET))();
		}

		::System::Byte CalculatePrecision()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_CALCULATEPRECISION_OFFSET))(this);
		}

		::System::Boolean VerifyPrecision(::System::Byte precision)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_VERIFYPRECISION_OFFSET))(this, precision);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GET_ISNULL_OFFSET))(this);
		}

		/*
		::System::Decimal get_Value()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GET_VALUE_OFFSET))(this);
		}
		*/

		::System::Boolean get_IsPositive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GET_ISPOSITIVE_OFFSET))(this);
		}

		::System::Void SetPositive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SETPOSITIVE_OFFSET))(this);
		}

		::System::Void SetSignBit(::System::Boolean fPositive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SETSIGNBIT_OFFSET))(this, fPositive);
		}

		::System::Byte get_Scale()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GET_SCALE_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_Data()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GET_DATA_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TOSTRING_OFFSET))(this);
		}

		static ::System::Data::SqlTypes::SqlDecimal Parse(::System::String* s)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_PARSE_OFFSET))(s);
		}

		::System::Double ToDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TODOUBLE_OFFSET))(this);
		}

		/*
		::System::Decimal ToDecimal()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TODECIMAL_OFFSET))(this);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlDecimal op_Implicit(::System::Decimal x)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_OFFSET))(x);
		}
		*/

		static ::System::Data::SqlTypes::SqlDecimal op_Implicit_1(::System::Int64 x)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_1_OFFSET))(x);
		}

		static ::System::Data::SqlTypes::SqlDecimal op_UnaryNegation(::System::Data::SqlTypes::SqlDecimal x)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_UNARYNEGATION_OFFSET))(x);
		}

		static ::System::Data::SqlTypes::SqlDecimal op_Addition(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_ADDITION_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlDecimal op_Subtraction(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_SUBTRACTION_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlDecimal op_Multiply(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_MULTIPLY_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlDecimal op_Division(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_DIVISION_OFFSET))(x, y);
		}

		/*
		static ::System::Data::SqlTypes::SqlDecimal op_Implicit_2(::System::Data::SqlTypes::SqlByte x)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Data::SqlTypes::SqlByte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_2_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlDecimal op_Implicit_3(::System::Data::SqlTypes::SqlInt16 x)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Data::SqlTypes::SqlInt16))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_3_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlDecimal op_Implicit_4(::System::Data::SqlTypes::SqlInt32 x)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Data::SqlTypes::SqlInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_4_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlDecimal op_Implicit_5(::System::Data::SqlTypes::SqlInt64 x)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Data::SqlTypes::SqlInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_5_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlDecimal op_Implicit_6(::System::Data::SqlTypes::SqlMoney x)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Data::SqlTypes::SqlMoney))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_6_OFFSET))(x);
		}
		*/

		static ::System::Void ZeroToMaxLen(::Il2CppArray<::System::UInt32>* rgulData, ::System::Int32 cUI4sCur)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_ZEROTOMAXLEN_OFFSET))(rgulData, cUI4sCur);
		}

		::System::Boolean FZero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_FZERO_OFFSET))(this);
		}

		::System::Boolean FGt10_38()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_FGT10_38_OFFSET))(this);
		}

		::System::Boolean FGt10_38_1(::Il2CppArray<::System::UInt32>* rglData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_FGT10_38_1_OFFSET))(this, rglData);
		}

		static ::System::Byte BGetPrecUI4(::System::UInt32 value)
		{
			return ((::System::Byte(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_BGETPRECUI4_OFFSET))(value);
		}

		static ::System::Byte BGetPrecUI8(::System::UInt64 dwlVal)
		{
			return ((::System::Byte(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_BGETPRECUI8_OFFSET))(dwlVal);
		}

		::System::Void AddULong(::System::UInt32 ulAdd)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_ADDULONG_OFFSET))(this, ulAdd);
		}

		::System::Void MultByULong(::System::UInt32 uiMultiplier)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MULTBYULONG_OFFSET))(this, uiMultiplier);
		}

		::System::UInt32 DivByULong(::System::UInt32 iDivisor)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_DIVBYULONG_OFFSET))(this, iDivisor);
		}

		::System::Void AdjustScale(::System::Int32 digits, ::System::Boolean fRound)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_ADJUSTSCALE_OFFSET))(this, digits, fRound);
		}

		::System::Int32 LAbsCmp(::System::Data::SqlTypes::SqlDecimal snumOp)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_LABSCMP_OFFSET))(this, snumOp);
		}

		static ::System::Void MpMove(::Il2CppArray<::System::UInt32>* rgulS, ::System::Int32 ciulS, ::Il2CppArray<::System::UInt32>* rgulD, ::System::Int32& ciulD)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPMOVE_OFFSET))(rgulS, ciulS, rgulD, ciulD);
		}

		static ::System::Void MpSet(::Il2CppArray<::System::UInt32>* rgulD, ::System::Int32& ciulD, ::System::UInt32 iulN)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32&, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPSET_OFFSET))(rgulD, ciulD, iulN);
		}

		static ::System::Void MpNormalize(::Il2CppArray<::System::UInt32>* rgulU, ::System::Int32& ciulU)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPNORMALIZE_OFFSET))(rgulU, ciulU);
		}

		static ::System::Void MpMul1(::Il2CppArray<::System::UInt32>* piulD, ::System::Int32& ciulD, ::System::UInt32 iulX)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32&, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPMUL1_OFFSET))(piulD, ciulD, iulX);
		}

		static ::System::Void MpDiv1(::Il2CppArray<::System::UInt32>* rgulU, ::System::Int32& ciulU, ::System::UInt32 iulD, ::System::UInt32& iulR)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32&, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPDIV1_OFFSET))(rgulU, ciulU, iulD, iulR);
		}

		static ::System::UInt64 DWL(::System::UInt32 lo, ::System::UInt32 hi)
		{
			return ((::System::UInt64(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_DWL_OFFSET))(lo, hi);
		}

		static ::System::UInt32 HI(::System::UInt64 x)
		{
			return ((::System::UInt32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_HI_OFFSET))(x);
		}

		static ::System::UInt32 LO(::System::UInt64 x)
		{
			return ((::System::UInt32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_LO_OFFSET))(x);
		}

		static ::System::Void MpDiv(::Il2CppArray<::System::UInt32>* rgulU, ::System::Int32 ciulU, ::Il2CppArray<::System::UInt32>* rgulD, ::System::Int32 ciulD, ::Il2CppArray<::System::UInt32>* rgulQ, ::System::Int32& ciulQ, ::Il2CppArray<::System::UInt32>* rgulR, ::System::Int32& ciulR)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32&, ::Il2CppArray<::System::UInt32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPDIV_OFFSET))(rgulU, ciulU, rgulD, ciulD, rgulQ, ciulQ, rgulR, ciulR);
		}

		::System::Data::SqlTypes::EComparison CompareNm(::System::Data::SqlTypes::SqlDecimal snumOp)
		{
			return ((::System::Data::SqlTypes::EComparison(*)(::PVOID, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_COMPARENM_OFFSET))(this, snumOp);
		}

		static ::System::Void CheckValidPrecScale(::System::Byte bPrec, ::System::Byte bScale)
		{
			return ((::System::Void(*)(::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_CHECKVALIDPRECSCALE_OFFSET))(bPrec, bScale);
		}

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_EQUALITY_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_LESSTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_GREATERTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_LESSTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GREATERTHAN_OFFSET))(x, y);
		}
		*/

		/*
		::System::Data::SqlTypes::SqlDouble ToSqlDouble()
		{
			return ((::System::Data::SqlTypes::SqlDouble(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TOSQLDOUBLE_OFFSET))(this);
		}
		*/

		/*
		::System::Data::SqlTypes::SqlInt64 ToSqlInt64()
		{
			return ((::System::Data::SqlTypes::SqlInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TOSQLINT64_OFFSET))(this);
		}
		*/

		/*
		::System::Data::SqlTypes::SqlMoney ToSqlMoney()
		{
			return ((::System::Data::SqlTypes::SqlMoney(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TOSQLMONEY_OFFSET))(this);
		}
		*/

		static ::System::Char ChFromDigit(::System::UInt32 uiDigit)
		{
			return ((::System::Char(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_CHFROMDIGIT_OFFSET))(uiDigit);
		}

		::System::Void StoreFromWorkingArray(::Il2CppArray<::System::UInt32>* rguiData)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_STOREFROMWORKINGARRAY_OFFSET))(this, rguiData);
		}

		::System::Void SetToZero()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SETTOZERO_OFFSET))(this);
		}

		::System::Int32 CompareTo(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_COMPARETO_OFFSET))(this, value);
		}

		::System::Int32 CompareTo_1(::System::Data::SqlTypes::SqlDecimal value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_COMPARETO_1_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GETHASHCODE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET))(this);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET))(this, reader);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET))(this, writer);
		}

		static ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GETXSDTYPE_OFFSET))(schemaSet);
		}
	};
}
