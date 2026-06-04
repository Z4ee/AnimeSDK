#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine { class Transform; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_UTILS_WORLDNOSCALE_OFFSET UNITYSDK_OFFSET(0x1B04E370)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int Utils_TypeDefinitionIndex = 41597;

	class Utils : public ::System::Object
	{
	public:
		static ::UnityEngine::Matrix4x4 WorldNoScale(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_UTILS_WORLDNOSCALE_OFFSET))(a1);
		}
	};
}
