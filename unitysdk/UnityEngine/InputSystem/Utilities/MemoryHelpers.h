#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/MemoryHelpers_BitRegion.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_ALIGNNATURAL_OFFSET UNITYSDK_OFFSET(0x1EC4DA10)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_COMPARE_OFFSET UNITYSDK_OFFSET(0x1EC4CF70)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_COMPUTEFOLLOWINGBYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x1EC4D120)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMCMPBITREGION_OFFSET UNITYSDK_OFFSET(0x1EC4CFE0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMCPYBITREGION_OFFSET UNITYSDK_OFFSET(0x1EC4D180)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMCPYMASKED_OFFSET UNITYSDK_OFFSET(0x1EC4D330)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMSET_OFFSET UNITYSDK_OFFSET(0x1EC4D250)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READEXCESSKMULTIPLEBITSASINT_OFFSET UNITYSDK_OFFSET(0x1EC4D700)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READMULTIPLEBITSASNORMALIZEDUINT_OFFSET UNITYSDK_OFFSET(0x1EC4D750)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READMULTIPLEBITSASUINT_OFFSET UNITYSDK_OFFSET(0x1EC4D410)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READSINGLEBIT_OFFSET UNITYSDK_OFFSET(0x1EC4CFC0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READTWOSCOMPLEMENTMULTIPLEBITSASINT_OFFSET UNITYSDK_OFFSET(0x1EC4D6E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_SETBITSINBUFFER_OFFSET UNITYSDK_OFFSET(0x1EC4D810)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITEINTASEXCESSKMULTIPLEBITS_OFFSET UNITYSDK_OFFSET(0x1EC4D730)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITEINTASTWOSCOMPLEMENTMULTIPLEBITS_OFFSET UNITYSDK_OFFSET(0x1EC4D6F0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITENORMALIZEDUINTASMULTIPLEBITS_OFFSET UNITYSDK_OFFSET(0x1EC4D7B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITESINGLEBIT_OFFSET UNITYSDK_OFFSET(0x1EC4D140)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITEUINTASMULTIPLEBITS_OFFSET UNITYSDK_OFFSET(0x1EC4D560)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int MemoryHelpers_TypeDefinitionIndex = 32676;

	class MemoryHelpers : public ::System::Object
	{
	public:
		static ::System::Boolean Compare(::System::Void* ptr1, ::System::Void* ptr2, ::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion region)
		{
			return ((::System::Boolean(*)(::System::Void*, ::System::Void*, ::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_COMPARE_OFFSET))(ptr1, ptr2, region);
		}

		static ::System::UInt32 ComputeFollowingByteOffset(::System::UInt32 byteOffset, ::System::UInt32 sizeInBits)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_COMPUTEFOLLOWINGBYTEOFFSET_OFFSET))(byteOffset, sizeInBits);
		}

		static ::System::Void WriteSingleBit(::System::Void* ptr, ::System::UInt32 bitOffset, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Void*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITESINGLEBIT_OFFSET))(ptr, bitOffset, value);
		}

		static ::System::Boolean ReadSingleBit(::System::Void* ptr, ::System::UInt32 bitOffset)
		{
			return ((::System::Boolean(*)(::System::Void*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READSINGLEBIT_OFFSET))(ptr, bitOffset);
		}

		static ::System::Void MemCpyBitRegion(::System::Void* destination, ::System::Void* source, ::System::UInt32 bitOffset, ::System::UInt32 bitCount)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Void*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMCPYBITREGION_OFFSET))(destination, source, bitOffset, bitCount);
		}

		static ::System::Boolean MemCmpBitRegion(::System::Void* ptr1, ::System::Void* ptr2, ::System::UInt32 bitOffset, ::System::UInt32 bitCount, ::System::Void* mask)
		{
			return ((::System::Boolean(*)(::System::Void*, ::System::Void*, ::System::UInt32, ::System::UInt32, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMCMPBITREGION_OFFSET))(ptr1, ptr2, bitOffset, bitCount, mask);
		}

		static ::System::Void MemSet(::System::Void* destination, ::System::Int32 numBytes, ::System::Byte value)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMSET_OFFSET))(destination, numBytes, value);
		}

		static ::System::Void MemCpyMasked(::System::Void* destination, ::System::Void* source, ::System::Int32 numBytes, ::System::Void* mask)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Void*, ::System::Int32, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_MEMCPYMASKED_OFFSET))(destination, source, numBytes, mask);
		}

		static ::System::UInt32 ReadMultipleBitsAsUInt(::System::Void* ptr, ::System::UInt32 bitOffset, ::System::UInt32 bitCount)
		{
			return ((::System::UInt32(*)(::System::Void*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READMULTIPLEBITSASUINT_OFFSET))(ptr, bitOffset, bitCount);
		}

		static ::System::Void WriteUIntAsMultipleBits(::System::Void* ptr, ::System::UInt32 bitOffset, ::System::UInt32 bitCount, ::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::Void*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITEUINTASMULTIPLEBITS_OFFSET))(ptr, bitOffset, bitCount, value);
		}

		static ::System::Int32 ReadTwosComplementMultipleBitsAsInt(::System::Void* ptr, ::System::UInt32 bitOffset, ::System::UInt32 bitCount)
		{
			return ((::System::Int32(*)(::System::Void*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READTWOSCOMPLEMENTMULTIPLEBITSASINT_OFFSET))(ptr, bitOffset, bitCount);
		}

		static ::System::Void WriteIntAsTwosComplementMultipleBits(::System::Void* ptr, ::System::UInt32 bitOffset, ::System::UInt32 bitCount, ::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Void*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITEINTASTWOSCOMPLEMENTMULTIPLEBITS_OFFSET))(ptr, bitOffset, bitCount, value);
		}

		static ::System::Int32 ReadExcessKMultipleBitsAsInt(::System::Void* ptr, ::System::UInt32 bitOffset, ::System::UInt32 bitCount)
		{
			return ((::System::Int32(*)(::System::Void*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READEXCESSKMULTIPLEBITSASINT_OFFSET))(ptr, bitOffset, bitCount);
		}

		static ::System::Void WriteIntAsExcessKMultipleBits(::System::Void* ptr, ::System::UInt32 bitOffset, ::System::UInt32 bitCount, ::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Void*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITEINTASEXCESSKMULTIPLEBITS_OFFSET))(ptr, bitOffset, bitCount, value);
		}

		static ::System::Single ReadMultipleBitsAsNormalizedUInt(::System::Void* ptr, ::System::UInt32 bitOffset, ::System::UInt32 bitCount)
		{
			return ((::System::Single(*)(::System::Void*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_READMULTIPLEBITSASNORMALIZEDUINT_OFFSET))(ptr, bitOffset, bitCount);
		}

		static ::System::Void WriteNormalizedUIntAsMultipleBits(::System::Void* ptr, ::System::UInt32 bitOffset, ::System::UInt32 bitCount, ::System::Single value)
		{
			return ((::System::Void(*)(::System::Void*, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_WRITENORMALIZEDUINTASMULTIPLEBITS_OFFSET))(ptr, bitOffset, bitCount, value);
		}

		static ::System::Void SetBitsInBuffer(::System::Void* buffer, ::System::Int32 byteOffset, ::System::Int32 bitOffset, ::System::Int32 sizeInBits, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_SETBITSINBUFFER_OFFSET))(buffer, byteOffset, bitOffset, sizeInBits, value);
		}

		static ::System::UInt32 AlignNatural(::System::UInt32 offset, ::System::UInt32 sizeInBytes)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_MEMORYHELPERS_ALIGNNATURAL_OFFSET))(offset, sizeInBytes);
		}
	};
}
