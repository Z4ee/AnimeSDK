#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_COMPILERFEATUREREQUIREDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF122C0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CompilerFeatureRequiredAttribute_TypeDefinitionIndex = 35206;

	class CompilerFeatureRequiredAttribute : public ::System::Attribute
	{
	public:
		::System::String* _FeatureName_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_COMPILERFEATUREREQUIREDATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
