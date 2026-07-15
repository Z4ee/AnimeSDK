#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::ObjectModel
{
	inline static constexpr unsigned int ObservableCollection_1_SimpleMonitor_TypeDefinitionIndex = 3002;

	template <typename T>
	class ObservableCollection_1_SimpleMonitor : public ::System::Object
	{
	public:
		::System::Int32 _busyCount; // 0x0
	};
}
