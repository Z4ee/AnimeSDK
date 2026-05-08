#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Xml::Schema { class XmlSchemaObject; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_CREATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B8EEE90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1B8EEFE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1B8EDBF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_SETSOURCE_1_OFFSET UNITYSDK_OFFSET(0x1B8EFC40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_SETSOURCE_OFFSET UNITYSDK_OFFSET(0x1B8ED4B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_10_OFFSET UNITYSDK_OFFSET(0x1B8EF890)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_11_OFFSET UNITYSDK_OFFSET(0x1B8EFAD0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_12_OFFSET UNITYSDK_OFFSET(0x1B8EF9C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_13_OFFSET UNITYSDK_OFFSET(0x1B8EF480)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B8EF2C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B8EF2E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B8E8BB0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B8EF300)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1B8EF590)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1B8EA2D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1B8EE6B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1B8EF660)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_9_OFFSET UNITYSDK_OFFSET(0x1B8EF780)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8EEA00)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaException_TypeDefinitionIndex = 2141;

	class XmlSchemaException : public ::System::SystemException
	{
	public:
		::System::String* res; // 0x88
		::Il2CppArray<::System::String*>* args; // 0x90
		::System::String* message; // 0x98
		::System::Xml::Schema::XmlSchemaObject* sourceSchemaObject; // 0xA0
		::System::String* sourceUri; // 0xA8
		::System::Int32 linePosition; // 0xB0
		::System::Int32 lineNumber; // 0xB4

		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_OFFSET))(this, info, context);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_2_OFFSET))(this, message);
		}

		::System::Void _ctor_3(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_3_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_4(::System::String* message, ::System::Exception* innerException, ::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_4_OFFSET))(this, message, innerException, lineNumber, linePosition);
		}

		::System::Void _ctor_5(::System::String* res, ::Il2CppArray<::System::String*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_5_OFFSET))(this, res, args);
		}

		::System::Void _ctor_6(::System::String* res, ::System::String* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_6_OFFSET))(this, res, arg);
		}

		::System::Void _ctor_7(::System::String* res, ::System::String* arg, ::System::String* sourceUri, ::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_7_OFFSET))(this, res, arg, sourceUri, lineNumber, linePosition);
		}

		::System::Void _ctor_8(::System::String* res, ::System::String* sourceUri, ::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_8_OFFSET))(this, res, sourceUri, lineNumber, linePosition);
		}

		::System::Void _ctor_9(::System::String* res, ::Il2CppArray<::System::String*>* args, ::System::String* sourceUri, ::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_9_OFFSET))(this, res, args, sourceUri, lineNumber, linePosition);
		}

		::System::Void _ctor_10(::System::String* res, ::System::Xml::Schema::XmlSchemaObject* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_10_OFFSET))(this, res, source);
		}

		::System::Void _ctor_11(::System::String* res, ::System::String* arg, ::System::Xml::Schema::XmlSchemaObject* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_11_OFFSET))(this, res, arg, source);
		}

		::System::Void _ctor_12(::System::String* res, ::Il2CppArray<::System::String*>* args, ::System::Xml::Schema::XmlSchemaObject* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_12_OFFSET))(this, res, args, source);
		}

		::System::Void _ctor_13(::System::String* res, ::Il2CppArray<::System::String*>* args, ::System::Exception* innerException, ::System::String* sourceUri, ::System::Int32 lineNumber, ::System::Int32 linePosition, ::System::Xml::Schema::XmlSchemaObject* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Exception*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_13_OFFSET))(this, res, args, innerException, sourceUri, lineNumber, linePosition, source);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		static ::System::String* CreateMessage(::System::String* res, ::Il2CppArray<::System::String*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_CREATEMESSAGE_OFFSET))(res, args);
		}

		::System::Void SetSource(::System::String* sourceUri, ::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_SETSOURCE_OFFSET))(this, sourceUri, lineNumber, linePosition);
		}

		::System::Void SetSource_1(::System::Xml::Schema::XmlSchemaObject* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_SETSOURCE_1_OFFSET))(this, source);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}
	};
}
