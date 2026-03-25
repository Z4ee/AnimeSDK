#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Diagnostics::Tracing { class ActivityFilter; }

#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER__GETFILTERASTUPLE_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x162B5A50)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER__GETFILTERASTUPLE_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_INT32_SYSTEM_INT32___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x162B5BA0)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER__GETFILTERASTUPLE_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_INT32_SYSTEM_INT32___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x162B5B30)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER__GETFILTERASTUPLE_D__7_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x162B5D40)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER__GETFILTERASTUPLE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x162B5B90)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER__GETFILTERASTUPLE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x162B5B40)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER__GETFILTERASTUPLE_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x162B5A40)
#define SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER__GETFILTERASTUPLE_D__7__CTOR_OFFSET UNITYSDK_OFFSET(0x162B54F0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int ActivityFilter__GetFilterAsTuple_d__7_TypeDefinitionIndex = 1687;

	class ActivityFilter__GetFilterAsTuple_d__7 : public ::System::Object
	{
	public:
		::System::Diagnostics::Tracing::ActivityFilter* __4__this; // 0x10
		::System::Diagnostics::Tracing::ActivityFilter* _af_5__1; // 0x18
		::System::Tuple_2<::System::Int32, ::System::Int32>* __2__current; // 0x20
		::System::Guid __3__sourceGuid; // 0x28
		::System::Int32 __l__initialThreadId; // 0x38
		::System::Int32 __1__state; // 0x3C
		::System::Guid sourceGuid; // 0x40

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER__GETFILTERASTUPLE_D__7__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER__GETFILTERASTUPLE_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER__GETFILTERASTUPLE_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Tuple_2<::System::Int32, ::System::Int32>* System_Collections_Generic_IEnumerator_System_Tuple_System_Int32_System_Int32___get_Current()
		{
			return ((::System::Tuple_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER__GETFILTERASTUPLE_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_INT32_SYSTEM_INT32___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER__GETFILTERASTUPLE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER__GETFILTERASTUPLE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>* System_Collections_Generic_IEnumerable_System_Tuple_System_Int32_System_Int32___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER__GETFILTERASTUPLE_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_INT32_SYSTEM_INT32___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ACTIVITYFILTER__GETFILTERASTUPLE_D__7_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
