#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define SYSTEM_LINQ_ENUMERABLE__RANGEITERATOR_D__115_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F519F60)
#define SYSTEM_LINQ_ENUMERABLE__RANGEITERATOR_D__115_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_INT32__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F51A060)
#define SYSTEM_LINQ_ENUMERABLE__RANGEITERATOR_D__115_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_INT32__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F519FB0)
#define SYSTEM_LINQ_ENUMERABLE__RANGEITERATOR_D__115_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F51A0E0)
#define SYSTEM_LINQ_ENUMERABLE__RANGEITERATOR_D__115_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F51A010)
#define SYSTEM_LINQ_ENUMERABLE__RANGEITERATOR_D__115_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F519FC0)
#define SYSTEM_LINQ_ENUMERABLE__RANGEITERATOR_D__115_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F519F50)
#define SYSTEM_LINQ_ENUMERABLE__RANGEITERATOR_D__115__CTOR_OFFSET UNITYSDK_OFFSET(0x1F519F30)

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable__RangeIterator_d__115_TypeDefinitionIndex = 4368;

	class Enumerable__RangeIterator_d__115 : public ::System::Object
	{
	public:
		::System::Int32 __3__start; // 0x10
		::System::Int32 _i_5__1; // 0x14
		::System::Int32 __l__initialThreadId; // 0x18
		::System::Int32 start; // 0x1C
		::System::Int32 count; // 0x20
		::System::Int32 __2__current; // 0x24
		::System::Int32 __1__state; // 0x28
		::System::Int32 __3__count; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE__RANGEITERATOR_D__115__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE__RANGEITERATOR_D__115_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE__RANGEITERATOR_D__115_MOVENEXT_OFFSET))(this);
		}

		::System::Int32 System_Collections_Generic_IEnumerator_System_Int32__get_Current()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE__RANGEITERATOR_D__115_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_INT32__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE__RANGEITERATOR_D__115_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE__RANGEITERATOR_D__115_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Int32>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE__RANGEITERATOR_D__115_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_INT32__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLE__RANGEITERATOR_D__115_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
