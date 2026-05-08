#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_HANDLECOLLECTOR_ADD_OFFSET UNITYSDK_OFFSET(0x1B1F33B0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_HANDLECOLLECTOR_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1B1F3370)
#define SYSTEM_RUNTIME_INTEROPSERVICES_HANDLECOLLECTOR_GET_INITIALTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1B1F3380)
#define SYSTEM_RUNTIME_INTEROPSERVICES_HANDLECOLLECTOR_GET_MAXIMUMTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1B1F3390)
#define SYSTEM_RUNTIME_INTEROPSERVICES_HANDLECOLLECTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B1F33A0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_HANDLECOLLECTOR_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B1F3760)
#define SYSTEM_RUNTIME_INTEROPSERVICES_HANDLECOLLECTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B1F3240)
#define SYSTEM_RUNTIME_INTEROPSERVICES_HANDLECOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1F3230)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int HandleCollector_TypeDefinitionIndex = 3125;

	class HandleCollector : public ::System::Object
	{
	public:
		// static const ::System::Int32 deltaPercent = 0xA; // 0x0
		::Il2CppArray<::System::Int32>* gc_counts; // 0x10
		::System::String* name; // 0x18
		::System::Int32 handleCount; // 0x20
		::System::Int32 threshold; // 0x24
		::System::Int32 maximumThreshold; // 0x28
		::System::Int32 gc_gen; // 0x2C
		::System::Int32 initialThreshold; // 0x30

		::System::Void _ctor(::System::String* name, ::System::Int32 initialThreshold)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_HANDLECOLLECTOR__CTOR_OFFSET))(this, name, initialThreshold);
		}

		::System::Void _ctor_1(::System::String* name, ::System::Int32 initialThreshold, ::System::Int32 maximumThreshold)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_HANDLECOLLECTOR__CTOR_1_OFFSET))(this, name, initialThreshold, maximumThreshold);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_HANDLECOLLECTOR_GET_COUNT_OFFSET))(this);
		}

		::System::Int32 get_InitialThreshold()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_HANDLECOLLECTOR_GET_INITIALTHRESHOLD_OFFSET))(this);
		}

		::System::Int32 get_MaximumThreshold()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_HANDLECOLLECTOR_GET_MAXIMUMTHRESHOLD_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_HANDLECOLLECTOR_GET_NAME_OFFSET))(this);
		}

		::System::Void Add()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_HANDLECOLLECTOR_ADD_OFFSET))(this);
		}

		::System::Void Remove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_HANDLECOLLECTOR_REMOVE_OFFSET))(this);
		}
	};
}
