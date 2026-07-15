#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_COLLECTIONSMARSHAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2FABF0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int CollectionsMarshal_TypeDefinitionIndex = 6329;

	class CollectionsMarshal : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_ListSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CollectionsMarshal_TypeDefinitionIndex)->GetStaticField(0x420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COLLECTIONSMARSHAL__CCTOR_OFFSET))();
		}
	};
}
