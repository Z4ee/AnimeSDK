#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_THREADING_ATOMICBOOLEAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A5B4AD0)
#define SYSTEM_THREADING_ATOMICBOOLEAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A5B4AB0)
#define SYSTEM_THREADING_ATOMICBOOLEAN_EXCHANGE_OFFSET UNITYSDK_OFFSET(0x1A5B4AA0)
#define SYSTEM_THREADING_ATOMICBOOLEAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A5B4B40)
#define SYSTEM_THREADING_ATOMICBOOLEAN_TRYRELAXEDSET_OFFSET UNITYSDK_OFFSET(0x1A5B4A80)
#define SYSTEM_THREADING_ATOMICBOOLEAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5B4B50)

namespace System::Threading
{
	inline static constexpr unsigned int AtomicBoolean_TypeDefinitionIndex = 783;

	class AtomicBoolean : public ::System::Object
	{
	public:
		::System::Int32 flag; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ATOMICBOOLEAN__CTOR_OFFSET))(this);
		}

		::System::Boolean TryRelaxedSet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ATOMICBOOLEAN_TRYRELAXEDSET_OFFSET))(this);
		}

		::System::Boolean Exchange(::System::Boolean newVal)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ATOMICBOOLEAN_EXCHANGE_OFFSET))(this, newVal);
		}

		::System::Boolean Equals(::System::Threading::AtomicBoolean* rhs)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::AtomicBoolean*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ATOMICBOOLEAN_EQUALS_OFFSET))(this, rhs);
		}

		::System::Boolean Equals_1(::System::Object* rhs)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ATOMICBOOLEAN_EQUALS_1_OFFSET))(this, rhs);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ATOMICBOOLEAN_GETHASHCODE_OFFSET))(this);
		}
	};
}
