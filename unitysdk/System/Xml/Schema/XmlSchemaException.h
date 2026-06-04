#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Xml::Schema { class XmlSchemaObject; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_CREATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AE5EBF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1AE5ED10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1AE5F340)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AE5EFA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AE5EFC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1AE5F130)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1AE5EFE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1AE416D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1AE5F230)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1AE5F150)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE5E7D0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaException_TypeDefinitionIndex = 2185;

	class XmlSchemaException : public ::System::SystemException
	{
	public:
		::System::Xml::Schema::XmlSchemaObject* sourceSchemaObject; // 0x88
		::System::String* res; // 0x90
		::System::String* message; // 0x98
		::System::String* sourceUri; // 0xA0
		::Il2CppArray<::System::String*>* args; // 0xA8
		::System::Int32 linePosition; // 0xB0
		::System::Int32 lineNumber; // 0xB4

		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_4(::System::String* a1, ::System::Exception* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_5(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_5_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_6(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_6_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_7(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Exception* a3, ::System::String* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Xml::Schema::XmlSchemaObject* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Exception*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION__CTOR_7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		static ::System::String* CreateMessage(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_CREATEMESSAGE_OFFSET))(a1, a2);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}
	};
}
