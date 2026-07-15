#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_TUPLEELEMENTNAMESATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A824B00)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int TupleElementNamesAttribute_TypeDefinitionIndex = 1341;

	class TupleElementNamesAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::String*>* _transformNames; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TUPLEELEMENTNAMESATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
