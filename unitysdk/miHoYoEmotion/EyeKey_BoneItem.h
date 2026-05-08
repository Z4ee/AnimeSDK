#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MIHOYOEMOTION_EYEKEY_BONEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19796870)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EyeKey_BoneItem_TypeDefinitionIndex = 37720;

	class EyeKey_BoneItem : public ::System::Object
	{
	public:
		::System::String* boneName; // 0x10
		::UnityEngine::Transform* boneTrans; // 0x18
		::UnityEngine::Vector3 boneRot; // 0x20
		::UnityEngine::Vector3 bonePos; // 0x2C
		::UnityEngine::Vector3 boneScale; // 0x38
		::System::Int32 boneHash; // 0x44
		::System::Int32 handlerIndex; // 0x48
		::UnityEngine::Vector3 debugLocalPos; // 0x4C
		::UnityEngine::Vector3 debugLocalRot; // 0x58
		::UnityEngine::Vector3 debugOriginLocalPos; // 0x64
		::UnityEngine::Vector3 debugOriginLocalRot; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_BONEITEM__CTOR_OFFSET))(this);
		}
	};
}
