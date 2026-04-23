#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_QUEUEDATA_FREE_OFFSET UNITYSDK_OFFSET(0x1A322890)
#define UNITYENGINE_RENDERING_QUEUEDATA_GET_OFFSET UNITYSDK_OFFSET(0x1A322870)
#define UNITYENGINE_RENDERING_QUEUEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A322880)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int QueueData_TypeDefinitionIndex = 33413;

	class QueueData : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::QueueData** StaticGet_free()
		{
			return (::UnityEngine::Rendering::QueueData**)Il2CppClass::FromTypeDefinitionIndex(QueueData_TypeDefinitionIndex)->GetStaticField(0x67A90);
		}
		::UnityEngine::Rendering::QueueData* next; // 0x10
		::System::Object* obj; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_QUEUEDATA__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::QueueData* Get()
		{
			return ((::UnityEngine::Rendering::QueueData*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_QUEUEDATA_GET_OFFSET))();
		}

		static ::System::Void Free(::UnityEngine::Rendering::QueueData* qd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::QueueData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_QUEUEDATA_FREE_OFFSET))(qd);
		}
	};
}
