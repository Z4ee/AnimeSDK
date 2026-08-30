#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define YCORRECTION_GET_ENABLEYCORRECTION_OFFSET UNITYSDK_OFFSET(0xCDFBD80)
#define YCORRECTION_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCDFBDA0)
#define YCORRECTION_SET_ENABLEYCORRECTION_OFFSET UNITYSDK_OFFSET(0xCDFBD90)
#define YCORRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xCDFC100)

inline static constexpr unsigned int YCorrection_TypeDefinitionIndex = 48028;

class YCorrection : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::Single PIBGMMHDIFN; // 0x0
	::System::Boolean _EnableYCorrection_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + YCORRECTION__CTOR_OFFSET))(this);
	}

	::System::Boolean get_EnableYCorrection()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + YCORRECTION_GET_ENABLEYCORRECTION_OFFSET))(this);
	}

	::System::Void set_EnableYCorrection(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + YCORRECTION_SET_ENABLEYCORRECTION_OFFSET))(this, a1);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + YCORRECTION_LATEUPDATE_OFFSET))(this);
	}
};
