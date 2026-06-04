#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }

#define SYSTEM_COMPONENTMODEL_ARRAYSUBSETENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AF24D70)
#define SYSTEM_COMPONENTMODEL_ARRAYSUBSETENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AF24D40)
#define SYSTEM_COMPONENTMODEL_ARRAYSUBSETENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AF24D60)
#define SYSTEM_COMPONENTMODEL_ARRAYSUBSETENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF24D30)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ArraySubsetEnumerator_TypeDefinitionIndex = 2550;

	class ArraySubsetEnumerator : public ::System::Object
	{
	public:
		::System::Array* array; // 0x10
		::System::Int32 total; // 0x18
		::System::Int32 current; // 0x1C

		::System::Void _ctor(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ARRAYSUBSETENUMERATOR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ARRAYSUBSETENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ARRAYSUBSETENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ARRAYSUBSETENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
