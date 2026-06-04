#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_BUFFERS_UTILITIES_GETMAXSIZEFORBUCKET_OFFSET UNITYSDK_OFFSET(0x1B27F4B0)
#define UNITYENGINE_BUFFERS_UTILITIES_SELECTBUCKETINDEX_OFFSET UNITYSDK_OFFSET(0x1B27F440)

namespace UnityEngine::Buffers
{
	inline static constexpr unsigned int Utilities_TypeDefinitionIndex = 4929;

	class Utilities : public ::System::Object
	{
	public:
		static ::System::Int32 SelectBucketIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_BUFFERS_UTILITIES_SELECTBUCKETINDEX_OFFSET))(a1);
		}

		static ::System::Int32 GetMaxSizeForBucket(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_BUFFERS_UTILITIES_GETMAXSIZEFORBUCKET_OFFSET))(a1);
		}
	};
}
