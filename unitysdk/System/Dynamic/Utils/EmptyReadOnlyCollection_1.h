#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int EmptyReadOnlyCollection_1_TypeDefinitionIndex = 3678;

	template <typename T>
	class EmptyReadOnlyCollection_1 : public ::System::Object
	{
	public:
		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>** StaticGet_Instance()
		{
			return (::System::Collections::ObjectModel::ReadOnlyCollection_1<T>**)Il2CppClass::FromTypeDefinitionIndex(EmptyReadOnlyCollection_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
