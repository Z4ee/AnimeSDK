#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEUTILS_COMBINEHASH_OFFSET UNITYSDK_OFFSET(0x1AD497F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEUTILS_LERPINPLACE_1_OFFSET UNITYSDK_OFFSET(0x1AD49770)
#define UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEUTILS_LERPINPLACE_2_OFFSET UNITYSDK_OFFSET(0x1AD497C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEUTILS_LERPINPLACE_3_OFFSET UNITYSDK_OFFSET(0x1AD497D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEUTILS_LERPINPLACE_OFFSET UNITYSDK_OFFSET(0x1AD49700)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int InterpolateUtils_TypeDefinitionIndex = 5982;

	class InterpolateUtils : public ::System::Object
	{
	public:
		static ::System::Void LerpInPlace(::UnityEngine::Vector4& v4, ::UnityEngine::Vector4 to, ::System::Single t)
		{
			return ((::System::Void(*)(::UnityEngine::Vector4&, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEUTILS_LERPINPLACE_OFFSET))(v4, to, t);
		}

		static ::System::Void LerpInPlace_1(::UnityEngine::Vector3& v3, ::UnityEngine::Vector3 to, ::System::Single t)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEUTILS_LERPINPLACE_1_OFFSET))(v3, to, t);
		}

		static ::System::Void LerpInPlace_2(::System::Boolean& b, ::System::Boolean to, ::System::Single t)
		{
			return ((::System::Void(*)(::System::Boolean&, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEUTILS_LERPINPLACE_2_OFFSET))(b, to, t);
		}

		static ::System::Void LerpInPlace_3(::System::Single& f, ::System::Single to, ::System::Single t)
		{
			return ((::System::Void(*)(::System::Single&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEUTILS_LERPINPLACE_3_OFFSET))(f, to, t);
		}

		static ::System::Void CombineHash(::System::Int32& acc, ::System::Int32 hash)
		{
			return ((::System::Void(*)(::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_INTERPOLATEUTILS_COMBINEHASH_OFFSET))(acc, hash);
		}
	};
}
