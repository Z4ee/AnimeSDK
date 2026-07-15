#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_NOALLOCHELPERS_EXTRACTARRAYFROMLIST_OFFSET UNITYSDK_OFFSET(0x1D118210)
#define UNITYENGINE_NOALLOCHELPERS_INTERNAL_RESIZELIST_OFFSET UNITYSDK_OFFSET(0x1D11D120)
#define UNITYENGINE_NOALLOCHELPERS_SAFELENGTH_OFFSET UNITYSDK_OFFSET(0x1D114890)

namespace UnityEngine
{
	inline static constexpr unsigned int NoAllocHelpers_TypeDefinitionIndex = 4322;

	class NoAllocHelpers : public ::System::Object
	{
	public:
		static ::System::Int32 SafeLength(::System::Array* a1)
		{
			return ((::System::Int32(*)(::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_NOALLOCHELPERS_SAFELENGTH_OFFSET))(a1);
		}

		static ::System::Void Internal_ResizeList(::System::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NOALLOCHELPERS_INTERNAL_RESIZELIST_OFFSET))(a1, a2);
		}

		static ::System::Array* ExtractArrayFromList(::System::Object* a1)
		{
			return ((::System::Array*(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_NOALLOCHELPERS_EXTRACTARRAYFROMLIST_OFFSET))(a1);
		}
	};
}
