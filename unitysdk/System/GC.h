#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/GCCollectionMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/CompilerServices/Ephemeron.h"

#define SYSTEM_GC_ADDMEMORYPRESSURE_OFFSET UNITYSDK_OFFSET(0x1A7B8560)
#define SYSTEM_GC_COLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1A7B8A90)
#define SYSTEM_GC_COLLECT_1_OFFSET UNITYSDK_OFFSET(0x1A7B8840)
#define SYSTEM_GC_COLLECT_2_OFFSET UNITYSDK_OFFSET(0x1A7B8790)
#define SYSTEM_GC_COLLECT_3_OFFSET UNITYSDK_OFFSET(0x1A7B8950)
#define SYSTEM_GC_COLLECT_4_OFFSET UNITYSDK_OFFSET(0x1A7B89B0)
#define SYSTEM_GC_COLLECT_OFFSET UNITYSDK_OFFSET(0x1A7B8680)
#define SYSTEM_GC_GETCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1A7B84E0)
#define SYSTEM_GC_GETMAXGENERATION_OFFSET UNITYSDK_OFFSET(0x1A7B84F0)
#define SYSTEM_GC_GETTOTALMEMORY_OFFSET UNITYSDK_OFFSET(0x1A7B8C90)
#define SYSTEM_GC_GET_EPHEMERON_TOMBSTONE_OFFSET UNITYSDK_OFFSET(0x1A7B8550)
#define SYSTEM_GC_GET_MAXGENERATION_OFFSET UNITYSDK_OFFSET(0x1A7B88F0)
#define SYSTEM_GC_INTERNALCOLLECT_OFFSET UNITYSDK_OFFSET(0x1A7B8500)
#define SYSTEM_GC_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x1A7B8B20)
#define SYSTEM_GC_RECORDPRESSURE_OFFSET UNITYSDK_OFFSET(0x1A7B8530)
#define SYSTEM_GC_REGISTER_EPHEMERON_ARRAY_OFFSET UNITYSDK_OFFSET(0x1A7B8540)
#define SYSTEM_GC_REMOVEMEMORYPRESSURE_OFFSET UNITYSDK_OFFSET(0x1A7B85F0)
#define SYSTEM_GC_REREGISTERFORFINALIZE_OFFSET UNITYSDK_OFFSET(0x1A7B8C10)
#define SYSTEM_GC_SUPPRESSFINALIZE_OFFSET UNITYSDK_OFFSET(0x1A7B8B60)
#define SYSTEM_GC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7B8CD0)
#define SYSTEM_GC__REREGISTERFORFINALIZE_OFFSET UNITYSDK_OFFSET(0x1A7B8BE0)
#define SYSTEM_GC__SUPPRESSFINALIZE_OFFSET UNITYSDK_OFFSET(0x1A7B8B30)

namespace System
{
	inline static constexpr unsigned int GC_TypeDefinitionIndex = 238;

	class GC : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_EPHEMERON_TOMBSTONE()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GC_TypeDefinitionIndex)->GetStaticField(0x1170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GC__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetCollectionCount(::System::Int32 generation)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GC_GETCOLLECTIONCOUNT_OFFSET))(generation);
		}

		static ::System::Int32 GetMaxGeneration()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_GC_GETMAXGENERATION_OFFSET))();
		}

		static ::System::Void InternalCollect(::System::Int32 generation)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GC_INTERNALCOLLECT_OFFSET))(generation);
		}

		static ::System::Void RecordPressure(::System::Int64 bytesAllocated)
		{
			return ((::System::Void(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_GC_RECORDPRESSURE_OFFSET))(bytesAllocated);
		}

		static ::System::Void register_ephemeron_array(::Il2CppArray<::System::Runtime::CompilerServices::Ephemeron>* array)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Runtime::CompilerServices::Ephemeron>*))((::PBYTE)hIl2Cpp + SYSTEM_GC_REGISTER_EPHEMERON_ARRAY_OFFSET))(array);
		}

		static ::System::Object* get_ephemeron_tombstone()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GC_GET_EPHEMERON_TOMBSTONE_OFFSET))();
		}

		static ::System::Void AddMemoryPressure(::System::Int64 bytesAllocated)
		{
			return ((::System::Void(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_GC_ADDMEMORYPRESSURE_OFFSET))(bytesAllocated);
		}

		static ::System::Void RemoveMemoryPressure(::System::Int64 bytesAllocated)
		{
			return ((::System::Void(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_GC_REMOVEMEMORYPRESSURE_OFFSET))(bytesAllocated);
		}

		static ::System::Void Collect(::System::Int32 generation)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GC_COLLECT_OFFSET))(generation);
		}

		static ::System::Void Collect_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GC_COLLECT_1_OFFSET))();
		}

		static ::System::Void Collect_2(::System::Int32 generation, ::System::GCCollectionMode mode)
		{
			return ((::System::Void(*)(::System::Int32, ::System::GCCollectionMode))((::PBYTE)hIl2Cpp + SYSTEM_GC_COLLECT_2_OFFSET))(generation, mode);
		}

		static ::System::Void Collect_3(::System::Int32 generation, ::System::GCCollectionMode mode, ::System::Boolean blocking)
		{
			return ((::System::Void(*)(::System::Int32, ::System::GCCollectionMode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GC_COLLECT_3_OFFSET))(generation, mode, blocking);
		}

		static ::System::Void Collect_4(::System::Int32 generation, ::System::GCCollectionMode mode, ::System::Boolean blocking, ::System::Boolean compacting)
		{
			return ((::System::Void(*)(::System::Int32, ::System::GCCollectionMode, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GC_COLLECT_4_OFFSET))(generation, mode, blocking, compacting);
		}

		static ::System::Int32 CollectionCount(::System::Int32 generation)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GC_COLLECTIONCOUNT_OFFSET))(generation);
		}

		static ::System::Void KeepAlive(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GC_KEEPALIVE_OFFSET))(obj);
		}

		static ::System::Int32 get_MaxGeneration()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_GC_GET_MAXGENERATION_OFFSET))();
		}

		static ::System::Void _SuppressFinalize(::System::Object* o)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GC__SUPPRESSFINALIZE_OFFSET))(o);
		}

		static ::System::Void SuppressFinalize(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GC_SUPPRESSFINALIZE_OFFSET))(obj);
		}

		static ::System::Void _ReRegisterForFinalize(::System::Object* o)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GC__REREGISTERFORFINALIZE_OFFSET))(o);
		}

		static ::System::Void ReRegisterForFinalize(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GC_REREGISTERFORFINALIZE_OFFSET))(obj);
		}

		static ::System::Int64 GetTotalMemory(::System::Boolean forceFullCollection)
		{
			return ((::System::Int64(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GC_GETTOTALMEMORY_OFFSET))(forceFullCollection);
		}
	};
}
