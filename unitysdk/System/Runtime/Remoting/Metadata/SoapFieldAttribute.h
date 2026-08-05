#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/Metadata/SoapAttribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPFIELDATTRIBUTE_SETREFLECTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x1E412D30)
#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E412D20)

namespace System::Runtime::Remoting::Metadata
{
	inline static constexpr unsigned int SoapFieldAttribute_TypeDefinitionIndex = 1319;

	class SoapFieldAttribute : public ::System::Runtime::Remoting::Metadata::SoapAttribute
	{
	public:
		::System::String* _elementName; // 0x28
		::System::Boolean _isElement; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPFIELDATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void SetReflectionObject(::System::Object* reflectionObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPFIELDATTRIBUTE_SETREFLECTIONOBJECT_OFFSET))(this, reflectionObject);
		}
	};
}
