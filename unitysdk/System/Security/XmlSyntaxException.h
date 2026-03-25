#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x161F0990)
#define SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x161F0A70)
#define SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x161EDCA0)
#define SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x161EDD10)
#define SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x161F38E0)
#define SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x161EB570)

namespace System::Security
{
	inline static constexpr unsigned int XmlSyntaxException_TypeDefinitionIndex = 947;

	class XmlSyntaxException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 lineNumber)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_1_OFFSET))(this, lineNumber);
		}

		::System::Void _ctor_2(::System::Int32 lineNumber, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_2_OFFSET))(this, lineNumber, message);
		}

		::System::Void _ctor_3(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_3_OFFSET))(this, message);
		}

		::System::Void _ctor_4(::System::String* message, ::System::Exception* inner)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_4_OFFSET))(this, message, inner);
		}

		::System::Void _ctor_5(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_5_OFFSET))(this, info, context);
		}
	};
}
