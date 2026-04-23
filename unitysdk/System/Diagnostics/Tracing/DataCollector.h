#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSource_EventData.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDARRAY_OFFSET UNITYSDK_OFFSET(0x22A6EE0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDBINARY_1_OFFSET UNITYSDK_OFFSET(0x22A6ED0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDBINARY_OFFSET UNITYSDK_OFFSET(0x22A6EC0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDSCALAR_OFFSET UNITYSDK_OFFSET(0x22A6EB0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_BEGINBUFFEREDARRAY_OFFSET UNITYSDK_OFFSET(0x22A6EF0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_BEGINBUFFERED_OFFSET UNITYSDK_OFFSET(0x22A6FA0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_DISABLE_OFFSET UNITYSDK_OFFSET(0x22A6E10)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENABLE_OFFSET UNITYSDK_OFFSET(0x22A6DC0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENDBUFFEREDARRAY_OFFSET UNITYSDK_OFFSET(0x22A6F90)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENDBUFFERED_OFFSET UNITYSDK_OFFSET(0x22A7020)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENSUREBUFFER_1_OFFSET UNITYSDK_OFFSET(0x22A70D0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENSUREBUFFER_OFFSET UNITYSDK_OFFSET(0x22A70A0)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_FINISH_OFFSET UNITYSDK_OFFSET(0x22A6E30)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_GROWBUFFER_OFFSET UNITYSDK_OFFSET(0x22A7100)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_PINARRAY_OFFSET UNITYSDK_OFFSET(0x22A7130)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_SCALARSBEGIN_OFFSET UNITYSDK_OFFSET(0x22A7140)
#define SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_SCALARSEND_OFFSET UNITYSDK_OFFSET(0x22A7150)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int DataCollector_TypeDefinitionIndex = 1582;

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

		::System::Void Enable(::System::Byte* scratch, ::System::Int32 scratchSize, ::System::Diagnostics::Tracing::EventSource_EventData* datas, ::System::Int32 dataCount, ::System::Runtime::InteropServices::GCHandle* pins, ::System::Int32 pinCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Diagnostics::Tracing::EventSource_EventData*, ::System::Int32, ::System::Runtime::InteropServices::GCHandle*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENABLE_OFFSET))(this, scratch, scratchSize, datas, dataCount, pins, pinCount);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_DISABLE_OFFSET))(this);
		}

		::System::Diagnostics::Tracing::EventSource_EventData* Finish()
		{
			return ((::System::Diagnostics::Tracing::EventSource_EventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_FINISH_OFFSET))(this);
		}

		::System::Void AddScalar(::System::Void* value, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDSCALAR_OFFSET))(this, value, size);
		}

		::System::Void AddBinary(::System::String* value, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDBINARY_OFFSET))(this, value, size);
		}

		::System::Void AddBinary_1(::System::Array* value, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDBINARY_1_OFFSET))(this, value, size);
		}

		::System::Void AddArray(::System::Array* value, ::System::Int32 length, ::System::Int32 itemSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ADDARRAY_OFFSET))(this, value, length, itemSize);
		}

		::System::Int32 BeginBufferedArray()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_BEGINBUFFEREDARRAY_OFFSET))(this);
		}

		::System::Void EndBufferedArray(::System::Int32 bookmark, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENDBUFFEREDARRAY_OFFSET))(this, bookmark, count);
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

		::System::Void EnsureBuffer_1(::System::Int32 additionalSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_ENSUREBUFFER_1_OFFSET))(this, additionalSize);
		}

		::System::Void GrowBuffer(::System::Int32 required)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_GROWBUFFER_OFFSET))(this, required);
		}

		::System::Void PinArray(::System::Object* value, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_DATACOLLECTOR_PINARRAY_OFFSET))(this, value, size);
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
