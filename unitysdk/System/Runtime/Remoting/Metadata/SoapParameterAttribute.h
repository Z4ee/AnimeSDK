#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/Metadata/SoapAttribute.h"

#define SYSTEM_RUNTIME_REMOTING_METADATA_SOAPPARAMETERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDD2440)

namespace System::Runtime::Remoting::Metadata
{
	inline static constexpr unsigned int SoapParameterAttribute_TypeDefinitionIndex = 1288;

	class SoapParameterAttribute : public ::System::Runtime::Remoting::Metadata::SoapAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_METADATA_SOAPPARAMETERATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
