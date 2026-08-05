#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_1_OFFSET UNITYSDK_OFFSET(0x1F7118B0)
#define UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_2_OFFSET UNITYSDK_OFFSET(0x1F7118F0)
#define UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_3_OFFSET UNITYSDK_OFFSET(0x1F711940)
#define UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_4_OFFSET UNITYSDK_OFFSET(0x1F7119A0)
#define UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_5_OFFSET UNITYSDK_OFFSET(0x1F711A20)
#define UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_6_OFFSET UNITYSDK_OFFSET(0x1F711AB0)
#define UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_OFFSET UNITYSDK_OFFSET(0x1F711890)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int HashUtility_TypeDefinitionIndex = 33063;

	class HashUtility : public ::System::Object
	{
	public:
		static ::System::Int32 CombineHash(::System::Int32 h1, ::System::Int32 h2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_OFFSET))(h1, h2);
		}

		static ::System::Int32 CombineHash_1(::System::Int32 h1, ::System::Int32 h2, ::System::Int32 h3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_1_OFFSET))(h1, h2, h3);
		}

		static ::System::Int32 CombineHash_2(::System::Int32 h1, ::System::Int32 h2, ::System::Int32 h3, ::System::Int32 h4)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_2_OFFSET))(h1, h2, h3, h4);
		}

		static ::System::Int32 CombineHash_3(::System::Int32 h1, ::System::Int32 h2, ::System::Int32 h3, ::System::Int32 h4, ::System::Int32 h5)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_3_OFFSET))(h1, h2, h3, h4, h5);
		}

		static ::System::Int32 CombineHash_4(::System::Int32 h1, ::System::Int32 h2, ::System::Int32 h3, ::System::Int32 h4, ::System::Int32 h5, ::System::Int32 h6)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_4_OFFSET))(h1, h2, h3, h4, h5, h6);
		}

		static ::System::Int32 CombineHash_5(::System::Int32 h1, ::System::Int32 h2, ::System::Int32 h3, ::System::Int32 h4, ::System::Int32 h5, ::System::Int32 h6, ::System::Int32 h7)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_5_OFFSET))(h1, h2, h3, h4, h5, h6, h7);
		}

		static ::System::Int32 CombineHash_6(::Il2CppArray<::System::Int32>* hashes)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_HASHUTILITY_COMBINEHASH_6_OFFSET))(hashes);
		}
	};
}
