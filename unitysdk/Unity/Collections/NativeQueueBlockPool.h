#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeQueueBlockPoolData.h"

namespace System { class EventArgs; }

#define UNITY_COLLECTIONS_NATIVEQUEUEBLOCKPOOL_GET_QUEUEBLOCKPOOL_OFFSET UNITYSDK_OFFSET(0x1E8343B0)
#define UNITY_COLLECTIONS_NATIVEQUEUEBLOCKPOOL_ONDOMAINUNLOAD_OFFSET UNITYSDK_OFFSET(0x1E834580)

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeQueueBlockPool_TypeDefinitionIndex = 18464;

	class NativeQueueBlockPool : public ::System::Object
	{
	public:
		static ::Unity::Collections::NativeQueueBlockPoolData** StaticGet_pData()
		{
			return (::Unity::Collections::NativeQueueBlockPoolData**)Il2CppClass::FromTypeDefinitionIndex(NativeQueueBlockPool_TypeDefinitionIndex)->GetStaticField(0x4130);
		}

		static ::Unity::Collections::NativeQueueBlockPoolData* get_QueueBlockPool()
		{
			return ((::Unity::Collections::NativeQueueBlockPoolData*(*)())((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEQUEUEBLOCKPOOL_GET_QUEUEBLOCKPOOL_OFFSET))();
		}

		static ::System::Void OnDomainUnload(::System::Object* sender, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEQUEUEBLOCKPOOL_ONDOMAINUNLOAD_OFFSET))(sender, e);
		}
	};
}
