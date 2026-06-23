#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Xml { class XmlNode; }

#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_GETXMLNODEFILENAME_OFFSET UNITYSDK_OFFSET(0x1CEC8200)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_GETXMLNODELINENUMBER_OFFSET UNITYSDK_OFFSET(0x1CEC8240)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_GET_BAREMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CEC8140)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1CEC8180)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_GET_LINE_OFFSET UNITYSDK_OFFSET(0x1CEC81C0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CEC7F80)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CEC7FC0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1CEC8000)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1CEC8040)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1CEC8080)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1CEC80C0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1CEC8100)
#define SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC7F40)

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigurationException_TypeDefinitionIndex = 4066;

	class ConfigurationException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION__CTOR_1_OFFSET))(this, info, context);
		}

		::System::Void _ctor_2(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION__CTOR_2_OFFSET))(this, message);
		}

		::System::Void _ctor_3(::System::String* message, ::System::Exception* inner)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION__CTOR_3_OFFSET))(this, message, inner);
		}

		::System::Void _ctor_4(::System::String* message, ::System::Exception* inner, ::System::String* filename, ::System::Int32 line)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION__CTOR_4_OFFSET))(this, message, inner, filename, line);
		}

		::System::Void _ctor_5(::System::String* message, ::System::Exception* inner, ::System::Xml::XmlNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION__CTOR_5_OFFSET))(this, message, inner, node);
		}

		::System::Void _ctor_6(::System::String* message, ::System::String* filename, ::System::Int32 line)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION__CTOR_6_OFFSET))(this, message, filename, line);
		}

		::System::Void _ctor_7(::System::String* message, ::System::Xml::XmlNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION__CTOR_7_OFFSET))(this, message, node);
		}

		::System::String* get_BareMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_GET_BAREMESSAGE_OFFSET))(this);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_GET_FILENAME_OFFSET))(this);
		}

		::System::Int32 get_Line()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_GET_LINE_OFFSET))(this);
		}

		static ::System::String* GetXmlNodeFilename(::System::Xml::XmlNode* node)
		{
			return ((::System::String*(*)(::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_GETXMLNODEFILENAME_OFFSET))(node);
		}

		static ::System::Int32 GetXmlNodeLineNumber(::System::Xml::XmlNode* node)
		{
			return ((::System::Int32(*)(::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONEXCEPTION_GETXMLNODELINENUMBER_OFFSET))(node);
		}
	};
}
