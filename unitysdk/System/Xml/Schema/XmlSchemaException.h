#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Xml::Schema { class XmlSchemaObject; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_CREATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x19FEA690)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x19FEA7B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x19FEAE20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19FEAA60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19FEAA80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x19FEAC00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x19FEAAA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x19FCDCD0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x19FEAD00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_7_OFFSET UNITYSDK_OFFSET(0x19FEAC20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19FEA260)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaException_TypeDefinitionIndex = 2185;

	class XmlSchemaException : public ::System::SystemException
	{
	public:
		::Il2CppArray<::System::String*>* args; // 0x88
		::System::String* sourceUri; // 0x90
		::System::String* res; // 0x98
		::System::String* message; // 0xA0
		::System::Xml::Schema::XmlSchemaObject* sourceSchemaObject; // 0xA8
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

		::System::Void _ctor_5(::System::String* res, ::System::String* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_5_OFFSET))(this, res, arg);
		}

		::System::Void _ctor_6(::System::String* res, ::System::String* arg, ::System::String* sourceUri, ::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_6_OFFSET))(this, res, arg, sourceUri, lineNumber, linePosition);
		}

		::System::Void _ctor_7(::System::String* res, ::Il2CppArray<::System::String*>* args, ::System::Exception* innerException, ::System::String* sourceUri, ::System::Int32 lineNumber, ::System::Int32 linePosition, ::System::Xml::Schema::XmlSchemaObject* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Exception*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_7_OFFSET))(this, res, args, innerException, sourceUri, lineNumber, linePosition, source);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		static ::System::String* CreateMessage(::System::String* res, ::Il2CppArray<::System::String*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_CREATEMESSAGE_OFFSET))(res, args);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}
	};
}
