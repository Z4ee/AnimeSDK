#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_XML_XPATH_XPATHEXCEPTION_CREATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x19893B20)
#define SYSTEM_XML_XPATH_XPATHEXCEPTION_CREATE_1_OFFSET UNITYSDK_OFFSET(0x198941E0)
#define SYSTEM_XML_XPATH_XPATHEXCEPTION_CREATE_2_OFFSET UNITYSDK_OFFSET(0x19894320)
#define SYSTEM_XML_XPATH_XPATHEXCEPTION_CREATE_OFFSET UNITYSDK_OFFSET(0x19894020)
#define SYSTEM_XML_XPATH_XPATHEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x19893C90)
#define SYSTEM_XML_XPATH_XPATHEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x19894480)
#define SYSTEM_XML_XPATH_XPATHEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19893E10)
#define SYSTEM_XML_XPATH_XPATHEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19893E30)
#define SYSTEM_XML_XPATH_XPATHEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x19894120)
#define SYSTEM_XML_XPATH_XPATHEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x19893F60)
#define SYSTEM_XML_XPATH_XPATHEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19893830)

namespace System::Xml::XPath
{
	inline static constexpr unsigned int XPathException_TypeDefinitionIndex = 1845;

	class XPathException : public ::System::SystemException
	{
	public:
		::System::String* res; // 0x88
		::System::String* message; // 0x90
		::Il2CppArray<::System::String*>* args; // 0x98

		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXCEPTION__CTOR_OFFSET))(this, info, context);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXCEPTION__CTOR_2_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_3(::System::String* res, ::Il2CppArray<::System::String*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXCEPTION__CTOR_3_OFFSET))(this, res, args);
		}

		::System::Void _ctor_4(::System::String* res, ::Il2CppArray<::System::String*>* args, ::System::Exception* inner)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXCEPTION__CTOR_4_OFFSET))(this, res, args, inner);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		static ::System::Xml::XPath::XPathException* Create(::System::String* res)
		{
			return ((::System::Xml::XPath::XPathException*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXCEPTION_CREATE_OFFSET))(res);
		}

		static ::System::Xml::XPath::XPathException* Create_1(::System::String* res, ::System::String* arg)
		{
			return ((::System::Xml::XPath::XPathException*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXCEPTION_CREATE_1_OFFSET))(res, arg);
		}

		static ::System::Xml::XPath::XPathException* Create_2(::System::String* res, ::System::String* arg, ::System::String* arg2)
		{
			return ((::System::Xml::XPath::XPathException*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXCEPTION_CREATE_2_OFFSET))(res, arg, arg2);
		}

		static ::System::String* CreateMessage(::System::String* res, ::Il2CppArray<::System::String*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXCEPTION_CREATEMESSAGE_OFFSET))(res, args);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}
	};
}
