#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Unity/Jobs/LowLevel/Unsafe/JobRanges.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

namespace Unity::Jobs
{
	inline static constexpr unsigned int IJobExtensions_JobStruct_1_ExecuteJobFunction_TypeDefinitionIndex = 3948;

	template <typename T>
	class IJobExtensions_JobStruct_1_ExecuteJobFunction : public ::System::MulticastDelegate
	{
	public:
	};
}
