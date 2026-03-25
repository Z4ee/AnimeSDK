#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_PROBUILDER_VECTORHASH_GETHASHCODE_1_OFFSET UNITYSDK_OFFSET(0x18889760)
#define UNITYENGINE_PROBUILDER_VECTORHASH_GETHASHCODE_2_OFFSET UNITYSDK_OFFSET(0x188B3DD0)
#define UNITYENGINE_PROBUILDER_VECTORHASH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x188B3D10)
#define UNITYENGINE_PROBUILDER_VECTORHASH_HASHFLOAT_OFFSET UNITYSDK_OFFSET(0x188B3CB0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int VectorHash_TypeDefinitionIndex = 34185;

	class VectorHash : public ::System::Object
	{
	public:
		// static const ::System::Single FltCompareResolution; // 0x0

		static ::System::Int32 HashFloat(::System::Single f)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTORHASH_HASHFLOAT_OFFSET))(f);
		}

		static ::System::Int32 GetHashCode(::UnityEngine::Vector2 v)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTORHASH_GETHASHCODE_OFFSET))(v);
		}

		static ::System::Int32 GetHashCode_1(::UnityEngine::Vector3 v)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTORHASH_GETHASHCODE_1_OFFSET))(v);
		}

		static ::System::Int32 GetHashCode_2(::UnityEngine::Vector4 v)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTORHASH_GETHASHCODE_2_OFFSET))(v);
		}
	};
}
