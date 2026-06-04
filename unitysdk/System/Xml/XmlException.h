#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Xml { class IXmlLineInfo; }

#define SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_1_OFFSET UNITYSDK_OFFSET(0x1AEC64E0)
#define SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_2_OFFSET UNITYSDK_OFFSET(0x1AEC6270)
#define SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_OFFSET UNITYSDK_OFFSET(0x1AEC11E0)
#define SYSTEM_XML_XMLEXCEPTION_CREATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AEC5040)
#define SYSTEM_XML_XMLEXCEPTION_FORMATUSERMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AEC5730)
#define SYSTEM_XML_XMLEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1AEC52F0)
#define SYSTEM_XML_XMLEXCEPTION_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1AEC6540)
#define SYSTEM_XML_XMLEXCEPTION_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1AEC6550)
#define SYSTEM_XML_XMLEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1AEC6560)
#define SYSTEM_XML_XMLEXCEPTION_GET_RESSTRING_OFFSET UNITYSDK_OFFSET(0x1AEC6580)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_10_OFFSET UNITYSDK_OFFSET(0x1AEC5BB0)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_11_OFFSET UNITYSDK_OFFSET(0x1AEC5E00)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_12_OFFSET UNITYSDK_OFFSET(0x1AEC5F00)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_13_OFFSET UNITYSDK_OFFSET(0x1AEC6010)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_14_OFFSET UNITYSDK_OFFSET(0x1AEC60D0)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_15_OFFSET UNITYSDK_OFFSET(0x1AEC61A0)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_16_OFFSET UNITYSDK_OFFSET(0x1AEC5880)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AEC5580)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AEC55B0)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1AEC55E0)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1AEC5600)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1AEC57D0)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1AEC5960)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1AEC5A50)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1AEC5B40)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_9_OFFSET UNITYSDK_OFFSET(0x1AEC5DE0)
#define SYSTEM_XML_XMLEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEC4BE0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlException_TypeDefinitionIndex = 1951;

	class XmlException : public ::System::SystemException
	{
	public:
		::System::String* sourceUri; // 0x88
		::System::String* res; // 0x90
		::System::String* message; // 0x98
		::Il2CppArray<::System::String*>* args; // 0xA0
		::System::Int32 lineNumber; // 0xA8
		::System::Int32 linePosition; // 0xAC

		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::Exception* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_4(::System::String* a1, ::System::Exception* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_4_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_5(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_5_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_6(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_6_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_7(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_7_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_8(::System::String* a1, ::System::String* a2, ::System::Xml::IXmlLineInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::IXmlLineInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_8_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_9(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Xml::IXmlLineInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Xml::IXmlLineInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_9_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_10(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Xml::IXmlLineInfo* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Xml::IXmlLineInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_10_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_11(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_11_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_12(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_12_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_13(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_13_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_14(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_14_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_15(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Exception* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Exception*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_15_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_16(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Exception* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Exception*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION__CTOR_16_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		static ::System::String* FormatUserMessage(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_FORMATUSERMESSAGE_OFFSET))(a1, a2, a3);
		}

		static ::System::String* CreateMessage(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_CREATEMESSAGE_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::System::String*>* BuildCharExceptionArgs(::System::String* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::String*>* BuildCharExceptionArgs_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_1_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::String*>* BuildCharExceptionArgs_2(::System::Char a1, ::System::Char a2)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_2_OFFSET))(a1, a2);
		}

		::System::Int32 get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_GET_LINEPOSITION_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::String* get_ResString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_GET_RESSTRING_OFFSET))(this);
		}
	};
}
