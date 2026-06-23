#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/PBDDeformConstraintAngleLimit.h"
#include "unitysdk/UnityEngine/PBDDeformConstraintAngleMotor.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine
{
	inline static constexpr unsigned int PBDDeformJointConstraint_TypeDefinitionIndex = 18756;

	struct alignas(4) PBDDeformJointConstraint
	{
		::System::UInt32 particle0; // 0x10
		::System::UInt32 particle1; // 0x14
		::UnityEngine::Vector3 particleOffset0; // 0x18
		::UnityEngine::Vector3 particleOffset1; // 0x24
		::UnityEngine::Quaternion rotation; // 0x30
		::System::Single compliance; // 0x40
		::UnityEngine::PBDDeformConstraintAngleLimit xLimit; // 0x44
		::UnityEngine::PBDDeformConstraintAngleLimit yLimit; // 0x50
		::UnityEngine::PBDDeformConstraintAngleLimit zLimit; // 0x5C
		::UnityEngine::PBDDeformConstraintAngleMotor xMotor; // 0x68
		::UnityEngine::PBDDeformConstraintAngleMotor yMotor; // 0x70
		::UnityEngine::PBDDeformConstraintAngleMotor zMotor; // 0x78
	};
}
