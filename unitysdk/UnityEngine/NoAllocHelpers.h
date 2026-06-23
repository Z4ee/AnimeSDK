#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_NOALLOCHELPERS_EXTRACTARRAYFROMLIST_OFFSET UNITYSDK_OFFSET(0x1D433500)
#define UNITYENGINE_NOALLOCHELPERS_INTERNAL_RESIZELIST_OFFSET UNITYSDK_OFFSET(0x1D4334F0)
#define UNITYENGINE_NOALLOCHELPERS_SAFELENGTH_OFFSET UNITYSDK_OFFSET(0x1D4333E0)
#define UNITYENGINE_NOALLOCHELPERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D433510)

namespace UnityEngine
{
	inline static constexpr unsigned int NoAllocHelpers_TypeDefinitionIndex = 5353;

	class NoAllocHelpers : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NOALLOCHELPERS__CTOR_OFFSET))(this);
		}

		static ::System::Int32 SafeLength(::System::Array* values)
		{
			return ((::System::Int32(*)(::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_NOALLOCHELPERS_SAFELENGTH_OFFSET))(values);
		}

		static ::System::Void Internal_ResizeList(::System::Object* list, ::System::Int32 size)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NOALLOCHELPERS_INTERNAL_RESIZELIST_OFFSET))(list, size);
		}

		static ::System::Array* ExtractArrayFromList(::System::Object* list)
		{
			return ((::System::Array*(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_NOALLOCHELPERS_EXTRACTARRAYFROMLIST_OFFSET))(list);
		}
	};
}
