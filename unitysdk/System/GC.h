#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/CompilerServices/Ephemeron.h"

#define SYSTEM_GC_COLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x17917480)
#define SYSTEM_GC_COLLECT_OFFSET UNITYSDK_OFFSET(0x179173F0)
#define SYSTEM_GC_GETCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x17917380)
#define SYSTEM_GC_GETMAXGENERATION_OFFSET UNITYSDK_OFFSET(0x17917390)
#define SYSTEM_GC_GETTOTALMEMORY_OFFSET UNITYSDK_OFFSET(0x17917650)
#define SYSTEM_GC_GET_EPHEMERON_TOMBSTONE_OFFSET UNITYSDK_OFFSET(0x179173E0)
#define SYSTEM_GC_GET_MAXGENERATION_OFFSET UNITYSDK_OFFSET(0x17917450)
#define SYSTEM_GC_INTERNALCOLLECT_OFFSET UNITYSDK_OFFSET(0x179173A0)
#define SYSTEM_GC_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x179174F0)
#define SYSTEM_GC_REGISTER_EPHEMERON_ARRAY_OFFSET UNITYSDK_OFFSET(0x179173D0)
#define SYSTEM_GC_REREGISTERFORFINALIZE_OFFSET UNITYSDK_OFFSET(0x179175D0)
#define SYSTEM_GC_SUPPRESSFINALIZE_OFFSET UNITYSDK_OFFSET(0x17917540)
#define SYSTEM_GC_WAITFORPENDINGFINALIZERS_OFFSET UNITYSDK_OFFSET(0x17917500)
#define SYSTEM_GC__CCTOR_OFFSET UNITYSDK_OFFSET(0x17917690)
#define SYSTEM_GC__REREGISTERFORFINALIZE_OFFSET UNITYSDK_OFFSET(0x179175A0)
#define SYSTEM_GC__SUPPRESSFINALIZE_OFFSET UNITYSDK_OFFSET(0x17917510)

namespace System
{
	inline static constexpr unsigned int GC_TypeDefinitionIndex = 251;

	class GC : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_EPHEMERON_TOMBSTONE()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GC_TypeDefinitionIndex)->GetStaticField(0x6DE0);
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
