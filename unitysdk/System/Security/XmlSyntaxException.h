#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BBE9190)
#define SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BBE9270)
#define SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1BBE5AA0)
#define SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1BBE5B10)
#define SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1BBECC40)
#define SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBE31A0)

namespace System::Security
{
	inline static constexpr unsigned int XmlSyntaxException_TypeDefinitionIndex = 955;

	class XmlSyntaxException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_3_OFFSET))(this, a1);
		}

		::System::Void _ctor_4(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_4_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_5(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_5_OFFSET))(this, a1, a2);
		}
	};
}
