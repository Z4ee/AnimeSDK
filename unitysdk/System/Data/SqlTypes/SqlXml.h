#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System::IO { class Stream; }
namespace System::Reflection { class MethodInfo; }
namespace System::Xml { class XmlParserContext; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlReaderSettings; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaSet; }

#define SYSTEM_DATA_SQLTYPES_SQLXML_CREATEREADER_OFFSET UNITYSDK_OFFSET(0x1BB7C770)
#define SYSTEM_DATA_SQLTYPES_SQLXML_CREATESQLREADERDELEGATE_OFFSET UNITYSDK_OFFSET(0x1BB7CD40)
#define SYSTEM_DATA_SQLTYPES_SQLXML_CREATESQLXMLREADER_OFFSET UNITYSDK_OFFSET(0x1BB7CBA0)
#define SYSTEM_DATA_SQLTYPES_SQLXML_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x1BB7D1C0)
#define SYSTEM_DATA_SQLTYPES_SQLXML_GET_CREATESQLREADERMETHODINFO_OFFSET UNITYSDK_OFFSET(0x1BB7C9D0)
#define SYSTEM_DATA_SQLTYPES_SQLXML_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x1BB7C9C0)
#define SYSTEM_DATA_SQLTYPES_SQLXML_SETNULL_OFFSET UNITYSDK_OFFSET(0x1BB7C750)
#define SYSTEM_DATA_SQLTYPES_SQLXML_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x1BB7CE00)
#define SYSTEM_DATA_SQLTYPES_SQLXML_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET UNITYSDK_OFFSET(0x1BB7CE10)
#define SYSTEM_DATA_SQLTYPES_SQLXML_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET UNITYSDK_OFFSET(0x1BB7D070)
#define SYSTEM_DATA_SQLTYPES_SQLXML__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB7D240)
#define SYSTEM_DATA_SQLTYPES_SQLXML__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB7C730)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlXml_TypeDefinitionIndex = 37115;

	class SqlXml : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_s_createSqlReaderMethodInfo()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(SqlXml_TypeDefinitionIndex)->GetStaticField(0x27600);
		}
		static ::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>** StaticGet_s_sqlReaderDelegate()
		{
			return (::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>**)Il2CppClass::FromTypeDefinitionIndex(SqlXml_TypeDefinitionIndex)->GetStaticField(0x27608);
		}
		static ::System::Xml::XmlReaderSettings** StaticGet_s_defaultXmlReaderSettingsCloseInput()
		{
			return (::System::Xml::XmlReaderSettings**)Il2CppClass::FromTypeDefinitionIndex(SqlXml_TypeDefinitionIndex)->GetStaticField(0x27610);
		}
		static ::System::Xml::XmlReaderSettings** StaticGet_s_defaultXmlReaderSettings()
		{
			return (::System::Xml::XmlReaderSettings**)Il2CppClass::FromTypeDefinitionIndex(SqlXml_TypeDefinitionIndex)->GetStaticField(0x27618);
		}
		::System::Reflection::MethodInfo* _createSqlReaderMethodInfo; // 0x10
		::System::Boolean _fNotNull; // 0x18
		::System::IO::Stream* _stream; // 0x20
		::System::Boolean _firstCreateReader; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML__CCTOR_OFFSET))();
		}

		::System::Xml::XmlReader* CreateReader()
		{
			return ((::System::Xml::XmlReader*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML_CREATEREADER_OFFSET))(this);
		}

		static ::System::Xml::XmlReader* CreateSqlXmlReader(::System::IO::Stream* stream, ::System::Boolean closeInput, ::System::Boolean throwTargetInvocationExceptions)
		{
			return ((::System::Xml::XmlReader*(*)(::System::IO::Stream*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML_CREATESQLXMLREADER_OFFSET))(stream, closeInput, throwTargetInvocationExceptions);
		}

		static ::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>* CreateSqlReaderDelegate()
		{
			return ((::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML_CREATESQLREADERDELEGATE_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_CreateSqlReaderMethodInfo()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML_GET_CREATESQLREADERMETHODINFO_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML_GET_ISNULL_OFFSET))(this);
		}

		::System::Void SetNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML_SETNULL_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET))(this);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET))(this, r);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET))(this, writer);
		}

		static ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLXML_GETXSDTYPE_OFFSET))(schemaSet);
		}
	};
}
