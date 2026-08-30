#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class Stream; }

#define UNITYENGINE_MANAGEDSTREAMHELPERS_MANAGEDSTREAMLENGTH_OFFSET UNITYSDK_OFFSET(0x1ED2E7B0)
#define UNITYENGINE_MANAGEDSTREAMHELPERS_MANAGEDSTREAMREAD_OFFSET UNITYSDK_OFFSET(0x1ED2E590)
#define UNITYENGINE_MANAGEDSTREAMHELPERS_MANAGEDSTREAMSEEK_OFFSET UNITYSDK_OFFSET(0x1ED2E6B0)
#define UNITYENGINE_MANAGEDSTREAMHELPERS_VALIDATELOADFROMSTREAM_OFFSET UNITYSDK_OFFSET(0x1ED2E3D0)

namespace UnityEngine
{
	inline static constexpr unsigned int ManagedStreamHelpers_TypeDefinitionIndex = 4328;

	class ManagedStreamHelpers : public ::System::Object
	{
	public:
		static ::System::Void ValidateLoadFromStream(::System::IO::Stream* a1)
		{
			return ((::System::Void(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + UNITYENGINE_MANAGEDSTREAMHELPERS_VALIDATELOADFROMSTREAM_OFFSET))(a1);
		}

		static ::System::Void ManagedStreamRead(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::IO::Stream* a4, ::System::IntPtr a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::IO::Stream*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_MANAGEDSTREAMHELPERS_MANAGEDSTREAMREAD_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ManagedStreamSeek(::System::Int64 a1, ::System::UInt32 a2, ::System::IO::Stream* a3, ::System::IntPtr a4)
		{
			return ((::System::Void(*)(::System::Int64, ::System::UInt32, ::System::IO::Stream*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_MANAGEDSTREAMHELPERS_MANAGEDSTREAMSEEK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ManagedStreamLength(::System::IO::Stream* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::IO::Stream*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_MANAGEDSTREAMHELPERS_MANAGEDSTREAMLENGTH_OFFSET))(a1, a2);
		}
	};
}
