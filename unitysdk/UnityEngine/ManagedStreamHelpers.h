#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class Stream; }

#define UNITYENGINE_MANAGEDSTREAMHELPERS_MANAGEDSTREAMLENGTH_OFFSET UNITYSDK_OFFSET(0x1E600920)
#define UNITYENGINE_MANAGEDSTREAMHELPERS_MANAGEDSTREAMREAD_OFFSET UNITYSDK_OFFSET(0x1E6007B0)
#define UNITYENGINE_MANAGEDSTREAMHELPERS_MANAGEDSTREAMSEEK_OFFSET UNITYSDK_OFFSET(0x1E600870)
#define UNITYENGINE_MANAGEDSTREAMHELPERS_VALIDATELOADFROMSTREAM_OFFSET UNITYSDK_OFFSET(0x1E6006B0)

namespace UnityEngine
{
	inline static constexpr unsigned int ManagedStreamHelpers_TypeDefinitionIndex = 5351;

	class ManagedStreamHelpers : public ::System::Object
	{
	public:
		static ::System::Void ValidateLoadFromStream(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + UNITYENGINE_MANAGEDSTREAMHELPERS_VALIDATELOADFROMSTREAM_OFFSET))(stream);
		}

		static ::System::Void ManagedStreamRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::IO::Stream* stream, ::System::IntPtr returnValueAddress)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::IO::Stream*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_MANAGEDSTREAMHELPERS_MANAGEDSTREAMREAD_OFFSET))(buffer, offset, count, stream, returnValueAddress);
		}

		static ::System::Void ManagedStreamSeek(::System::Int64 offset, ::System::UInt32 origin, ::System::IO::Stream* stream, ::System::IntPtr returnValueAddress)
		{
			return ((::System::Void(*)(::System::Int64, ::System::UInt32, ::System::IO::Stream*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_MANAGEDSTREAMHELPERS_MANAGEDSTREAMSEEK_OFFSET))(offset, origin, stream, returnValueAddress);
		}

		static ::System::Void ManagedStreamLength(::System::IO::Stream* stream, ::System::IntPtr returnValueAddress)
		{
			return ((::System::Void(*)(::System::IO::Stream*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_MANAGEDSTREAMHELPERS_MANAGEDSTREAMLENGTH_OFFSET))(stream, returnValueAddress);
		}
	};
}
