#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBPRODUCERTYPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x189EA390)

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int JobProducerTypeAttribute_TypeDefinitionIndex = 3774;

	class JobProducerTypeAttribute : public ::System::Attribute
	{
	public:
		::System::Type* _ProducerType_k__BackingField; // 0x10

		::System::Void _ctor(::System::Type* producerType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBPRODUCERTYPEATTRIBUTE__CTOR_OFFSET))(this, producerType);
		}
	};
}
