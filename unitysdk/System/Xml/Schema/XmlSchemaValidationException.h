#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaException.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1AFFD3A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFFD3C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AFFD3E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1AFFD550)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1AFFD660)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFFD380)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaValidationException_TypeDefinitionIndex = 2198;

	class XmlSchemaValidationException : public ::System::Xml::Schema::XmlSchemaException
	{
	public:
		::System::Object* sourceNodeObject; // 0xB8

		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION__CTOR_OFFSET))(this, info, context);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* res, ::System::String* arg, ::System::String* sourceUri, ::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION__CTOR_2_OFFSET))(this, res, arg, sourceUri, lineNumber, linePosition);
		}

		::System::Void _ctor_3(::System::String* res, ::Il2CppArray<::System::String*>* args, ::System::String* sourceUri, ::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION__CTOR_3_OFFSET))(this, res, args, sourceUri, lineNumber, linePosition);
		}

		::System::Void _ctor_4(::System::String* res, ::Il2CppArray<::System::String*>* args, ::System::Exception* innerException, ::System::String* sourceUri, ::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Exception*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION__CTOR_4_OFFSET))(this, res, args, innerException, sourceUri, lineNumber, linePosition);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
