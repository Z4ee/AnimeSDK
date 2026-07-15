#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::CompilerServices { template <typename T> class ReadOnlyCollectionBuilder_1; }

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ReadOnlyCollectionBuilder_1_Enumerator_TypeDefinitionIndex = 3662;

	template <typename T>
	class ReadOnlyCollectionBuilder_1_Enumerator : public ::System::Object
	{
	public:
		::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>* _builder; // 0x0
		::System::Int32 _version; // 0x0
		::System::Int32 _index; // 0x0
		T _current; // 0x0
	};
}
