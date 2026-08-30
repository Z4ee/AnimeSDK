#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace System::Threading
{
	inline static constexpr unsigned int ThreadLocal_1_IdManager_TypeDefinitionIndex = 819;

	template <typename T>
	class ThreadLocal_1_IdManager : public ::System::Object
	{
	public:
		::System::Int32 m_nextIdToTry; // 0x0
		::System::Collections::Generic::List_1<::System::Boolean>* m_freeIds; // 0x0
	};
}
