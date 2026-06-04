#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/Metadata/SoapAttribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_ISINTEROPXMLELEMENT_OFFSET UNITYSDK_OFFSET(0x187977A0)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_ISINTEROPXMLTYPE_OFFSET UNITYSDK_OFFSET(0x187977B0)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_USEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18797750)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_XMLELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x18797760)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_XMLNAMESPACE_OFFSET UNITYSDK_OFFSET(0x18797770)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_XMLTYPENAMESPACE_OFFSET UNITYSDK_OFFSET(0x18797790)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_XMLTYPENAME_OFFSET UNITYSDK_OFFSET(0x18797780)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_SETREFLECTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x187977C0)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18797740)

namespace System::Runtime::Remoting::Metadata
{
	inline static constexpr unsigned int SoapTypeAttribute_TypeDefinitionIndex = 1280;

	class SoapTypeAttribute : public ::System::Runtime::Remoting::Metadata::SoapAttribute
	{
	public:
		::System::String* _xmlTypeNamespace; // 0x28
		::System::String* _xmlTypeName; // 0x30
		::System::String* _xmlNamespace; // 0x38
		::System::String* _xmlElementName; // 0x40
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

		::System::String* get_XmlElementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_XMLELEMENTNAME_OFFSET))(this);
		}

		::System::String* get_XmlNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_XMLNAMESPACE_OFFSET))(this);
		}

		::System::String* get_XmlTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_XMLTYPENAME_OFFSET))(this);
		}

		::System::String* get_XmlTypeNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_XMLTYPENAMESPACE_OFFSET))(this);
		}

		::System::Boolean get_IsInteropXmlElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_ISINTEROPXMLELEMENT_OFFSET))(this);
		}

		::System::Boolean get_IsInteropXmlType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_GET_ISINTEROPXMLTYPE_OFFSET))(this);
		}

		::System::Void SetReflectionObject(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPTYPEATTRIBUTE_SETREFLECTIONOBJECT_OFFSET))(this, a1);
		}
	};
}
