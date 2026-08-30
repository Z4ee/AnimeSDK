#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERATTRIBUTE_GET_BUILDERTYPE_OFFSET UNITYSDK_OFFSET(0x1EA9C290)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA9C2A0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncMethodBuilderAttribute_TypeDefinitionIndex = 42530;

	class AsyncMethodBuilderAttribute : public ::System::Attribute
	{
	public:
		::System::Type* _BuilderType_k__BackingField; // 0x10

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::Type* get_BuilderType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERATTRIBUTE_GET_BUILDERTYPE_OFFSET))(this);
		}
	};
}
