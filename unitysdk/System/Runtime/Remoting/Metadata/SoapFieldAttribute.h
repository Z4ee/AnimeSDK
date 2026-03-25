#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/Metadata/SoapAttribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPFIELDATTRIBUTE_GET_XMLELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x163BA4C0)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPFIELDATTRIBUTE_ISINTEROPXMLELEMENT_OFFSET UNITYSDK_OFFSET(0x163BA4D0)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPFIELDATTRIBUTE_SETREFLECTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x163BA4E0)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x163BA4B0)

namespace System::Runtime::Remoting::Metadata
{
	inline static constexpr unsigned int SoapFieldAttribute_TypeDefinitionIndex = 1276;

	class SoapFieldAttribute : public ::System::Runtime::Remoting::Metadata::SoapAttribute
	{
	public:
		::System::String* _elementName; // 0x28
		::System::Boolean _isElement; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPFIELDATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::String* get_XmlElementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPFIELDATTRIBUTE_GET_XMLELEMENTNAME_OFFSET))(this);
		}

		::System::Boolean IsInteropXmlElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPFIELDATTRIBUTE_ISINTEROPXMLELEMENT_OFFSET))(this);
		}

		::System::Void SetReflectionObject(::System::Object* reflectionObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPFIELDATTRIBUTE_SETREFLECTIONOBJECT_OFFSET))(this, reflectionObject);
		}
	};
}
