#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/SqlTypes/EComparison.h"
#include "unitysdk/System/Data/SqlTypes/SqlCompareOptions.h"
#include "unitysdk/System/Globalization/CompareOptions.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Globalization { class CompareInfo; }
namespace System::Text { class UnicodeEncoding; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaSet; }

#define SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPAREBINARY2_OFFSET UNITYSDK_OFFSET(0x1BE4DE10)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPAREBINARY_OFFSET UNITYSDK_OFFSET(0x1BE4DBC0)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPAREOPTIONSFROMSQLCOMPAREOPTIONS_OFFSET UNITYSDK_OFFSET(0x1BE4E1E0)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x9B7A30)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9B7A20)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPARE_OFFSET UNITYSDK_OFFSET(0x1BE4E300)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B7B50)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_FBINARYSORT_OFFSET UNITYSDK_OFFSET(0x9B7A00)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B7B60)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x1BE4EFD0)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x9B7900)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9B7910)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1BE4D680)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BE4E450)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1BE4D5B0)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_SETCOMPAREINFO_OFFSET UNITYSDK_OFFSET(0x9B7970)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_STRINGCOMPARE_OFFSET UNITYSDK_OFFSET(0x1BE4D790)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x304470)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET UNITYSDK_OFFSET(0x9B7B70)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET UNITYSDK_OFFSET(0x9B7B80)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B79C0)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_VALIDATESQLCOMPAREOPTIONS_OFFSET UNITYSDK_OFFSET(0x1BE4D290)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE4F050)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9B7860)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING__CTOR_2_OFFSET UNITYSDK_OFFSET(0x9B7870)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING__CTOR_3_OFFSET UNITYSDK_OFFSET(0x9B78F0)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x9B7850)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlString_TypeDefinitionIndex = 37109;

	struct alignas(8) SqlString
	{
		static ::System::Data::SqlTypes::SqlString* StaticGet_Null()
		{
			return (::System::Data::SqlTypes::SqlString*)Il2CppClass::FromTypeDefinitionIndex(SqlString_TypeDefinitionIndex)->GetStaticField(0x27490);
		}
		static ::System::Text::UnicodeEncoding** StaticGet_s_unicodeEncoding()
		{
			return (::System::Text::UnicodeEncoding**)Il2CppClass::FromTypeDefinitionIndex(SqlString_TypeDefinitionIndex)->GetStaticField(0x274B0);
		}
		static ::System::Int32* StaticGet_IgnoreNonSpace()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlString_TypeDefinitionIndex)->GetStaticField(0x8D00);
		}
		static ::System::Int32* StaticGet_BinarySort()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlString_TypeDefinitionIndex)->GetStaticField(0x8D04);
		}
		static ::System::Data::SqlTypes::SqlCompareOptions* StaticGet_s_iDefaultFlag()
		{
			return (::System::Data::SqlTypes::SqlCompareOptions*)Il2CppClass::FromTypeDefinitionIndex(SqlString_TypeDefinitionIndex)->GetStaticField(0x8D08);
		}
		static ::System::Data::SqlTypes::SqlCompareOptions* StaticGet_s_iValidSqlCompareOptionMask()
		{
			return (::System::Data::SqlTypes::SqlCompareOptions*)Il2CppClass::FromTypeDefinitionIndex(SqlString_TypeDefinitionIndex)->GetStaticField(0x8D0C);
		}
		static ::System::Int32* StaticGet_IgnoreKanaType()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlString_TypeDefinitionIndex)->GetStaticField(0x8D10);
		}
		static ::System::Int32* StaticGet_BinarySort2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlString_TypeDefinitionIndex)->GetStaticField(0x8D14);
		}
		static ::System::Int32* StaticGet_s_lcidBinary()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlString_TypeDefinitionIndex)->GetStaticField(0x8D18);
		}
		static ::System::Int32* StaticGet_s_lcidUSEnglish()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlString_TypeDefinitionIndex)->GetStaticField(0x8D1C);
		}
		static ::System::Globalization::CompareOptions* StaticGet_s_iValidCompareOptionMask()
		{
			return (::System::Globalization::CompareOptions*)Il2CppClass::FromTypeDefinitionIndex(SqlString_TypeDefinitionIndex)->GetStaticField(0x8D20);
		}
		static ::System::Int32* StaticGet_IgnoreCase()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlString_TypeDefinitionIndex)->GetStaticField(0x8D24);
		}
		static ::System::Int32* StaticGet_IgnoreWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlString_TypeDefinitionIndex)->GetStaticField(0x8D28);
		}
		::System::String* m_value; // 0x10
		::System::Globalization::CompareInfo* m_cmpInfo; // 0x18
		::System::Int32 m_lcid; // 0x20
		::System::Data::SqlTypes::SqlCompareOptions m_flag; // 0x24
		::System::Boolean m_fNotNull; // 0x28

		::System::Void _ctor(::System::Boolean fNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING__CTOR_OFFSET))(this, fNull);
		}

		::System::Void _ctor_1(::System::String* data, ::System::Int32 lcid, ::System::Data::SqlTypes::SqlCompareOptions compareOptions)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Data::SqlTypes::SqlCompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING__CTOR_1_OFFSET))(this, data, lcid, compareOptions);
		}

		::System::Void _ctor_2(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING__CTOR_2_OFFSET))(this, data);
		}

		::System::Void _ctor_3(::System::Int32 lcid, ::System::Data::SqlTypes::SqlCompareOptions compareOptions, ::System::String* data, ::System::Globalization::CompareInfo* cmpInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Data::SqlTypes::SqlCompareOptions, ::System::String*, ::System::Globalization::CompareInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING__CTOR_3_OFFSET))(this, lcid, compareOptions, data, cmpInfo);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_GET_ISNULL_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_GET_VALUE_OFFSET))(this);
		}

		::System::Void SetCompareInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_SETCOMPAREINFO_OFFSET))(this);
		}

		static ::System::Data::SqlTypes::SqlString op_Implicit(::System::String* x)
		{
			return ((::System::Data::SqlTypes::SqlString(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_OP_IMPLICIT_OFFSET))(x);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_TOSTRING_OFFSET))(this);
		}

		static ::System::Data::SqlTypes::SqlString op_Addition(::System::Data::SqlTypes::SqlString x, ::System::Data::SqlTypes::SqlString y)
		{
			return ((::System::Data::SqlTypes::SqlString(*)(::System::Data::SqlTypes::SqlString, ::System::Data::SqlTypes::SqlString))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_OP_ADDITION_OFFSET))(x, y);
		}

		static ::System::Int32 StringCompare(::System::Data::SqlTypes::SqlString x, ::System::Data::SqlTypes::SqlString y)
		{
			return ((::System::Int32(*)(::System::Data::SqlTypes::SqlString, ::System::Data::SqlTypes::SqlString))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_STRINGCOMPARE_OFFSET))(x, y);
		}

		/*
		static ::System::Data::SqlTypes::SqlBoolean Compare(::System::Data::SqlTypes::SqlString x, ::System::Data::SqlTypes::SqlString y, ::System::Data::SqlTypes::EComparison ecExpectedResult)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlString, ::System::Data::SqlTypes::SqlString, ::System::Data::SqlTypes::EComparison))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPARE_OFFSET))(x, y, ecExpectedResult);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlString x, ::System::Data::SqlTypes::SqlString y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlString, ::System::Data::SqlTypes::SqlString))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_OP_EQUALITY_OFFSET))(x, y);
		}
		*/

		static ::System::Void ValidateSqlCompareOptions(::System::Data::SqlTypes::SqlCompareOptions compareOptions)
		{
			return ((::System::Void(*)(::System::Data::SqlTypes::SqlCompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_VALIDATESQLCOMPAREOPTIONS_OFFSET))(compareOptions);
		}

		static ::System::Globalization::CompareOptions CompareOptionsFromSqlCompareOptions(::System::Data::SqlTypes::SqlCompareOptions compareOptions)
		{
			return ((::System::Globalization::CompareOptions(*)(::System::Data::SqlTypes::SqlCompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPAREOPTIONSFROMSQLCOMPAREOPTIONS_OFFSET))(compareOptions);
		}

		::System::Boolean FBinarySort()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_FBINARYSORT_OFFSET))(this);
		}

		static ::System::Int32 CompareBinary(::System::Data::SqlTypes::SqlString x, ::System::Data::SqlTypes::SqlString y)
		{
			return ((::System::Int32(*)(::System::Data::SqlTypes::SqlString, ::System::Data::SqlTypes::SqlString))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPAREBINARY_OFFSET))(x, y);
		}

		static ::System::Int32 CompareBinary2(::System::Data::SqlTypes::SqlString x, ::System::Data::SqlTypes::SqlString y)
		{
			return ((::System::Int32(*)(::System::Data::SqlTypes::SqlString, ::System::Data::SqlTypes::SqlString))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPAREBINARY2_OFFSET))(x, y);
		}

		::System::Int32 CompareTo(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPARETO_OFFSET))(this, value);
		}

		::System::Int32 CompareTo_1(::System::Data::SqlTypes::SqlString value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::SqlTypes::SqlString))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPARETO_1_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_GETHASHCODE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET))(this);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET))(this, reader);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET))(this, writer);
		}

		static ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_GETXSDTYPE_OFFSET))(schemaSet);
		}
	};
}
