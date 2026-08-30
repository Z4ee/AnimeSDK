#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define MIHOYOEMOTION_BONESHAPE_SETNEUTRAL_OFFSET UNITYSDK_OFFSET(0x1EFEB670)
#define MIHOYOEMOTION_BONESHAPE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EFEB870)
#define MIHOYOEMOTION_BONESHAPE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1EFEB910)
#define MIHOYOEMOTION_BONESHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFEB810)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int BoneShape_TypeDefinitionIndex = 44820;

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

		::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BONESHAPE__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BONESHAPE__CTOR_1_OFFSET))(this, a1, a2, a3);
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
