#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Rendering/BatchAnimEventObjCB.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchAnimEventObjCBCache_TypeDefinitionIndex = 4783;

	struct alignas(1) BatchAnimEventObjCBCache
	{
		static ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchAnimEventObjCB>* StaticGet_eventObjectsCache()
		{
			return (::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchAnimEventObjCB>*)Il2CppClass::FromTypeDefinitionIndex(BatchAnimEventObjCBCache_TypeDefinitionIndex)->GetStaticField(0x80C0);
		}
	};
}
