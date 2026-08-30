#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityChan/SpringManager_BoneTag.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityChan { class SpringCollider; }
namespace UnityEngine { class Transform; }

#define UNITYCHAN_SPRINGBONE_AWAKE_OFFSET UNITYSDK_OFFSET(0x104F8010)
#define UNITYCHAN_SPRINGBONE_GET_CURRTIPPOS_OFFSET UNITYSDK_OFFSET(0x104F82A0)
#define UNITYCHAN_SPRINGBONE_GET_CUSTOMCHILDPOS_OFFSET UNITYSDK_OFFSET(0x104F82F0)
#define UNITYCHAN_SPRINGBONE_GET_PREVTIPPOS_OFFSET UNITYSDK_OFFSET(0x104F82C0)
#define UNITYCHAN_SPRINGBONE_GET_SPRINGLENGTH_OFFSET UNITYSDK_OFFSET(0x104F82E0)
#define UNITYCHAN_SPRINGBONE_METHOD_5_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x104F8310)
#define UNITYCHAN_SPRINGBONE_METHOD_5_D1AA082DEC215AEF_OFFSET UNITYSDK_OFFSET(0x104F9A70)
#define UNITYCHAN_SPRINGBONE_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x104F99F0)
#define UNITYCHAN_SPRINGBONE_PREUPDATESPRING_OFFSET UNITYSDK_OFFSET(0x104F8410)
#define UNITYCHAN_SPRINGBONE_RESETSPRINGBONEDATA_OFFSET UNITYSDK_OFFSET(0x104F8000)
#define UNITYCHAN_SPRINGBONE_UPDATESPRING_OFFSET UNITYSDK_OFFSET(0x104F84F0)
#define UNITYCHAN_SPRINGBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x104F9AF0)

namespace UnityChan
{
	inline static constexpr unsigned int SpringBone_TypeDefinitionIndex = 48141;

	class SpringBone : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityChan::SpringManager_BoneTag boneTag; // 0x18
		::UnityEngine::Transform* child; // 0x20
		::System::Boolean customChildPosEnable; // 0x28
		::UnityEngine::Vector3 customChildOffsetPos; // 0x2C
		::UnityEngine::Vector3 boneAxis; // 0x38
		::System::Single radius; // 0x44
		::System::Single rootOffsetBlend; // 0x48
		::System::Boolean isUseEachBoneForceSettings; // 0x4C
		::System::Single stiffnessForce; // 0x50
		::System::Single dragForce; // 0x54
		::UnityEngine::Vector3 springForce; // 0x58
		::Il2CppArray<::UnityChan::SpringCollider*>* colliders; // 0x68
		::System::Single dynamicRatio; // 0x70
		::System::Boolean debug; // 0x74
		::System::Single threshold; // 0x78
		::System::Single CHOKBPFEBLP; // 0x7C
		::UnityEngine::Transform* HGCDEOLOHBM; // 0x80
		::UnityEngine::Vector3 NKEJEHNBIKJ; // 0x88
		::UnityEngine::Vector3 IEFCAGJOIAG; // 0x94
		::UnityEngine::Quaternion JJBGIAPBOGA; // 0xA0
		::UnityEngine::Vector3 BPOKJDAHLJE; // 0xB0
		::UnityEngine::Vector3 DDABPMMMIHJ; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGBONE__CTOR_OFFSET))(this);
		}

		::System::Void ResetSpringBoneData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGBONE_RESETSPRINGBONEDATA_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_CurrTipPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGBONE_GET_CURRTIPPOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_PrevTipPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGBONE_GET_PREVTIPPOS_OFFSET))(this);
		}

		::System::Single get_SpringLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGBONE_GET_SPRINGLENGTH_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_CustomChildPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGBONE_GET_CUSTOMCHILDPOS_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGBONE_AWAKE_OFFSET))(this);
		}

		::System::Void PreUpdateSpring(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGBONE_PREUPDATESPRING_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void UpdateSpring(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::Vector3 a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGBONE_UPDATESPRING_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGBONE_ONDRAWGIZMOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_5_D1AA082DEC215AEF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGBONE_METHOD_5_D1AA082DEC215AEF_OFFSET))(this);
		}

		::System::Void Method_5_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGBONE_METHOD_5_30D1209326FA87FC_OFFSET))(this);
		}
	};
}
