#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19F8EB30)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncMethodBuilderAttribute_TypeDefinitionIndex = 9188;

	class AsyncMethodBuilderAttribute : public ::System::Attribute
	{
	public:
		::System::Type* _BuilderType_k__BackingField; // 0x10

		::System::Void _ctor(::System::Type* builderType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERATTRIBUTE__CTOR_OFFSET))(this, builderType);
		}
	};
}
