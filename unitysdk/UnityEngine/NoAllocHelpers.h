#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_NOALLOCHELPERS_EXTRACTARRAYFROMLIST_OFFSET UNITYSDK_OFFSET(0x18A23E70)
#define UNITYENGINE_NOALLOCHELPERS_INTERNAL_RESIZELIST_OFFSET UNITYSDK_OFFSET(0x18A291D0)
#define UNITYENGINE_NOALLOCHELPERS_SAFELENGTH_OFFSET UNITYSDK_OFFSET(0x18A203A0)

namespace UnityEngine
{
	inline static constexpr unsigned int NoAllocHelpers_TypeDefinitionIndex = 4141;

	class NoAllocHelpers : public ::System::Object
	{
	public:
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
