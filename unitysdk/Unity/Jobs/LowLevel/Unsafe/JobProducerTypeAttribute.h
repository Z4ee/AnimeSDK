#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBPRODUCERTYPEATTRIBUTE_GET_PRODUCERTYPE_OFFSET UNITYSDK_OFFSET(0x1B653C10)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBPRODUCERTYPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B653C20)

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int JobProducerTypeAttribute_TypeDefinitionIndex = 5065;

	class JobProducerTypeAttribute : public ::System::Attribute
	{
	public:
		::System::Type* _ProducerType_k__BackingField; // 0x10

		::System::Void _ctor(::System::Type* producerType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBPRODUCERTYPEATTRIBUTE__CTOR_OFFSET))(this, producerType);
		}

		::System::Type* get_ProducerType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBPRODUCERTYPEATTRIBUTE_GET_PRODUCERTYPE_OFFSET))(this);
		}
	};
}
