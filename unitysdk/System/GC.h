#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/CompilerServices/Ephemeron.h"

#define SYSTEM_GC_COLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1AB8E310)
#define SYSTEM_GC_COLLECT_OFFSET UNITYSDK_OFFSET(0x1AB8E2B0)
#define SYSTEM_GC_GETCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1AB8E240)
#define SYSTEM_GC_GETMAXGENERATION_OFFSET UNITYSDK_OFFSET(0x1AB8E250)
#define SYSTEM_GC_GETTOTALMEMORY_OFFSET UNITYSDK_OFFSET(0x18D663F0)
#define SYSTEM_GC_GET_EPHEMERON_TOMBSTONE_OFFSET UNITYSDK_OFFSET(0x1AB8E2A0)
#define SYSTEM_GC_GET_MAXGENERATION_OFFSET UNITYSDK_OFFSET(0x18D661D0)
#define SYSTEM_GC_INTERNALCOLLECT_OFFSET UNITYSDK_OFFSET(0x1AB8E260)
#define SYSTEM_GC_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x1AB8E380)
#define SYSTEM_GC_REGISTER_EPHEMERON_ARRAY_OFFSET UNITYSDK_OFFSET(0x1AB8E290)
#define SYSTEM_GC_REREGISTERFORFINALIZE_OFFSET UNITYSDK_OFFSET(0x18D66340)
#define SYSTEM_GC_SUPPRESSFINALIZE_OFFSET UNITYSDK_OFFSET(0x18D66260)
#define SYSTEM_GC_WAITFORPENDINGFINALIZERS_OFFSET UNITYSDK_OFFSET(0x18D66200)
#define SYSTEM_GC__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D66430)
#define SYSTEM_GC__REREGISTERFORFINALIZE_OFFSET UNITYSDK_OFFSET(0x18D662F0)
#define SYSTEM_GC__SUPPRESSFINALIZE_OFFSET UNITYSDK_OFFSET(0x18D66210)

namespace System
{
	inline static constexpr unsigned int GC_TypeDefinitionIndex = 250;

	class GC : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_EPHEMERON_TOMBSTONE()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GC_TypeDefinitionIndex)->GetStaticField(0x7A50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GC__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetCollectionCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GC_GETCOLLECTIONCOUNT_OFFSET))(a1);
		}

		static ::System::Int32 GetMaxGeneration()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_GC_GETMAXGENERATION_OFFSET))();
		}

		static ::System::Void InternalCollect(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GC_INTERNALCOLLECT_OFFSET))(a1);
		}

		static ::System::Void register_ephemeron_array(::Il2CppArray<::System::Runtime::CompilerServices::Ephemeron>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Runtime::CompilerServices::Ephemeron>*))((::PBYTE)hIl2Cpp + SYSTEM_GC_REGISTER_EPHEMERON_ARRAY_OFFSET))(a1);
		}

		static ::System::Object* get_ephemeron_tombstone()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GC_GET_EPHEMERON_TOMBSTONE_OFFSET))();
		}

		static ::System::Void Collect()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GC_COLLECT_OFFSET))();
		}

		static ::System::Int32 CollectionCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GC_COLLECTIONCOUNT_OFFSET))(a1);
		}

		static ::System::Void KeepAlive(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GC_KEEPALIVE_OFFSET))(a1);
		}

		static ::System::Int32 get_MaxGeneration()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_GC_GET_MAXGENERATION_OFFSET))();
		}

		static ::System::Void WaitForPendingFinalizers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GC_WAITFORPENDINGFINALIZERS_OFFSET))();
		}

		static ::System::Void _SuppressFinalize(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GC__SUPPRESSFINALIZE_OFFSET))(a1);
		}

		static ::System::Void SuppressFinalize(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GC_SUPPRESSFINALIZE_OFFSET))(a1);
		}

		static ::System::Void _ReRegisterForFinalize(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GC__REREGISTERFORFINALIZE_OFFSET))(a1);
		}

		static ::System::Void ReRegisterForFinalize(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GC_REREGISTERFORFINALIZE_OFFSET))(a1);
		}

		static ::System::Int64 GetTotalMemory(::System::Boolean a1)
		{
			return ((::System::Int64(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GC_GETTOTALMEMORY_OFFSET))(a1);
		}
	};
}
