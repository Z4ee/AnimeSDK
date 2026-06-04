#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE052B0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncMethodBuilderAttribute_TypeDefinitionIndex = 7052;

	class AsyncMethodBuilderAttribute : public ::System::Attribute
	{
	public:
		::System::Type* _BuilderType_k__BackingField; // 0x10

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
