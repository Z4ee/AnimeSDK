#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Xml { class IXmlLineInfo; }

#define SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_1_OFFSET UNITYSDK_OFFSET(0x19896A90)
#define SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_2_OFFSET UNITYSDK_OFFSET(0x19896740)
#define SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_OFFSET UNITYSDK_OFFSET(0x1988DEE0)
#define SYSTEM_XML_XMLEXCEPTION_CREATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x198952A0)
#define SYSTEM_XML_XMLEXCEPTION_FORMATUSERMESSAGE_OFFSET UNITYSDK_OFFSET(0x19895B60)
#define SYSTEM_XML_XMLEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x19895670)
#define SYSTEM_XML_XMLEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x19896B00)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_10_OFFSET UNITYSDK_OFFSET(0x19896140)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_11_OFFSET UNITYSDK_OFFSET(0x19895EF0)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_12_OFFSET UNITYSDK_OFFSET(0x19896160)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_13_OFFSET UNITYSDK_OFFSET(0x198962C0)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_14_OFFSET UNITYSDK_OFFSET(0x19896430)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_15_OFFSET UNITYSDK_OFFSET(0x19896530)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_16_OFFSET UNITYSDK_OFFSET(0x19896640)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_17_OFFSET UNITYSDK_OFFSET(0x19895C00)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19895950)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19895980)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x198959D0)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x198959B0)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x19895A00)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x19865310)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_7_OFFSET UNITYSDK_OFFSET(0x19865A00)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_8_OFFSET UNITYSDK_OFFSET(0x19895D10)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_9_OFFSET UNITYSDK_OFFSET(0x19895E60)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19894DE0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlException_TypeDefinitionIndex = 1832;

	class XmlException : public ::System::SystemException
	{
	public:
		::System::String* message; // 0x88
		::System::String* sourceUri; // 0x90
		::Il2CppArray<::System::String*>* args; // 0x98
		::System::String* res; // 0xA0
		::System::Int32 linePosition; // 0xA8
		::System::Int32 lineNumber; // 0xAC

		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_OFFSET))(this, info, context);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_2_OFFSET))(this, message);
		}

		::System::Void _ctor_3(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_3_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_4(::System::String* message, ::System::Exception* innerException, ::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_4_OFFSET))(this, message, innerException, lineNumber, linePosition);
		}

		::System::Void _ctor_5(::System::String* message, ::System::Exception* innerException, ::System::Int32 lineNumber, ::System::Int32 linePosition, ::System::String* sourceUri)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_5_OFFSET))(this, message, innerException, lineNumber, linePosition, sourceUri);
		}

		::System::Void _ctor_6(::System::String* res, ::Il2CppArray<::System::String*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_6_OFFSET))(this, res, args);
		}

		::System::Void _ctor_7(::System::String* res, ::System::String* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_7_OFFSET))(this, res, arg);
		}

		::System::Void _ctor_8(::System::String* res, ::System::String* arg, ::System::String* sourceUri)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_8_OFFSET))(this, res, arg, sourceUri);
		}

		::System::Void _ctor_9(::System::String* res, ::System::String* arg, ::System::Xml::IXmlLineInfo* lineInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::IXmlLineInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_9_OFFSET))(this, res, arg, lineInfo);
		}

		::System::Void _ctor_10(::System::String* res, ::Il2CppArray<::System::String*>* args, ::System::Xml::IXmlLineInfo* lineInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Xml::IXmlLineInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_10_OFFSET))(this, res, args, lineInfo);
		}

		::System::Void _ctor_11(::System::String* res, ::Il2CppArray<::System::String*>* args, ::System::Xml::IXmlLineInfo* lineInfo, ::System::String* sourceUri)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Xml::IXmlLineInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_11_OFFSET))(this, res, args, lineInfo, sourceUri);
		}

		::System::Void _ctor_12(::System::String* res, ::System::String* arg, ::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_12_OFFSET))(this, res, arg, lineNumber, linePosition);
		}

		::System::Void _ctor_13(::System::String* res, ::System::String* arg, ::System::Int32 lineNumber, ::System::Int32 linePosition, ::System::String* sourceUri)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_13_OFFSET))(this, res, arg, lineNumber, linePosition, sourceUri);
		}

		::System::Void _ctor_14(::System::String* res, ::Il2CppArray<::System::String*>* args, ::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_14_OFFSET))(this, res, args, lineNumber, linePosition);
		}

		::System::Void _ctor_15(::System::String* res, ::Il2CppArray<::System::String*>* args, ::System::Int32 lineNumber, ::System::Int32 linePosition, ::System::String* sourceUri)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_15_OFFSET))(this, res, args, lineNumber, linePosition, sourceUri);
		}

		::System::Void _ctor_16(::System::String* res, ::Il2CppArray<::System::String*>* args, ::System::Exception* innerException, ::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Exception*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_16_OFFSET))(this, res, args, innerException, lineNumber, linePosition);
		}

		::System::Void _ctor_17(::System::String* res, ::Il2CppArray<::System::String*>* args, ::System::Exception* innerException, ::System::Int32 lineNumber, ::System::Int32 linePosition, ::System::String* sourceUri)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Exception*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_17_OFFSET))(this, res, args, innerException, lineNumber, linePosition, sourceUri);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		static ::System::String* FormatUserMessage(::System::String* message, ::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_FORMATUSERMESSAGE_OFFSET))(message, lineNumber, linePosition);
		}

		static ::System::String* CreateMessage(::System::String* res, ::Il2CppArray<::System::String*>* args, ::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_CREATEMESSAGE_OFFSET))(res, args, lineNumber, linePosition);
		}

		static ::Il2CppArray<::System::String*>* BuildCharExceptionArgs(::System::String* data, ::System::Int32 invCharIndex)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_OFFSET))(data, invCharIndex);
		}

		static ::Il2CppArray<::System::String*>* BuildCharExceptionArgs_1(::Il2CppArray<::System::Char>* data, ::System::Int32 length, ::System::Int32 invCharIndex)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_1_OFFSET))(data, length, invCharIndex);
		}

		static ::Il2CppArray<::System::String*>* BuildCharExceptionArgs_2(::System::Char invChar, ::System::Char nextChar)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_2_OFFSET))(invChar, nextChar);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}
	};
}
