#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/Metadata/SoapAttribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_USEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E449150)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_XMLNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E449160)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_SETREFLECTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x1E449170)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E449140)

namespace System::Runtime::Remoting::Metadata
{
	inline static constexpr unsigned int SoapTypeAttribute_TypeDefinitionIndex = 1322;

	class SoapTypeAttribute : public ::System::Runtime::Remoting::Metadata::SoapAttribute
	{
	public:
		::System::String* _xmlNamespace; // 0x28
		::System::String* _xmlTypeName; // 0x30
		::System::String* _xmlElementName; // 0x38
		::System::String* _xmlTypeNamespace; // 0x40
		::System::Boolean _isElement; // 0x48
		::System::Boolean _isType; // 0x49
		::System::Boolean _useAttribute; // 0x4A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_UseAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_USEATTRIBUTE_OFFSET))(this);
		}

		::System::String* get_XmlNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_XMLNAMESPACE_OFFSET))(this);
		}

		::System::Void SetReflectionObject(::System::Object* reflectionObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_SETREFLECTIONOBJECT_OFFSET))(this, reflectionObject);
		}
	};
}
