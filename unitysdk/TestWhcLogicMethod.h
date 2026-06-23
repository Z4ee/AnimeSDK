#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define TESTWHCLOGICMETHOD_LOCKTARGET_OFFSET UNITYSDK_OFFSET(0x1E7A9F20)
#define TESTWHCLOGICMETHOD_STARTZOOM_OFFSET UNITYSDK_OFFSET(0x1E7A9F00)
#define TESTWHCLOGICMETHOD_STOPZOOM_OFFSET UNITYSDK_OFFSET(0x1E7A9F10)
#define TESTWHCLOGICMETHOD_TEST_OFFSET UNITYSDK_OFFSET(0x1E7A9DC0)
#define TESTWHCLOGICMETHOD_UNLOCK_OFFSET UNITYSDK_OFFSET(0x1E7AA080)
#define TESTWHCLOGICMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AA090)

inline static constexpr unsigned int TestWhcLogicMethod_TypeDefinitionIndex = 91056;

class TestWhcLogicMethod : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single fov; // 0x18
	::System::Single startTime; // 0x1C
	::UnityEngine::AnimationCurve* StartCurve; // 0x20
	::System::Single endTime; // 0x28
	::UnityEngine::AnimationCurve* endCurve; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* uniqueids; // 0x38
	::UnityEngine::Transform* Target; // 0x40
	::System::Single max; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTWHCLOGICMETHOD__CTOR_OFFSET))(this);
	}

	::System::Void Test()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTWHCLOGICMETHOD_TEST_OFFSET))(this);
	}

	::System::Void StartZoom()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTWHCLOGICMETHOD_STARTZOOM_OFFSET))(this);
	}

	::System::Void StopZoom()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTWHCLOGICMETHOD_STOPZOOM_OFFSET))(this);
	}

	::System::Void LockTarget()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTWHCLOGICMETHOD_LOCKTARGET_OFFSET))(this);
	}

	::System::Void Unlock()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTWHCLOGICMETHOD_UNLOCK_OFFSET))(this);
	}
};
