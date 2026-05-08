#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/IL2CPP/RuntimeServices/BeohmGCActionType.h"

namespace System { class String; }

#define UNITY_IL2CPP_RUNTIMESERVICES_BOEHMGCSTATS_ENABLEMAXHBLKONEXPAND_OFFSET UNITYSDK_OFFSET(0x1C5573B0)
#define UNITY_IL2CPP_RUNTIMESERVICES_BOEHMGCSTATS_GETGCCOLLECTMEMORYINFO_OFFSET UNITYSDK_OFFSET(0x1C557340)
#define UNITY_IL2CPP_RUNTIMESERVICES_BOEHMGCSTATS_GETGCCOLLECTTIMEINFO_OFFSET UNITYSDK_OFFSET(0x1C557330)
#define UNITY_IL2CPP_RUNTIMESERVICES_BOEHMGCSTATS_GETGCEVENTCAPACITY_OFFSET UNITYSDK_OFFSET(0x1C557320)
#define UNITY_IL2CPP_RUNTIMESERVICES_BOEHMGCSTATS_GETGCEVENTCOUNTER_OFFSET UNITYSDK_OFFSET(0x1C557300)
#define UNITY_IL2CPP_RUNTIMESERVICES_BOEHMGCSTATS_GETGCEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C557310)
#define UNITY_IL2CPP_RUNTIMESERVICES_BOEHMGCSTATS_GETGCEXPANDINFO_OFFSET UNITYSDK_OFFSET(0x1C557350)
#define UNITY_IL2CPP_RUNTIMESERVICES_BOEHMGCSTATS_GETGCMALLOCEXCESSIVESTACKSTR_OFFSET UNITYSDK_OFFSET(0x1C557360)
#define UNITY_IL2CPP_RUNTIMESERVICES_BOEHMGCSTATS_SETMALLOCEXCESSIVETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1C5573A0)

namespace Unity::IL2CPP::RuntimeServices
{
	inline static constexpr unsigned int BoehmgcStats_TypeDefinitionIndex = 6826;

	class BoehmgcStats : public ::System::Object
	{
	public:
		static ::System::Int32 GetGCEventCounter()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITY_IL2CPP_RUNTIMESERVICES_BOEHMGCSTATS_GETGCEVENTCOUNTER_OFFSET))();
		}

		static ::Unity::IL2CPP::RuntimeServices::BeohmGCActionType GetGCEventType(::System::Int32 index)
		{
			return ((::Unity::IL2CPP::RuntimeServices::BeohmGCActionType(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_RUNTIMESERVICES_BOEHMGCSTATS_GETGCEVENTTYPE_OFFSET))(index);
		}

		static ::System::Int32 GetGCEventCapacity()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITY_IL2CPP_RUNTIMESERVICES_BOEHMGCSTATS_GETGCEVENTCAPACITY_OFFSET))();
		}

		static ::System::Boolean GetGCCollectTimeInfo(::System::Int32 index, ::System::Int32& gcno, ::System::Int64& time, ::System::Int64& gcTime, ::System::Int64& markTime, ::System::Int64& reclaimTime)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32&, ::System::Int64&, ::System::Int64&, ::System::Int64&, ::System::Int64&))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_RUNTIMESERVICES_BOEHMGCSTATS_GETGCCOLLECTTIMEINFO_OFFSET))(index, gcno, time, gcTime, markTime, reclaimTime);
		}

		static ::System::Boolean GetGCCollectMemoryInfo(::System::Int32 index, ::System::Int32& gcno, ::System::Int64& used, ::System::Int64& heap, ::System::Int64& unmap)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32&, ::System::Int64&, ::System::Int64&, ::System::Int64&))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_RUNTIMESERVICES_BOEHMGCSTATS_GETGCCOLLECTMEMORYINFO_OFFSET))(index, gcno, used, heap, unmap);
		}

		static ::System::Boolean GetGCExpandInfo(::System::Int32 index, ::System::Int32& gcno, ::System::Int64& time, ::System::Int64& addr, ::System::Int64& needSize, ::System::Int64& expandSize)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32&, ::System::Int64&, ::System::Int64&, ::System::Int64&, ::System::Int64&))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_RUNTIMESERVICES_BOEHMGCSTATS_GETGCEXPANDINFO_OFFSET))(index, gcno, time, addr, needSize, expandSize);
		}

		static ::System::String* GetGCMallocExcessiveStackStr()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITY_IL2CPP_RUNTIMESERVICES_BOEHMGCSTATS_GETGCMALLOCEXCESSIVESTACKSTR_OFFSET))();
		}

		static ::System::Void SetMallocExcessiveThreshold(::System::Int32 threshold)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_RUNTIMESERVICES_BOEHMGCSTATS_SETMALLOCEXCESSIVETHRESHOLD_OFFSET))(threshold);
		}

		static ::System::Void EnableMaxHblkOnExpand(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_RUNTIMESERVICES_BOEHMGCSTATS_ENABLEMAXHBLKONEXPAND_OFFSET))(enable);
		}
	};
}
