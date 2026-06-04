#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSource_EventData.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDARRAY_OFFSET UNITYSDK_OFFSET(0x3837000)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDBINARY_1_OFFSET UNITYSDK_OFFSET(0x3836FF0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDBINARY_OFFSET UNITYSDK_OFFSET(0x3836FE0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDSCALAR_OFFSET UNITYSDK_OFFSET(0x3836FD0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_BEGINBUFFEREDARRAY_OFFSET UNITYSDK_OFFSET(0x3837010)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_BEGINBUFFERED_OFFSET UNITYSDK_OFFSET(0x38370B0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_DISABLE_OFFSET UNITYSDK_OFFSET(0x3836F30)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENABLE_OFFSET UNITYSDK_OFFSET(0x3836EE0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENDBUFFEREDARRAY_OFFSET UNITYSDK_OFFSET(0x38370A0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENDBUFFERED_OFFSET UNITYSDK_OFFSET(0x3837130)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENSUREBUFFER_1_OFFSET UNITYSDK_OFFSET(0x38371E0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENSUREBUFFER_OFFSET UNITYSDK_OFFSET(0x38371B0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_FINISH_OFFSET UNITYSDK_OFFSET(0x3836F50)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_GROWBUFFER_OFFSET UNITYSDK_OFFSET(0x3837210)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_PINARRAY_OFFSET UNITYSDK_OFFSET(0x3837240)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_SCALARSBEGIN_OFFSET UNITYSDK_OFFSET(0x3837250)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_SCALARSEND_OFFSET UNITYSDK_OFFSET(0x3837260)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int DataCollector_TypeDefinitionIndex = 1580;

	struct alignas(8) DataCollector
	{
		static ::System::Diagnostics::Tracing::DataCollector* StaticGet_ThreadInstance()
		{
			return (::System::Diagnostics::Tracing::DataCollector*)Il2CppClass::FromTypeDefinitionIndex(DataCollector_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Byte* scratchEnd; // 0x10
		::System::Diagnostics::Tracing::EventSource_EventData* datasEnd; // 0x18
		::System::Runtime::InteropServices::GCHandle* pinsEnd; // 0x20
		::System::Diagnostics::Tracing::EventSource_EventData* datasStart; // 0x28
		::System::Byte* scratch; // 0x30
		::System::Diagnostics::Tracing::EventSource_EventData* datas; // 0x38
		::System::Runtime::InteropServices::GCHandle* pins; // 0x40
		::Il2CppArray<::System::Byte>* buffer; // 0x48
		::System::Int32 bufferPos; // 0x50
		::System::Int32 bufferNesting; // 0x54
		::System::Boolean writingScalars; // 0x58

		::System::Void Enable(::System::Byte* a1, ::System::Int32 a2, ::System::Diagnostics::Tracing::EventSource_EventData* a3, ::System::Int32 a4, ::System::Runtime::InteropServices::GCHandle* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Diagnostics::Tracing::EventSource_EventData*, ::System::Int32, ::System::Runtime::InteropServices::GCHandle*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENABLE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_DISABLE_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::EventSource_EventData* Finish()
		{
			return ((::System::Diagnostics::Tracing::EventSource_EventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_FINISH_OFFSET))(this);
		}

		::System::Void AddScalar(::System::Void* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDSCALAR_OFFSET))(this, a1, a2);
		}

		::System::Void AddBinary(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDBINARY_OFFSET))(this, a1, a2);
		}

		::System::Void AddBinary_1(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDBINARY_1_OFFSET))(this, a1, a2);
		}

		::System::Void AddArray(::System::Array* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDARRAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 BeginBufferedArray()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_BEGINBUFFEREDARRAY_OFFSET))(this);
		}

		::System::Void EndBufferedArray(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENDBUFFEREDARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void BeginBuffered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_BEGINBUFFERED_OFFSET))(this);
		}

		::System::Void EndBuffered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENDBUFFERED_OFFSET))(this);
		}

		::System::Void EnsureBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENSUREBUFFER_OFFSET))(this);
		}

		::System::Void EnsureBuffer_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENSUREBUFFER_1_OFFSET))(this, a1);
		}

		::System::Void GrowBuffer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_GROWBUFFER_OFFSET))(this, a1);
		}

		::System::Void PinArray(::System::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_PINARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void ScalarsBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_SCALARSBEGIN_OFFSET))(this);
		}

		::System::Void ScalarsEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_SCALARSEND_OFFSET))(this);
		}
	};
}
