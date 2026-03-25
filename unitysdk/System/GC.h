#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/CompilerServices/Ephemeron.h"

#define SYSTEM_GC_COLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x162EADF0)
#define SYSTEM_GC_COLLECT_OFFSET UNITYSDK_OFFSET(0x162EAD60)
#define SYSTEM_GC_GETCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x162EACF0)
#define SYSTEM_GC_GETMAXGENERATION_OFFSET UNITYSDK_OFFSET(0x162EAD00)
#define SYSTEM_GC_GETTOTALMEMORY_OFFSET UNITYSDK_OFFSET(0x162EAFC0)
#define SYSTEM_GC_GET_EPHEMERON_TOMBSTONE_OFFSET UNITYSDK_OFFSET(0x162EAD50)
#define SYSTEM_GC_GET_MAXGENERATION_OFFSET UNITYSDK_OFFSET(0x162EADC0)
#define SYSTEM_GC_INTERNALCOLLECT_OFFSET UNITYSDK_OFFSET(0x162EAD10)
#define SYSTEM_GC_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x162EAE60)
#define SYSTEM_GC_REGISTER_EPHEMERON_ARRAY_OFFSET UNITYSDK_OFFSET(0x162EAD40)
#define SYSTEM_GC_REREGISTERFORFINALIZE_OFFSET UNITYSDK_OFFSET(0x162EAF40)
#define SYSTEM_GC_SUPPRESSFINALIZE_OFFSET UNITYSDK_OFFSET(0x162EAEB0)
#define SYSTEM_GC_WAITFORPENDINGFINALIZERS_OFFSET UNITYSDK_OFFSET(0x162EAE70)
#define SYSTEM_GC__CCTOR_OFFSET UNITYSDK_OFFSET(0x162EB000)
#define SYSTEM_GC__REREGISTERFORFINALIZE_OFFSET UNITYSDK_OFFSET(0x162EAF10)
#define SYSTEM_GC__SUPPRESSFINALIZE_OFFSET UNITYSDK_OFFSET(0x162EAE80)

namespace System
{
	inline static constexpr unsigned int GC_TypeDefinitionIndex = 251;

	class GC : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_EPHEMERON_TOMBSTONE()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GC_TypeDefinitionIndex)->GetStaticField(0x4570);
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

		static ::System::Void register_ephemeron_array(::Il2CppArray<::System::Runtime::CompilerServices::Ephemeron>* array)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Runtime::CompilerServices::Ephemeron>*))((::PBYTE)hIl2Cpp + SYSTEM_GC_REGISTER_EPHEMERON_ARRAY_OFFSET))(array);
		}

		static ::System::Object* get_ephemeron_tombstone()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GC_GET_EPHEMERON_TOMBSTONE_OFFSET))();
		}

		static ::System::Void Collect()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GC_COLLECT_OFFSET))();
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

		static ::System::Void WaitForPendingFinalizers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GC_WAITFORPENDINGFINALIZERS_OFFSET))();
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
