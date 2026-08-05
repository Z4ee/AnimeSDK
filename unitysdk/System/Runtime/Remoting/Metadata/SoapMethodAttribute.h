#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/Metadata/SoapAttribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPMETHODATTRIBUTE_GET_USEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D196D90)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPMETHODATTRIBUTE_GET_XMLNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1D196DA0)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPMETHODATTRIBUTE_SETREFLECTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x1D196DB0)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPMETHODATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D196D80)

namespace System::Runtime::Remoting::Metadata
{
	inline static constexpr unsigned int SoapMethodAttribute_TypeDefinitionIndex = 1320;

	class SoapMethodAttribute : public ::System::Runtime::Remoting::Metadata::SoapAttribute
	{
	public:
		::System::String* _responseNamespace; // 0x28
		::System::String* _soapAction; // 0x30
		::System::String* _returnElement; // 0x38
		::System::String* _namespace; // 0x40
		::System::String* _responseElement; // 0x48
		::System::Boolean _useAttribute; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPMETHODATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_UseAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPMETHODATTRIBUTE_GET_USEATTRIBUTE_OFFSET))(this);
		}

		::System::String* get_XmlNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPMETHODATTRIBUTE_GET_XMLNAMESPACE_OFFSET))(this);
		}

		::System::Void SetReflectionObject(::System::Object* reflectionObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPMETHODATTRIBUTE_SETREFLECTIONOBJECT_OFFSET))(this, reflectionObject);
		}
	};
}
