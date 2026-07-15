#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Runtime::InteropServices { template <typename T> class CollectionsMarshal_FillCollection_1; }

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int CollectionsMarshal_FillCollection_1_TypeDefinitionIndex = 6330;

	template <typename T>
	class CollectionsMarshal_FillCollection_1 : public ::System::Object
	{
	public:
		::System::Int32 _count_P; // 0x0
		static ::System::Runtime::InteropServices::CollectionsMarshal_FillCollection_1<T>** StaticGet_Instance()
		{
			return (::System::Runtime::InteropServices::CollectionsMarshal_FillCollection_1<T>**)Il2CppClass::FromTypeDefinitionIndex(CollectionsMarshal_FillCollection_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Int32 _Count_k__BackingField; // 0x0
	};
}
