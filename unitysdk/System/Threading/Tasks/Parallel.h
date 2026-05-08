#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/Tasks/ParallelLoopResult.h"

namespace System { class Exception; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Threading::Tasks { class ParallelLoopState; }
namespace System::Threading::Tasks { class ParallelOptions; }

#define SYSTEM_THREADING_TASKS_PARALLEL_FOR_OFFSET UNITYSDK_OFFSET(0x19E200B0)
#define SYSTEM_THREADING_TASKS_PARALLEL_THROWIFREDUCABLETOSINGLEOCE_OFFSET UNITYSDK_OFFSET(0x19E201A0)
#define SYSTEM_THREADING_TASKS_PARALLEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E205B0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Parallel_TypeDefinitionIndex = 887;

	class Parallel : public ::System::Object
	{
	public:
		static ::System::Threading::Tasks::ParallelOptions** StaticGet_s_defaultParallelOptions()
		{
			return (::System::Threading::Tasks::ParallelOptions**)Il2CppClass::FromTypeDefinitionIndex(Parallel_TypeDefinitionIndex)->GetStaticField(0xCC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLEL__CCTOR_OFFSET))();
		}

		static ::System::Threading::Tasks::ParallelLoopResult For(::System::Int32 fromInclusive, ::System::Int32 toExclusive, ::System::Action_1<::System::Int32>* body)
		{
			return ((::System::Threading::Tasks::ParallelLoopResult(*)(::System::Int32, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLEL_FOR_OFFSET))(fromInclusive, toExclusive, body);
		}

		static ::System::Void ThrowIfReducableToSingleOCE(::System::Collections::Generic::IEnumerable_1<::System::Exception*>* excCollection, ::System::Threading::CancellationToken ct)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::Exception*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLEL_THROWIFREDUCABLETOSINGLEOCE_OFFSET))(excCollection, ct);
		}
	};
}
