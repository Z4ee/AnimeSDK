#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_LYRASDFCOMPRESSION_DECOMPRESSBLOCKS_OFFSET UNITYSDK_OFFSET(0x1B4BECC0)
#define UNITYENGINE_LYRASDFCOMPRESSION_DECOMPRESSBLOCSKWITHCHECK_OFFSET UNITYSDK_OFFSET(0x1B4BECD0)
#define UNITYENGINE_LYRASDFCOMPRESSION_PREPARE_OFFSET UNITYSDK_OFFSET(0x1B4BECB0)

namespace UnityEngine
{
	inline static constexpr unsigned int LyraSDFCompression_TypeDefinitionIndex = 5406;

	class LyraSDFCompression : public ::System::Object
	{
	public:
		static ::System::Void Prepare()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LYRASDFCOMPRESSION_PREPARE_OFFSET))();
		}

		static ::System::Void DecompressBlocks(::System::IntPtr compressedData, ::System::IntPtr imgData, ::System::Int32 blockNum)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LYRASDFCOMPRESSION_DECOMPRESSBLOCKS_OFFSET))(compressedData, imgData, blockNum);
		}

		static ::System::Boolean DecompressBlocskWithCheck(::System::IntPtr compressedData, ::System::IntPtr imgData, ::System::Int32 blockNum)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LYRASDFCOMPRESSION_DECOMPRESSBLOCSKWITHCHECK_OFFSET))(compressedData, imgData, blockNum);
		}
	};
}
