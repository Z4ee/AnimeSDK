#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/SqlTypes/SqlBytesCharsState.h"
#include "unitysdk/System/Data/SqlTypes/SqlString.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Data::SqlTypes { class SqlStreamChars; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaSet; }

#define SYSTEM_DATA_SQLTYPES_SQLCHARS_COPYSTREAMTOBUFFER_OFFSET UNITYSDK_OFFSET(0x1DB40A10)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_FSTREAM_OFFSET UNITYSDK_OFFSET(0x1DB40A00)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x1DB410C0)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x1DB409E0)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x1DB409D0)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1DB40B50)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_GET_NULL_OFFSET UNITYSDK_OFFSET(0x1DB41190)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1DB40BE0)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_SETBUFFER_OFFSET UNITYSDK_OFFSET(0x1DB40DB0)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_SETNULL_OFFSET UNITYSDK_OFFSET(0x1DB40820)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1DB41140)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x1DB40DE0)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET UNITYSDK_OFFSET(0x1DB40DF0)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET UNITYSDK_OFFSET(0x1DB40F50)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB40840)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DB40890)
#define SYSTEM_DATA_SQLTYPES_SQLCHARS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB40800)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlChars_TypeDefinitionIndex = 38715;

	class SqlChars : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Char>* _rgchBuf; // 0x10
		::System::Int64 _lCurLen; // 0x18
		::System::Data::SqlTypes::SqlStreamChars* _stream; // 0x20
		::System::Data::SqlTypes::SqlBytesCharsState _state; // 0x28
		::Il2CppArray<::System::Char>* _rgchWorkBuf; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Char>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS__CTOR_1_OFFSET))(this, buffer);
		}

		::System::Void _ctor_2(::System::Data::SqlTypes::SqlString value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::SqlTypes::SqlString))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS__CTOR_2_OFFSET))(this, value);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_GET_ISNULL_OFFSET))(this);
		}

		::Il2CppArray<::System::Char>* get_Buffer()
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_GET_BUFFER_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_GET_LENGTH_OFFSET))(this);
		}

		::Il2CppArray<::System::Char>* get_Value()
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_GET_VALUE_OFFSET))(this);
		}

		::System::Void SetNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_SETNULL_OFFSET))(this);
		}

		::System::Boolean FStream()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_FSTREAM_OFFSET))(this);
		}

		::System::Void CopyStreamToBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_COPYSTREAMTOBUFFER_OFFSET))(this);
		}

		::System::Void SetBuffer(::Il2CppArray<::System::Char>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_SETBUFFER_OFFSET))(this, buffer);
		}

		::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET))(this);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET))(this, r);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET))(this, writer);
		}

		static ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_GETXSDTYPE_OFFSET))(schemaSet);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		static ::System::Data::SqlTypes::SqlChars* get_Null()
		{
			return ((::System::Data::SqlTypes::SqlChars*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLCHARS_GET_NULL_OFFSET))();
		}
	};
}
