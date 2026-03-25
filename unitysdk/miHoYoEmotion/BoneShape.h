#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define MIHOYOEMOTION_BONESHAPE_SETNEUTRAL_OFFSET UNITYSDK_OFFSET(0x861F410)
#define MIHOYOEMOTION_BONESHAPE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x861F610)
#define MIHOYOEMOTION_BONESHAPE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x861F6B0)
#define MIHOYOEMOTION_BONESHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x861F5B0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int BoneShape_TypeDefinitionIndex = 35131;

	class BoneShape : public ::System::Object
	{
	public:
		::UnityEngine::Transform* bone; // 0x10
		::UnityEngine::Vector3 endPosition; // 0x18
		::UnityEngine::Vector3 endRotation; // 0x24
		::UnityEngine::Vector3 endScale; // 0x30
		::System::Boolean lockPosition; // 0x3C
		::System::Boolean lockRotation; // 0x3D
		::UnityEngine::Vector3 neutralPosition; // 0x40
		::UnityEngine::Vector3 neutralRotation; // 0x4C
		::UnityEngine::Vector3 neutralScale; // 0x58

		::System::Void _ctor(::UnityEngine::Transform* bone, ::UnityEngine::Vector3 endPosition, ::UnityEngine::Vector3 endRotation, ::UnityEngine::Vector3 endScale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BONESHAPE__CTOR_OFFSET))(this, bone, endPosition, endRotation, endScale);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* bone, ::UnityEngine::Vector3 endPosition, ::UnityEngine::Vector3 endRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BONESHAPE__CTOR_1_OFFSET))(this, bone, endPosition, endRotation);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BONESHAPE__CTOR_2_OFFSET))(this);
		}

		::System::Void SetNeutral()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BONESHAPE_SETNEUTRAL_OFFSET))(this);
		}
	};
}
