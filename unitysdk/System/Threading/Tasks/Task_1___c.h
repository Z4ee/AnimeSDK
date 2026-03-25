#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }
namespace System::Threading::Tasks { template <typename T> class Task_1___c; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Task_1___c_TypeDefinitionIndex = 885;

	template <typename TResult>
	class Task_1___c : public ::System::Object
	{
	public:
		static ::System::Threading::Tasks::Task_1___c<TResult>** StaticGet___9()
		{
			return (::System::Threading::Tasks::Task_1___c<TResult>**)Il2CppClass::FromTypeDefinitionIndex(Task_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
