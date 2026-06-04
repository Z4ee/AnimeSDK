#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPATTRIBUTE_GET_USEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18797370)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPATTRIBUTE_GET_XMLNAMESPACE_OFFSET UNITYSDK_OFFSET(0x18797380)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPATTRIBUTE_SETREFLECTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x18797390)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18797360)

namespace System::Runtime::Remoting::Metadata
{
	inline static constexpr unsigned int SoapAttribute_TypeDefinitionIndex = 1276;

	class SoapAttribute : public ::System::Attribute
	{
	public:
		::System::String* ProtXmlNamespace; // 0x10
		::System::Object* ReflectInfo; // 0x18
		::System::Boolean _useAttribute; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_UseAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPATTRIBUTE_GET_USEATTRIBUTE_OFFSET))(this);
		}

		::System::String* get_XmlNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPATTRIBUTE_GET_XMLNAMESPACE_OFFSET))(this);
		}

		::System::Void SetReflectionObject(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPATTRIBUTE_SETREFLECTIONOBJECT_OFFSET))(this, a1);
		}
	};
}
