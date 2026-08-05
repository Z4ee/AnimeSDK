#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaException.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCEEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1E7FE100)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7FE120)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E7FE140)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCEEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E7FE280)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7FE0E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaInferenceException_TypeDefinitionIndex = 2068;

	class XmlSchemaInferenceException : public ::System::Xml::Schema::XmlSchemaException
	{
	public:
		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCEEXCEPTION__CTOR_OFFSET))(this, info, context);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCEEXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* res, ::System::String* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCEEXCEPTION__CTOR_2_OFFSET))(this, res, arg);
		}

		::System::Void _ctor_3(::System::String* res, ::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCEEXCEPTION__CTOR_3_OFFSET))(this, res, lineNumber, linePosition);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCEEXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
