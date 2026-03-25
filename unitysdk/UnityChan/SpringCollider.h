#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityChan/SpringColliderType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Mesh; }

#define UNITYCHAN_SPRINGCOLLIDER_METHOD_5_FCCE5510573026EA_OFFSET UNITYSDK_OFFSET(0xAC2BD50)
#define UNITYCHAN_SPRINGCOLLIDER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xAC2C7C0)
#define UNITYCHAN_SPRINGCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xAC2CA80)

namespace UnityChan
{
	inline static constexpr unsigned int SpringCollider_TypeDefinitionIndex = 38543;

	class SpringCollider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityChan::SpringColliderType type; // 0x18
		::System::Single radius; // 0x1C
		::System::Single height; // 0x20
		::UnityEngine::Vector3 offset; // 0x24
		::UnityEngine::Vector3 rotation; // 0x30
		::UnityEngine::Mesh* Field_5_5; // 0x40
		::System::Single Field_5_6; // 0x48
		::System::Single Field_5_7; // 0x4C
		::UnityEngine::Vector3 Field_5_8; // 0x50
		::UnityEngine::Vector3 Field_5_9; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGCOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_FCCE5510573026EA(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGCOLLIDER_METHOD_5_FCCE5510573026EA_OFFSET))(this, a1, a2);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGCOLLIDER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
